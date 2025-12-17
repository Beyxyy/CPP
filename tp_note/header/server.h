#ifndef SERVER_H
#define SERVER_H
#include "netorkDevice.h"

class Server : public NetWorkDevice {
    public : 
        Server(int _nbcores, string _hostname, string _ipAdress, string _location, string _vendor, string _osVersion, int _year, double _powerComsumptio, bool _isCritical);
        void printInfo() const override;
        int getCpuCores() const;
        void setCpuCores(int _nbcores);

    private : 
        int cpuCores;

};

#endif