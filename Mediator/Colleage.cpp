// Colleage.cpp

#include "Mediator.h"
#include "Colleage.h"
#include <iostream>
using namespace std;

Colleage::Colleage()
{
}

Colleage::Colleage(Mediator *mdt)
{
	this->_mdt = mdt;
}

Colleage::~Colleage()
{
}

//--------------------------------------------------------
ConcreteColleageA::ConcreteColleageA()
{
}

ConcreteColleageA::~ConcreteColleageA()
{
}

ConcreteColleageA::ConcreteColleageA(Mediator *mdt) : Colleage(mdt)
{
}

void ConcreteColleageA::SetState(const string &sdt)
{
	_sdt = sdt;
}

string ConcreteColleageA::GetState()
{
	return _sdt;
}

void ConcreteColleageA::Action()
{
	_mdt->DoActionFromAtoB();
	cout<<"State of ConcreteColleageB:"<<" "<<this->GetState()<<endl;
}

//--------------------------------------------------------
ConcreteColleageB::ConcreteColleageB()
{
}

ConcreteColleageB::~ConcreteColleageB()
{
}

ConcreteColleageB::ConcreteColleageB(Mediator *mdt) : Colleage(mdt)
{
}

void ConcreteColleageB::SetState(const string &sdt)
{
	_sdt = sdt;
}

string ConcreteColleageB::GetState()
{
	return _sdt;
}

void ConcreteColleageB::Action()
{
	_mdt->DoActionFromBtoA();
	cout<<"State of ConcreteColleageB:"<<" "<<this->GetState()<<endl;
}