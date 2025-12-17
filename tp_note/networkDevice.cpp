#include "header/netorkDevice.h"
#include <iostream>

NetWorkDevice::NetWorkDevice( string _hostname, string _ipAdress, string _location, string _vendor, string _osVersion, int _year, double _powerComsumptio, bool _isCritical) : 
hostname(_hostname), ipAdresse(_ipAdress), location(_location), vendor(_vendor), osVersion(_osVersion), year(_year), powerConsumption(_powerComsumptio), isCritical(_isCritical){}

NetWorkDevice::NetWorkDevice(const NetWorkDevice& n2) : 
hostname(n2.hostname), ipAdresse(n2.ipAdresse), location(n2.location), vendor(n2.vendor), osVersion(n2.osVersion), year(n2.year), powerConsumption(n2.powerConsumption), isCritical(n2.isCritical){}

string NetWorkDevice::getHostname() const{
    return this->hostname;
}
string NetWorkDevice::getIpAdresse()const{
    return this->ipAdresse;
}
string NetWorkDevice::getLocation()const{
    return this->location;
}
string NetWorkDevice::getVendor()const{
    return this->vendor;
}
string NetWorkDevice::getOsVersion()const {
    return this->osVersion;
}
int NetWorkDevice::getYear() const {
    return this->year;
}
double NetWorkDevice::getPowerConsumption() const{
    return this->powerConsumption;
}
bool NetWorkDevice::getIsCritical() const{
    return this->isCritical;
}        
void NetWorkDevice::setHostname(const string _hostname ){
    this->hostname = _hostname;
}
void NetWorkDevice::setIpAdresse( const string _ipAdress){
    this->ipAdresse = _ipAdress;
}
void NetWorkDevice::setLocation( const string _location){
    this->location = _location;
}
void NetWorkDevice::setVendor(const string _vendor){
    this->vendor = _vendor;

}
void NetWorkDevice::setOsVersion(const string _osVersion){
    this->osVersion = _osVersion;
}
void NetWorkDevice::setYear(const int _year){
    this->year = _year;
}
void NetWorkDevice::setPowerConsumption( const double _powerComsumptio ){
    this->powerConsumption = _powerComsumptio;
}
void NetWorkDevice::setIsCritical(const bool _isCritical){
    this->isCritical = _isCritical;
}

void NetWorkDevice::ping(){
    cout<<this->hostname <<endl;
}

void NetWorkDevice::printInfo() const{
    cout<<"Network device of type unknown"<<endl;
    cout<<"Hostname : "<< this->hostname<<endl;
    cout<<"IP Adresse : "<< this->ipAdresse<<endl;
    cout<<"Location : "<< this->location<<endl;
    cout<<"Vendor : "<< this->vendor<<endl;
    cout<<"OS : "<< this->osVersion<<endl;
    cout<<"installed id : "<< this->year<<endl;
    cout<<"POPwer consumption : "<< this->powerConsumption<<endl;
}