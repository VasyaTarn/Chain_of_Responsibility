#pragma once
#include "Composite.h"

class Dialog  : public Composite
{
protected:
	string wikiPageURL;
public:
	Dialog(string wikiPageURL = "", Component* n = 0) :
		wikiPageURL(wikiPageURL),
		Composite("", n) {}

	void showHelp() const override
	{
		if (!wikiPageURL.empty())
		{
			cout << wikiPageURL << endl;
		}

		else
		{
			Composite::showHelp();
		}
	}
};

