#ifndef DLCURSORLIST_H
#define DLCURSORLIST_H

#include "tdalist.h"

class DLCursorList : public TDAList{
	struct Registry{
		int prev, next;
		Object* datum;
	};
	Registry* map;
	int head;
	int capacity;
	int findNext() const;

public:
	DLCursorList(int=25);
	~DLCursorList();
	virtual bool insert(Object*, int);
	virtual int indexOf(Object*) const;
  	virtual Object* get(unsigned) const;
	virtual Object* remove(unsigned);
	virtual int prev(int) const;
	virtual int next(int) const;
	virtual void clear();
	virtual Object* first() const;
	virtual Object* last() const;
	virtual void print() const;
	virtual bool isFull() const;
};

#endif
