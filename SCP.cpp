#include <gtk/gtk.h>
#include "Interface.h"

using namespace std;

//TODO: quit
int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);
    Interface::connect_signal_handlers_to_widgets();
    gtk_main();
    return 0;
}