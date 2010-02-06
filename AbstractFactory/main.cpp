// main.cpp
// write by larry
// flyingmagic@163.com
// 2009-2-12
// 
// AbstractFactory模式是用来解决这类问题：要创建一组相关或相互依赖的对象。
// 从代码中可以看出，当我们要创建一组对象(ProductA1, ProductA2)的时候我们只用维护一个创建
// 对象(ConcreteFactory1)，大大简化了维护的成本和工作。
//-----------------------------------------------------------------------

#include "AbstractFactory.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	AbstractFactory *cf1 = new ConcreteFactory1();
	cf1->CreateProductA();
	cf1->CreateProductB();

	AbstractFactory *cf2 = new ConcreteFactory2();
	cf2->CreateProductA();
	cf2->CreateProductB();

	return 0;
}