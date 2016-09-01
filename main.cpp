#include <pthread.h> 
#include "soap.nsmap" 
#include "soapsoapService.h"
#include "strtool.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;

#define WSDL_PATH "proscan.wsdl"
int rep_wsdl(struct soap *soap, string path, string params) 
{  
  FILE *fd = NULL;
 
  fd = fopen(WSDL_PATH, "rb");
  if (!fd)
    return 404;
 
  soap->http_content = "text/xml";
  soap_response(soap, SOAP_FILE);
 
  for (;;)
  {
    size_t r = fread(soap->tmpbuf, 1, sizeof(soap->tmpbuf), fd);
    if (!r) 
      break;
    if (soap_send_raw(soap, soap->tmpbuf, r))
      break; 
  }
 
  fclose(fd);
  soap_end_send(soap);
  return SOAP_OK;
}

int http_get(struct soap *soap) 
{
  vector<string> vt;
  strtool::split(soap->path, vt, "?");

  if ( vt[0].compare("/proscan") == 0 ) {
    if ( vt.size() == 2 && vt[1].compare("wsdl") == 0 ) {
      return rep_wsdl(soap, vt[0] , vt[1]);
    } 
  }  
  return SOAP_GET_METHOD;
}



int main(int argc, char **argv) 
{
  struct soap soap;
  int server_port = 8080;
  //proscanService proscan(SOAP_XML_INDENT);
  soap.fget = http_get;
  soap.bind_flags = SO_REUSEADDR;
  soap.send_timeout = 60; // 60 seconds 
  soap.recv_timeout = 60; // 60 seconds 
  soap.accept_timeout = 3600; // server stops after 1 hour of inactivity 
  soap.max_keep_alive = 100; // max keep-alive sequence 
  soapService soapService(&soap);

 
  if ( argc > 2 ) {
    server_port = atoi(argv[1]);
  }
  
  if (soapService.run(server_port) != SOAP_OK) {
    soapService.soap_stream_fault(std::cerr);
  }
  soapService.destroy();
}

