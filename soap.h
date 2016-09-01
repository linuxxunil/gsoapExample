
//gsoap ns2  service name:	soap
//gsoap ns2  service style:	rpc
//gsoap ns2  service encoding:	encoded
//gsoap ns2  service namespace:	http://github.com/linuxxunil 
//gsoap ns2  schema namespace:	urn:soap

class ResponseBase {
	bool status;	// Y,N
	std::string message;
	std::string dateTime;
};



// getData
class Data {
	std::string dateTime;
	std::string content;
};

class DataArray {
	int __size; 
	Data *data;
};

class DataRep : protected ResponseBase {
	int quantity;
	DataArray dataArray; 
};

int ns2__getData(
	std::string name,
	DataRep &result
);


