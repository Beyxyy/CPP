#include "header/switch.h"
#include <string>
#include <iostream>

using namespace std;

Switch::Switch(int _porcount, string _hostname, string _ipAdress, string _location, string _vendor, string _osVersion, int _year, double _powerComsumptio, bool _isCritical):
portCount(_porcount), NetWorkDevice(_hostname, _ipAdress, _location, _vendor, _osVersion, _year, _powerComsumptio, _isCritical){}

int Switch::getPortCount() const{
    return this->portCount;
}

void Switch::printInfo() const {
    NetWorkDevice::printInfo();
    cout<<"Port Count : "<< this->portCount <<endl;
}

void Switch::setPortCount(int _portCont){
    this->portCount = _portCont;
}