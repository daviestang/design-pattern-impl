// AbstractionImpl.cpp

#include "AbstractionImpl.h"
#include <iostream>
using namespace std;

AbstractionImpl::AbstractionImpl()
{
}

AbstractionImpl::~AbstractionImpl()
{
}

void AbstractionImpl::Operation()
{
	cout<<"AbstractionImpl...impl..."<<endl;
}

ConcreteAbstractionImplA::ConcreteAbstractionImplA()
{
}

ConcreteAbstractionImplA::~ConcreteAbstractionImplA()
{
}

void ConcreteAbstractionImplA::Operation()
{
	cout<<"ConcreteAbstractionImplA..."<<endl;
}

ConcreteAbstractionImplB::ConcreteAbstractionImplB()
{
}

ConcreteAbstractionImplB::~ConcreteAbstractionImplB()
{
}

void ConcreteAbstractionImplB::Operation()
{
	cout<<"ConcreteAbstractionImplB..."<<endl;
}