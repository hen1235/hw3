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
typedef struct var Var;
typedef enum Type
{
	_INT,
	_BOOL,
	_STRING,
	_BYTE,
	_VOID,
	_NULL
} type_t;


struct var{
	type_t type;
	int size;
	string name;
	// inline bool operator==(const Var& var1){
	// 	if(var1.type == type)
	// 		return true;
	// 	return false;
	// }
};

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
	vector<Var> args;
	funcRecord(string a, type_t b, vector<Var> c) : BaseRecord(a,b), args(c){}
} FuncRecord;

typedef struct arrRecord : Record {
	int size;
	arrRecord(string a, type_t b, int c, int d) : Record(a,b,c), size(d) {}
} ArrRecord;


struct tuple {
	Tuple* parent;
	vector<BaseRecord*> table;
};

#define YYSTYPE Var


#endif
