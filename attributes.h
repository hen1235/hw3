#ifndef __ATTRIBUTES_H
#define __ATTRIBUTES_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "output.hpp"

//#define YYSTYPE STYPE	

using namespace std;
using namespace output;




typedef enum Type
{
	_ID,
	_BOOLEAN,
	_NUM,
	_STRING,
	_B,
	_VOID,
	_NONE
} type_t;

typedef struct Exp {
	type_t type;
	union {
		int val;
		bool b;
		//string str;
	}; 

} exp_t;


#define YYSTYPE type_t






#endif
