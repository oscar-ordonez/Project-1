#ifndef TDALIST_H
#define TDALIST_H
#include "object.h"

class TDAList : public Object{
  public:
    unsigned int ssize;
  public:
    TDAList();
    virtual ~TDAList();
    virtual bool insert(Object*, int) = 0;
    virtual int indexOf(Object*)const = 0;
    virtual Object* get(unsigned)const = 0;
    virtual Object* remove(unsigned) = 0;
    virtual int prev(int) const = 0;
    virtual int next(int) const = 0;
    virtual void clear() = 0;
    virtual Object* first()const = 0;
    virtual Object* last()const = 0;
    virtual void print()const = 0;
    virtual bool isEmpty()const;
    virtual bool isFull()const = 0;
    int size()const;
};

#endif
