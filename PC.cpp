#include <iostream>
#include <string>
#include "PC.hpp"
#include "Red.hpp"
using namespace std;
PC::PC(string host, string ip, string mascara) {
	this->host = host;
	this->IP = ip;
	this->mask = mascara;
}

string PC::gethost() {
	return this->host;
}

string PC::getIP() {
	return this->IP;
}

string PC::getmask() {
	return this->mask;
}

void PC::sethost(string name) {
	this->host = name;
}

void PC::setIP(string ip) {
	this->IP = ip;
}

void PC::setmask(string masca) {
	this->mask = masca;
}

void PC::show() {
	cout << "IP: " << this->IP << endl;
	cout << "Network: " << this->mask << endl;
}

string PC::ping(string ping) {
	string binario;
	string num;
	int numero;
	int unos = 0;
	string nuevobin;

	string binario2;
	string num2;
	int numero2;

	for (int i = 0; i < ping.size(); i++) {//binario de IP

		if (ping[i] == '.') {
			numero = stoi(num);
			while (numero) {
				binario += (numero % 2) + '0';
				numero /= 2;
			}
			binario += '.';

			num = "";
		}
		else {
			num = num + ping[i];
		}
	}

	for (int i = 0; i < this->mask.size(); i++) {//binario de la mascara

		if (this->mask[i] == '.') {
			numero2 = stoi(num2);
			while (numero2) {
				binario2 += (numero2 % 2) + '0';
				numero2 /= 2;
			}
			binario2 += '.';

			num2 = "";
		}
		else {
			num2 = num2 + this->mask[i];
		}
	}

	for (int i = 0; i < binario2.size(); i++) {
		if (binario2[i] == '1') {
			unos++;
		}
	}
	
	for (int i = 0; i <= unos; i++) {
		nuevobin += binario[i];
	}

	return nuevobin;
}
