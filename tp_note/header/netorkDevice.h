#ifndef NETWORKDEVICE_H
#define NETWORKDEVICE_H
#include <string>


using namespace std;
class NetWorkDevice{
    public :
        string getHostname() const;
        string getIpAdresse()const;
        string getLocation()const;
        string getVendor()const;
        string getOsVersion()const;
        int getYear() const;
        double getPowerConsumption() const;
        bool getIsCritical() const;        
        void setHostname(const string _hostname );
        void setIpAdresse( const string _ipAdress);
        void setLocation( const string _location);
        void setVendor(const string _vendor);
        void setOsVersion(const string _osVersion);
        void setYear(const int _year) ;
        void setPowerConsumption( const double _powerComsumptio );
        void setIsCritical(const bool _isCritical);


        NetWorkDevice() = default;
        NetWorkDevice( string _hostname, string _ipAdress, string _location, string _vendor, string _osVersion, int _year, double _powerComsumptio, bool _isCritical);
        NetWorkDevice(const NetWorkDevice& n2);


        void ping();
        virtual void printInfo() const;


    private :
        string hostname;
        string ipAdresse;
        string location;
        string vendor;
        string osVersion;
        int year;
        double powerConsumption;
        bool isCritical;


};


#endif