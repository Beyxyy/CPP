#ifndef Router_h
#define Router_h
#include "netorkDevice.h"
class Router : public NetWorkDevice {
    public : 
        Router(int _nbroute, string _hostname, string _ipAdress, string _location, string _vendor, string _osVersion, int _year, double _powerComsumptio, bool _isCritical);
        int getRoutingTableSize() const;
        void setRoutingTableSize(int _nbroute);
        void printInfo() const override;
    private : 
        int routingTableSize;

};

#endif