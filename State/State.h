#ifndef __STATE_H__
#define __STATE_H__

class Context; // ǰ������
class State
{
public:
	State();
	virtual ~State();
	
	virtual void OperationInterface(Context*) = 0;
	virtual void OperationChangeState(Context*) = 0;

protected:
	bool ChangeState(Context *con, State *st);
};

class ConcreteStateA : public State
{
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();

	virtual void OperationInterface(Context*);
	virtual void OperationChangeState(Context*);
};

class ConcreteStateB : public State
{
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	
	virtual void OperationInterface(Context*);
	virtual void OperationChangeState(Context*);
};

#endif