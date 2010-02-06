// Aggregate.h
// write by larry
// 2009-5-18

#ifndef __AGGREGATE_H__
#define __AGGREGATE_H__

class Iterator;
typedef int Object;
 
class Aggregate
{
public:
	virtual ~Aggregate();
	virtual Iterator *CreateIterator() = 0;
	virtual Object GetItem(int idx) = 0;
	virtual int GetSize() = 0;

protected:
	Aggregate();
};

class ConcreteAggregate : public Aggregate
{
public:
	enum {SIZE = 10};
	ConcreteAggregate();
	~ConcreteAggregate();
	Iterator *CreateIterator();
	Object GetItem(int idx);
	int GetSize();

private:
	Object _objs[SIZE];
};

#endif