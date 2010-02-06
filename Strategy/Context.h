// Context.h
// write by larry
// 2009-5-25

#ifndef __CONTEXT_H__
#define __CONTEXT_H__

class Strategy;

class Context
{
public:
	Context(Strategy *stg);
	~Context();

	void DoAction();

private:
	Strategy *_stg;
};

#endif // ~__CONTEXT_H__