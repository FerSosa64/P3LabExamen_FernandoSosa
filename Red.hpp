#ifndef RED_HPP
#define RED_HPP
#include <string>
#include <vector>
#include "PC.hpp"
using namespace std;
class Red {
	vector <PC*> pc;
public:
	void agregarPC(PC*);
	void leer();
	void funcion();
	~Red();
};


#endif // !
