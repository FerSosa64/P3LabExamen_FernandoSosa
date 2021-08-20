#ifndef PC_HPP
#define PC_HPP
#include <string>
using namespace std;

class PC {
	string host;
	string IP;
	string mask;
public:
	PC(string, string, string);
	string gethost();
	string getIP();
	string getmask();
	void sethost(string);
	void setIP(string);
	void setmask(string);
	void show();
	string ping(string);
	void exit();
};

#endif // !PC_HPP
