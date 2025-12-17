#ifndef Switch_h
#define Switch_h
#include "netorkDevice.h"

class Switch : public NetWorkDevice {
    public : 
        Switch(int portCount, string _hostname, string _ipAdress, string _location, string _vendor, string _osVersion, int _year, double _powerComsumptio, bool _isCritical);
        int getPortCount() const;
        void setPortCount(int _nbroute);
        void printInfo() const override;

    private : 
        int portCount;

};

#endif