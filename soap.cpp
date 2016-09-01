#include "soapsoapService.h"
#include <time.h>


int soapService::getData(std::string name, DataRep &result) {
    // 
    std::string date[] = {"16:00:00","17:00:00","18:00:00"};
    std::string content[] = {"test1","test2","test3"};

    std::cout << "name : " << name << std::endl;
    result.status = true;
    result.message = "OK";
    result.dateTime = "2016/09/01 16:14:00";
    result.dataArray.__size = 3;
    result.quantity = result.dataArray.__size ;
    if ( result.dataArray.__size > 0 ) {
        result.dataArray.data = new Data[result.dataArray.__size];
        for ( int i=0 ; i<result.dataArray.__size; i++ ) {
            result.dataArray.data[i].dateTime = date[i];
            result.dataArray.data[i].content = content[i];
        }
    }
    return SOAP_OK;
}
