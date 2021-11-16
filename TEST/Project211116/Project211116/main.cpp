#include<iostream>
#include"devUsb.h"
#include"computer.h"
using namespace std;
int main() {
	Computer pc1;
	pc1.getInfo();
	Usb printer("printer",1000);
	Usb mouse("mouse", 1001);
	Usb camera("camera", 1002);
	pc1.add_USB(printer);
	pc1.getInfo();
	pc1.add_USB(printer);
	pc1.getInfo();
	pc1.add_USB(mouse);
	pc1.getInfo();
	pc1.add_USB(camera);
	pc1.getInfo();
	pc1.remove_USB(1000);
	pc1.getInfo();
}