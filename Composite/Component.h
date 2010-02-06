// Component.h
// write by larry
// 2009-6-7

#ifndef __COMPONENT_H__
#define __COMPONENT_H__

class Component
{
public:
	Component();
	virtual ~Component();

public:
	virtual void Operation() = 0;
	virtual void Add(const Component&);
	virtual void Remove(const Component&);
	virtual Component* GetChild(int);
};

#endif