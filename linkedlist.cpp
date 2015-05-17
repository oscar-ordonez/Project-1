#include "object.h"
#include "tdalist.h"
#include "dllnode.h"
#include "linkedlist.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stddef.h>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;

/***************************************************/
LinkedList::LinkedList(){
    head = NULL;
}
/***************************************************/
LinkedList::~LinkedList(){
    if (head)
        delete head;
}
/***************************************************/
bool LinkedList::insert(Object* data, int pos) {
    if (pos < 0 || pos > ssize)
        return false;
    DLLNode* neo = new DLLNode(data);
    if (!head) 
        head = neo;
    else { 
        if (pos == 0){
            head->setPrev(neo);
            neo->setNext(head);
            head = neo;
        }else if (pos > 0 && pos < ssize){
            DLLNode* tmp = head;
            for (int i=1; i<pos; i++)
               tmp = tmp->getNext();
            neo->setPrev(tmp);
            neo->setNext(tmp->getNext());
            tmp->getNext()->setPrev(neo);
            tmp->setNext(neo);
        }else { 
            DLLNode* tmp = head;
            for (int i=1; i<pos; i++)
               tmp = tmp->getNext();
            tmp->setNext(neo);
            neo->setPrev(tmp);        
        }    
    }
    ssize++;
    return true;
}
/***************************************************/
int LinkedList::indexOf(Object* other)const {
    DLLNode* tmp = head;
    for (int i=0; i < ssize; i++){
        if (tmp->getData()->equals(other))
                return i;
        tmp = tmp->getNext();
    }    
    return -1;
}
/***************************************************/
Object* LinkedList::get(unsigned index)const {
    if (index < 0 || index >= ssize)
        return NULL;
    DLLNode* tmp = head;
    for (int i=0; i < index; i++)
        tmp = tmp->getNext();
    return tmp->getData();
}
/***************************************************/
Object* LinkedList::remove(unsigned pos) {
    Object* ret = NULL;
    if (pos < 0 || pos >= ssize)
        return NULL; 
    DLLNode* tmp;
    if (pos == 0){ 
	   ret = head->getData();
	   head->setData(NULL);
       tmp = head->getNext();
       tmp->setPrev(NULL);
       head->setNext(NULL);
       delete head;
       head = tmp;
    }else if (pos == ssize - 1){ 
       tmp = head;
       for (int i=1; i<pos; i++)
          tmp = tmp->getNext();
       DLLNode* toErase = tmp->getNext(); 
	   ret = toErase->getData();
	   toErase->setData(NULL);
       tmp->setNext(NULL);
       toErase->setPrev(NULL);
       delete toErase;
    }else { 
        tmp = head;
        for (int i=1; i<pos; i++)
           tmp = tmp->getNext();
        DLLNode* toErase = tmp->getNext();
	    ret = toErase->getData();
	    toErase->setData(NULL);
        tmp->setNext(toErase->getNext());
        toErase->getNext()->setPrev(tmp);
        toErase->setNext(NULL);
        toErase->setPrev(NULL);
        delete toErase;        
    }
    ssize--; 
    return ret; 
}
/***************************************************/
int LinkedList::prev(int pos) const {
    return pos - 1;
}
/***************************************************/
int LinkedList::next(int pos) const {
    return pos + 1;
}
/***************************************************/
void LinkedList::clear() {
    if (head)
        delete head;
    head = NULL;
    ssize = 0;
}
/***************************************************/
Object* LinkedList::first()const {
    if (head)
        return head->getData();
    return NULL;
}
/***************************************************/
Object* LinkedList::last()const {
    if (!head)
        return NULL;
    DLLNode* tmp = head;
    for (int i=0; i < ssize-1; i++){ 
        tmp = tmp->getNext();
    }
    return tmp->getData();
}
/***************************************************/
void LinkedList::print()const {
    DLLNode* tmp = head;
    for (int i=0; i < ssize-1; i++){
        tmp->print();
        tmp = tmp->getNext();
    }    
}

bool LinkedList::isFull()const {
    return false;
}
/***************************************************/