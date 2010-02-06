// main.cpp
// write by larry
// flyingmagic@163.com
// 2009-2-12
// 
// AbstractFactoryģʽ����������������⣺Ҫ����һ����ػ��໥�����Ķ���
// �Ӵ����п��Կ�����������Ҫ����һ�����(ProductA1, ProductA2)��ʱ������ֻ��ά��һ������
// ����(ConcreteFactory1)��������ά���ĳɱ��͹�����
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