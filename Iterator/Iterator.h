// Iterator.h
// write by larry
// 2009-5-18

#ifndef __ITERATOR_H__
#define __ITERATOR_H__

class Aggregate;
typedef int Object;

class Iterator
{
public:
	virtual ~Iterator();
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() = 0;
	virtual Object CurrentItem() = 0;

protected:
	Iterator();
};

class ConcreteIterator : public Iterator
{
public:
	ConcreteIterator(Aggregate *ag, int idx = 0);
	~ConcreteIterator();
	void First();
	void Next();
	bool IsDone();
	Object CurrentItem();

private:
	Aggregate *_ag;
	int _idx;
};

#endif