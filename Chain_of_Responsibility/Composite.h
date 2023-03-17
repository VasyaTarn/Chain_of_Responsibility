#pragma once
#include <vector>
#include "Component.h"

class Composite : public Component
{
protected:
	vector<Component*> children;
public:
	Composite(string tooltipTxt = "", Component* n = 0):
		Component(tooltipTxt, n){}

	void add(Component* c)
	{
		c->setNext(this);
		children.push_back(c);
	}
};

