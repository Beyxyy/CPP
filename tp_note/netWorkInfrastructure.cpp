#include "header/netWorkInfrastructure.h"

int NetWorkInfrastructure::MAX_DEVICES = 5;

void NetWorkInfrastructure::listDevices() const{
    for(NetWorkDevice* n : this->devices){
        n->printInfo();
    }
}
void NetWorkInfrastructure::addDevice(NetWorkDevice* ndevice){
    if(this->devices.size()>=NetWorkInfrastructure::MAX_DEVICES) return;
    for(NetWorkDevice* n : this->devices) 
        if(ndevice->getHostname() == n->getHostname()) 
        return;  
    this->devices.push_back(ndevice);
}
void NetWorkInfrastructure::removeDeviceByHostname(string _hostname){
    auto it = this->devices.begin();
    while(it != this->devices.end()){
        if((*it)->getHostname() == _hostname)
            it = this->devices.erase(it);
        else
            ++it;
    }
}
float NetWorkInfrastructure::averagePowerConsumptionByType() const{
    double mean = 0;
    for(NetWorkDevice* n : this->devices){
        mean += n->getPowerConsumption();
    }
    return mean/this->devices.size();
}
