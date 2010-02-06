// Flyweight.h
// write by larry
// 2009-5-31

#ifndef __FLYWEIGHT_H__
#define __FLYWEIGHT_H__

#include <string>
using namespace std;

class Flyweight
{
public:
	virtual ~Flyweight();
	virtual void Operation(const string &extrinsicState);
	string GetIntrinsicState();

protected:
	Flyweight(string intrinsicState);

private:
	string _intrinsicState;
};

class ConcreteFlyweight : public Flyweight
{
public:
	ConcreteFlyweight(string intrinsicState);
	~ConcreteFlyweight();
	void Operation(const string &extrinsicState);
};

#endif