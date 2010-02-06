// Leaf.h

#ifndef __LEAF_H__
#define __LEAF_H__

#include "Component.h"

class Leaf : public Component
{
public:
	Leaf();
	~Leaf();

	void Operation();
};

#endif