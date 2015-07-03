//This file is for handling the UI
#include <gtk/gtk.h>
#include <iostream>

using namespace std;

static void click(GtkWidget *widget, gpointer data)
{
    //TODO
    g_print("yes\n");
}

int main(int argc, char *argv[])
{
    GtkBuilder *builder;
    GObject *window;
    GObject *button;

    gtk_init(&argc, &argv);
    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "/home/amirahmad/ClionProjects/SimpleCalculatorPro/Calc.ui", NULL);


    //Connect signal handlers to the constructed widgets.
    window = gtk_builder_get_object(builder, "window");
    g_signal_connect (window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    button = gtk_builder_get_object(builder, "num0");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);

    button = gtk_builder_get_object(builder, "num1");
    g_signal_connect (button, "clicked", G_CALLBACK(gtk_main_quit), NULL);

    //TODO

    gtk_main();
    return 0;
}