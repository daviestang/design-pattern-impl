// main.cpp
// State模式示例代码
// @author larry
// 2009-5-9

#include "Context.h"
#include "State.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	State *st = new ConcreteStateA();
	Context *con = new Context(st);
	con->OperationChangeState();
	con->OperationChangeState();
	con->OperationChangeState();
	if (con != NULL)
		delete con;
	if (st != NULL)
		st = NULL;

	return 0;
}