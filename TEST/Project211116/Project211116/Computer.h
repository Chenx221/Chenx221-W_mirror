#ifndef COMPUTER_H
#define COMPUTER_H
#include "devUsb.h"
#include"info.h"
using namespace std;
class Computer: public info{
private:
	string usb_devices[5]; //max 5
	int usb_id[5]; //max 5
	int n = 0;
public:
	void add_USB(Usb usb) {
		if (n == 4) {
			cout << "[ERROR]无空闲接口或" << endl;
		}
		else if(is_already_plug(usb.getdevid())) {
			cout << "[WARN]已经连接该设备" << endl;
		}
		else {
			usb_devices[n] = usb.getdevname();
			usb_id[n++] = usb.getdevid();
			cout << "connected" << endl;
		}
	}
	void remove_USB(int id) {
		if (is_already_plug(id)) {
			// start remove dev
			int k = find_devn(id);
			for (int i = k + 1; i < 5; i++) {
				usb_devices[i - 1] = usb_devices[i];
				usb_id[i - 1] = usb_id[i];
			}
			n--;
			cout << "REMOVED" << endl;
		}
		else {
			cout << "[ERROR]无此设备" << endl;
		}
	}
	int find_devn(int id) {
		for (int i = 0; i < 5; i++) {
			if (usb_id[i] == id) {
				return i;
			}
		}
		return 1000;
	}
	bool is_already_plug(int id) {
		for (int i : usb_id) {
			if (id == i) return true;
		}
		return false;
	}
	void getInfo() {
		cout << "已连接的USB设备:" << endl;
		for (int i = 0; i < n; i++) {
			cout << "devid:" << usb_id[i] << "\tdevname:" << usb_devices[i] << endl;
		}
		if (n == 0) {
			cout << "[INFO]无已连接的USB设备" << endl;
		}
	}
};

#endif 

