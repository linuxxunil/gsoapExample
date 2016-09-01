target=soap_test
all:
	g++ -o ${target} soap.cpp soapsoapService.cpp  main.cpp soapC.cpp stdsoap2.cpp -lpthread #-fpermissive -lpthread 
gen:
	soapcpp2 -jSL soap.h
clean:
	rm -rf ${target}
