#ifndef __ATTRIBUTES_H
#define __ATTRIBUTES_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "output.hpp"

using namespace std;
using namespace output;

typedef enum Type
{
	_INT,
	_BOOL,
	_STRING,
	_BYTE,
	_VOID,
	_NONE
} type_t;

/*typedef struct Exp {
	type_t type;
	union {
		int val;
		bool b;
		string str;
	}; 

} exp_t;
*/
typedef union var{
	type_t type;
} Var;

#define YYSTYPE Var


#endif
