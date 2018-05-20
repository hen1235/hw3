#ifndef __ATTRIBUTES_H
#define __ATTRIBUTES_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <stack>
#include <set>
#include "output.hpp"

using namespace std;
using namespace output;

typedef struct tuple Tuple;

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
	string name;
} Var;

typedef struct baseRecord {
	string name;
	type_t type;
	baseRecord(string a, type_t b): name(a), type(b) {}
	virtual ~baseRecord() {}
} BaseRecord;

typedef struct record : BaseRecord {
	int offset;
	record(string a,type_t b, int c) : BaseRecord(a,b), offset(c){}
} Record;

typedef struct funcRecord : BaseRecord {
	vector<string> args;
	funcRecord(string a, type_t b, vector<string> c) : BaseRecord(a,b), args(c){}
} FuncRecord;

typedef struct arrRecord : Record {
	int size;
	arrRecord(string a, type_t b, int c, int d) : Record(a,b,c), size(d) {}
} ArrRecord;


struct tuple {
	Tuple* parent;
	vector<BaseRecord> table;
};

#define YYSTYPE Var


#endif
