// Proxy.h
// write by larry
// 2009-5-26

#ifndef __PROXY_H__
#define __PROXY_H__

class Subject
{
public:
	virtual ~Subject();
	virtual void Request() = 0;

protected:
	Subject();
};

class ConcreteSubject : public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();

	void Request();
};

class Proxy
{
public:
	Proxy();
	Proxy(Subject *sub);
	~Proxy();

	void Request();

private:
	Subject *_sub;
};

#endif