
#include <gtk/gtk.h>
#include <iostream>
#include "Calculator.h"

using namespace std;

#ifndef SIMPLECALCULATORPRO_INTERFACE_H
#define SIMPLECALCULATORPRO_INTERFACE_H


class Interface
{
private:
    static GtkBuilder *builder;
    static GObject *window;
    static GObject *button;
    static GObject *entry;

    static void click(GtkWidget *widget, GdkEventKey *event, gpointer user_data);
    static void entry_key_pressed(GtkEntry *entry, GdkEventKey *event, gpointer user_data);
public:
    static void connect_signal_handlers_to_widgets();
};


#endif //SIMPLECALCULATORPRO_INTERFACE_H
