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

void PC::ping(string ping) {
	string binario;
	string num;
	for (int i = 0; i < ping.size(); i++) {
		
	}
}
