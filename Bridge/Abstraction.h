// Abstraction.h
// write by larry
// 2009-5-25

#ifndef __ABSTRACTION_H__
#define __ABSTRACTION_H__

class AbstractionImpl;

class Abstraction
{
public:
	virtual ~Abstraction();
	virtual void Operation() = 0;

protected:
	Abstraction();
};

class RefinedAbstraction : public Abstraction
{
public:
	RefinedAbstraction(AbstractionImpl *impl);
	~RefinedAbstraction();

	void Operation();

private:
	AbstractionImpl *_impl;
};

#endif