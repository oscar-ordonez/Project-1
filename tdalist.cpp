#include "object.h"
#include "tdalist.h"

TDAList::TDAList(){
    ssize = 0;
}
TDAList::~TDAList(){

}
bool TDAList::isEmpty()const{
    return ssize == 0;
}
int TDAList::size()const{
    return ssize;
}

