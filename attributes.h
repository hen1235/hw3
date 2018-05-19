#ifndef __ATTRIBUTES_H
#define __ATTRIBUTES_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <stack>
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

typedef struct var{
	type_t type;
	int size;
} Var;

typedef struct record {
	string name;
	type_t type;
	int offset;
} Record;

typedef struct tuple {
	vector<Record>* parent;
	vector<Record> table;
} Tuple;

#define YYSTYPE Var


#endif
