// Element.h

#ifndef __ELEMENT_H__
#define __ELEMENT_H__

class Visitor;

class Element
{
public:
	virtual ~Element();
	virtual void Accept(Visitor *vis) = 0;

protected:
	Element();
};

class ConcreteElementA : public Element
{
public:
	ConcreteElementA();
	~ConcreteElementA();

	void Accept(Visitor *vis);
};

class ConcreteElementB : public Element
{
public:
	ConcreteElementB();
	~ConcreteElementB();

	void Accept(Visitor *vis);
};

#endif