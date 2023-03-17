#include <iostream>
#include "Button.h"
#include "Panel.h"
#include "Dialog.h"

int main()
{
    Panel* panel = new Panel("Panel help info");
    Dialog* dialog = new Dialog("openWikiURL");

    Panel* pan2 = new Panel("Panel 2 help");
    Dialog* dia2 = new Dialog;

    Button* okBtn = new Button("OK");
    Button* cancelBtn = new Button;

    Button* selectBtn = new Button("Select");
    Button* closeBtn = new Button;

    dia2->add(okBtn);
    dia2->add(cancelBtn);
    pan2->add(dia2);

    okBtn->showHelp();
    cancelBtn->showHelp();
    dia2->showHelp();

    /*panel->add(okBtn);
    panel->add(cancelBtn);

    dialog->add(selectBtn);
    dialog->add(closeBtn);

    okBtn->showHelp();
    panel->showHelp();
    cancelBtn->showHelp();

    cout << endl;

    dialog->showHelp();
    selectBtn->showHelp();
    closeBtn->showHelp();*/

    delete okBtn;
    delete cancelBtn;
    delete panel;

    delete dialog;
    delete selectBtn;
    delete closeBtn;





    return 0;
}


