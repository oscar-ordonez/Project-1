#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "object.h"
#include "tdalist.h"
#include "dllnode.h"

class LinkedList : public TDAList{
  protected:
    DLLNode* head;
  public:
    LinkedList();
    virtual ~LinkedList();
    virtual bool insert(Object*, int) ;
    virtual int indexOf(Object*)const ;
    virtual Object* get(unsigned)const ;
    virtual Object* remove(unsigned) ;
    virtual int prev(int) const ;
    virtual int next(int) const ;
    virtual void clear();
    virtual Object* first()const ;
    virtual Object* last()const ;
    virtual void print()const ;
    virtual bool isFull()const;
};

#endif
