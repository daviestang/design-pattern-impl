// Template.h
// write by larry
// 2009-5-24

#ifndef __TEMPLATE_H__
#define __TEMPLATE_H__

class AbstractClass
{
public:
	virtual ~AbstractClass();
	void TemplateMethod();

protected:
	AbstractClass();

	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

class ConcreteClass1 : public AbstractClass
{
public:
	ConcreteClass1();
	~ConcreteClass1();

protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
};

class ConcreteClass2 : public AbstractClass
{
public:
	ConcreteClass2();
	~ConcreteClass2();

protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
};

#endif // ~__TEMPLATE__H__