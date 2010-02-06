#include "Context.h"
#include "State.h"

Context::Context()
{
}

Context::~Context()
{
	delete _state;
}

Context::Context(State *state)
{
	this->_state = state;
}

void Context::OperationInterface()
{
	_state->OperationInterface(this);
}

void Context::OperationChangeState()
{
	_state->OperationChangeState(this);
}

bool Context::ChangeState(State *state)
{
	this->_state = state;
	return true;
}