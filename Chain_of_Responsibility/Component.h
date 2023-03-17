#pragma once
#include <iostream>
#include <cstring>
#include "ComponentWithContextualHelp.h"

using namespace std;

class Component : public ComponentWithContextualHelp
{
private:
	ComponentWithContextualHelp* next_handler;
	string tooltipText;
public:
	Component(string tooltipText = "", ComponentWithContextualHelp* next = nullptr):
		next_handler(next),
		tooltipText(tooltipText)
	{}

	ComponentWithContextualHelp* setNext(ComponentWithContextualHelp* handler) override
	{
		next_handler = handler;
		return handler;
	}

	void showHelp() const override
	{
		if (!tooltipText.empty())
		{
			cout << tooltipText << endl;
		}
		else
		{
			if (next_handler)
			{
				return next_handler->showHelp();
			}
		}
	}
};

