#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include "Subject.h"
#include <string>
using namespace std;

typedef string State;

class Observer
{
public:
	virtual ~Observer();
	virtual void Update(Subject *sub) = 0;
	virtual void PrintInfo() = 0;

protected:
	Observer();
	State _st;

private:
};

class ConcreteObserverA : public Observer
{
public:
	ConcreteObserverA(Subject *sub);
	virtual ~ConcreteObserverA();

	virtual Subject *GetSubject();

	// 传入Subject作为参数，这样可以让一个View属于多个Subject
	void Update(Subject *sub);
	void PrintInfo();

private:
	Subject *_sub;
};

class ConcreteObserverB : public Observer
{
public:
	ConcreteObserverB(Subject *sub);
	virtual ~ConcreteObserverB();

	virtual Subject *GetSubject();
	
	// 传入Subject作为参数，这样可以让一个View属于多个Subject
	void Update(Subject *sub);
	void PrintInfo();
	
private:
	Subject *_sub;
};

#endif