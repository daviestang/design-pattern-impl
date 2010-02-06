// Command.coo

#include "Command.h"
#include "Reciever.h"

Command::Command()
{
}

Command::~Command()
{
}

ConcreteCommand::ConcreteCommand(Reciever *rev)
{
	this->_rev = rev;
}

ConcreteCommand::~ConcreteCommand()
{
}

void ConcreteCommand::Excute()
{
	this->_rev->Action();
}
