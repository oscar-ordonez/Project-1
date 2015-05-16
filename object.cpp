#include "object.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
Object::Object(){

}

Object::~Object(){

}

void Object::print()const{
    cout << "Object@" << this << endl;
}

string Object::toString()const{
	stringstream ss;
	ss << this;
	return ss.str();
}
bool Object::equals(Object* other)const{
    return this == other;
}



