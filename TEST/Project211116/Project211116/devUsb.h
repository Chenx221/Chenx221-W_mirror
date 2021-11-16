#ifndef DEVUSB_H
#define DEVUSB_H
#include"info.h"
using namespace std;
class Usb : public info{
private:
	int devid;
	string devname;
public:
	Usb(string dn,int di) {
		devname = dn;
		devid = di;
	}
	int getdevid() {
		return devid;
	}
	string getdevname() {
		return devname;
	}
	void getInfo() {
		cout << "devid:" << devid << "\tdevname:" << devname << endl;
	}
};
#endif 

