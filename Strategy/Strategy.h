// Strategy.h
// write by larry
// 2009-5-25

#ifndef __STRATEGY_H__
#define __STRATEGY_H__

class Strategy
{
public:
	Strategy();
	virtual ~Strategy();

	virtual void AlgrithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy
{
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();

	void AlgrithmInterface();
};

class ConcreteStrategyB : public Strategy
{
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();

	void AlgrithmInterface();
};

#endif // ~__STRATEGY_H__