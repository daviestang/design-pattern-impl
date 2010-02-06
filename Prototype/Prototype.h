// Prototype.h
// write by larry
// 209-5-24

#ifndef __PROTOTYPE_H__
#define __PROTOTYPE_H__

class Prototype
{
public:
	virtual ~Prototype();
	virtual Prototype *Clone() const = 0;

protected:
	Prototype();
};

class ConcretePrototype : public Prototype
{
public:
	ConcretePrototype();
	ConcretePrototype(const ConcretePrototype &cp);
	~ConcretePrototype();

	Prototype *Clone() const;
};

#endif