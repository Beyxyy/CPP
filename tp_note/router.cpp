#include "header/router.h"
#include <string>
#include <iostream>
using namespace std;

int Router::getRoutingTableSize() const{
    return this->routingTableSize;
}

void Router::printInfo() const {
    NetWorkDevice::printInfo();
    cout<<"Nb Route : "<< this->routingTableSize <<endl;
}
Router::Router(int _nbroute, string _hostname, string _ipAdress, string _location, string _vendor, string _osVersion, int _year, double _powerComsumptio, bool _isCritical):
routingTableSize(_nbroute), NetWorkDevice(_hostname, _ipAdress, _location, _vendor, _osVersion, _year, _powerComsumptio, _isCritical){}

void Router::setRoutingTableSize(int _nbroute){
    this->routingTableSize = _nbroute;
}