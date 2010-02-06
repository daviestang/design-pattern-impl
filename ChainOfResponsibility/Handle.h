// Handle.h
// write by larry
// 2009-6-8

#ifndef __HANDLE_H__
#define __HANDLE_H__

class Handle
{
public:
	virtual ~Handle();
	virtual void HandleRequest() = 0;
	void SetSuccessor(Handle *succ);
	Handle *GetSuccessor();

protected:
	Handle();
	Handle(Handle *succ);

private:
	Handle *_succ;
};

class ConcreteHandleA : public Handle
{
public:
	ConcreteHandleA();
	~ConcreteHandleA();

	ConcreteHandleA(Handle *succ);
	void HandleRequest();
};

class ConcreteHandleB : public Handle
{
public:
	ConcreteHandleB();
	~ConcreteHandleB();

	ConcreteHandleB(Handle *succ);
	void HandleRequest();
};

#endif