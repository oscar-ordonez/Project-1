#ifndef OBJECT_H
#define OBJECT_H

#include <string>
using std::string;

class Object {
  public:
    Object();
    virtual ~Object();
    virtual void print()const;
    virtual string toString()const;
    virtual bool equals(Object*)const;
};
#endif
