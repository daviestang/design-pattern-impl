// Singleton.h

#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <iostream>
using namespace std;

class Singleton
{
public:
	static Singleton *GetInstance();

protected:
	Singleton();

private:
	static Singleton *_instance;
};

#endif // ~__SINGLETON_H__