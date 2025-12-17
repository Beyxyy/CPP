#ifndef netWorkInfrastructure_h
#define netWorkInfrastructure_h
#include "netorkDevice.h"
#include <string>
#include <vector>
using namespace std;
class NetWorkInfrastructure {
    private :
        string name;
        static int MAX_DEVICES;
        vector<NetWorkDevice*> devices;

    public :
        void listDevices() const;
        void addDevice(NetWorkDevice* ndevice);
        void removeDeviceByHostname(string _hostname);
        float averagePowerConsumptionByType() const;


};

#endif