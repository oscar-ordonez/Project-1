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
    // Se revisa que el parámentro no sea NULL
    if (other == NULL)
        return false;
    // Se verifica que el parámetro sea de tipo Integer
    if (dynamic_cast<Integer*>(other) == NULL) // No son del mismo tipo
        return false; // Retornar false en el caso de que sea de otro tipo
    // Se convierte el parámetro a Integer para tener acceso a value
    Integer* tempInteger = dynamic_cast<Integer*>(other);
    // Se comparan los valores para verificar igualdad
    return tempInteger->getValue() == value;
}
void Integer::setValue(int aValue){
    value = aValue;
}
int Integer::getValue()const{
    return value;
}  

