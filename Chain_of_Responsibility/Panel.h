#pragma once
#include "Composite.h"

class Panel : public Composite
{
protected:
	string modalHelpText;
public:
	Panel(string modalHelpTxt = "", Component* n = 0):
		modalHelpText(modalHelpTxt),
		Composite("", n){}

	void showHelp() const override
	{
		if (!modalHelpText.empty())
		{
			cout << modalHelpText << endl;
		}

		else
		{
			Composite::showHelp();
		}
	}

};

