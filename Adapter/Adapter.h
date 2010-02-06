// Adapter.h
// write by larry
// 2009-5-30

#ifndef __ADAPTER_H__
#define __ADAPTER_H__

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
};

class Adapter : public Target
{
public:
	Adapter(Adaptee *ade);
	~Adapter();
	void Request();

private:
	Adaptee *_ade;
};

#endif // ~__ADAPTER_H__