// main.cpp
// write by larry
// 2009-2-24

#include "Subject.h"
#include "Observer.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	ConcreteSubject *sub = new ConcreteSubject();
	Observer *o1 = new ConcreteObserverA(sub);
	Observer *o2 = new ConcreteObserverB(sub);
	sub->SetState("old");
	sub->Notify();
	sub->SetState("new"); // 也可以由Observer调用
	sub->Notify();

	return 0;
}