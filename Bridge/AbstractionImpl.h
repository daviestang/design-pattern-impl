// AbstractionImpl.h
// write by larry
// 2009-5-25

#ifndef __ABSTRACTIONIMPL_H__
#define __ABSTRACTIONIMPL_H__

class AbstractionImpl
{
public:
	virtual ~AbstractionImpl();
	virtual void Operation() = 0;

protected:
	AbstractionImpl();
};

class ConcreteAbstractionImplA : public AbstractionImpl
{
public:
	ConcreteAbstractionImplA();
	~ConcreteAbstractionImplA();

	virtual void Operation();
};

class ConcreteAbstractionImplB : public AbstractionImpl
{
public:
	ConcreteAbstractionImplB();
	~ConcreteAbstractionImplB();

	virtual void Operation();
};

#endif // ~__ABSTRACTIONIMPL_H__