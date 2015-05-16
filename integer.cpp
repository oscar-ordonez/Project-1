#include "integer.h"
#include "object.h"
#include <iostream>
#include <sstream>
using namespace std;

Integer::Integer(int aValue){
    value = aValue;
}

Integer::~Integer(){

}

void Integer::print()const{
    cout << "Integer = " << value << endl;
}

string Integer::toString()const{
	stringstream ss;
	ss << value;
	return ss.str();
}

bool Integer::equals(Object* other)const{

}
void Integer::setValue(int aValue){
    value = aValue;
}
int Integer::getValue()const{
    return value;
}  

