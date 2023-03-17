#pragma once
#include "Component.h"

class Primitive : public Component
{
public:
	Primitive(string tooltipTxt = "", Component* n = 0):
		Component(tooltipTxt, n){}
};

