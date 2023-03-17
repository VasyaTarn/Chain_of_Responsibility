#pragma once
#include "Primitive.h"

class Button : public Primitive
{
public:
	Button(string tooltipTxt = "", Component* n = 0):
		Primitive(tooltipTxt, n){}
};

