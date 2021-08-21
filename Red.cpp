#include <iostream>
#include <string>
#include "Red.hpp"
using namespace std;

void Red::agregarPC(PC* compu) {
	pc.push_back(compu);
}

void Red::leer() {
	for (int i = 0; i < pc.size(); i++) {
		cout << "PC numero " << i << endl;
		cout << "Host: " << this->pc[i]->gethost() << endl;
		cout << "IP: " << this->pc[i]->getIP() << endl;
		cout << "Mask: " << this->pc[i]->getmask() << endl;
		cout << endl;
	}
}


void Red::funcion() {
	int pos;
	string comand = "";
	for (int i = 0; i < pc.size(); i++) {
		cout << "PC numero " << i << endl;
		cout << "Host: " << this->pc[i]->gethost() << endl;
		cout << "IP: " << this->pc[i]->getIP() << endl;
		cout << "Mask: " << this->pc[i]->getmask() << endl;
		cout << endl;
	}
	cout << "Ingrese el numero de la pc a la que quisiera ingresar: ";
	cin >> pos;
	cout << endl;
	while (comand.compare("exit")) {
		cout <<this->pc[pos]->gethost() <<"#";
		cin >> comand;
		if (comand == "show") {
			this->pc[pos]->show();
		}
		if (comand[0] == 'p' && comand[3] == 'g') {
			string num = "";
			for (int k = 0; k < comand.size(); k++) {
				if (comand[k] == 'p' || comand[k] == 'i' || comand[k] == 'n' || comand[k] == 'g' || comand[k] == '_') {
					
				}
				else {
					num = num + comand[k];
				}
			}
			
			bool exist = false;
			for (int p = 0; p < this->pc.size(); p++) {
				if (this->pc[p]->getIP() == num) {
					exist = true;
				}
			}
			if (exist) {
				if (this->pc[pos]->ping(num) == this->pc[pos]->ping(this->pc[pos]->getIP())) {
					cout << endl;
					cout << "Pinging to " << num << " with 32 types if data" << endl;
					cout << "Reply from " << num << ": bytes=32 time=37ms TTL=46" << endl;
					cout << "Reply from " << num << ": bytes=32 time=37ms TTL=46" << endl;
					cout << "Reply from " << num << ": bytes=32 time=37ms TTL=46" << endl;
					cout << "Reply from " << num << ": bytes=32 time=37ms TTL=46" << endl;
					cout << endl;
					cout << "Ping statistics for " << num << ":" << endl;
					cout << "	Packets:  Sent: 4, Received: 4, Lost: 0 (0% lost)" << endl;
					cout << endl;
				}
				else {
					cout << endl;
					cout << "Pinging to " << num << " with 32 types if data" << endl;
					cout << "Reply from " << num << ": Destination host unreachable" << endl;
					cout << "Reply from " << num << ": Destination host unreachable" << endl;
					cout << "Reply from " << num << ": Destination host unreachable" << endl;
					cout << "Reply from " << num << ": Destination host unreachable" << endl;
					cout << endl;
					cout << "Ping statistics for " << num << ":" << endl;
					cout << "	Packets:  Sent: 4, Received: 4, Lost: 0 (0% lost)" << endl;
					cout << endl;
				}
				

			}
			else {
				cout << endl;
				cout << "Pinging to " << num << " with 32 types if data" << endl;
				cout << "Request timed out."<< endl;
				cout << "Request timed out." << endl;
				cout << "Request timed out." << endl;
				cout << "Request timed out." << endl;
				cout << endl;
				cout << "Ping statistics for " << num << ":" << endl;
				cout << "	Packets:  Sent: 4, Received: 0, Lost: 4 (100% lost)" <<endl;
				cout << endl;
			}
		}
	}
	
}

Red::~Red() {
	for (int i = 0; i < pc.size(); i++) {
		if (pc[i] != NULL) {
			delete pc[i];
		}
	}
}