#include "header/server.h"
#include <string>
#include <iostream>

using namespace std;

Server::Server(int _nbcores, string _hostname, string _ipAdress, string _location, string _vendor, string _osVersion, int _year, double _powerComsumptio, bool _isCritical):
cpuCores(_nbcores), NetWorkDevice(_hostname, _ipAdress, _location, _vendor, _osVersion, _year, _powerComsumptio, _isCritical){}


void Server::printInfo() const {
    NetWorkDevice::printInfo();
    cout<<"CPU Cores : "<< this->cpuCores <<endl;
}

int Server::getCpuCores() const{
    return this->cpuCores;
}


void Server::setCpuCores(int _nbcores){
    this->cpuCores = _nbcores;
}