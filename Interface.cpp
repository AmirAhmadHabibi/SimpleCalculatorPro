//
// Created by amirahmad on 7/8/15.
//

#include "Interface.h"

GtkBuilder *Interface::builder;
GObject *Interface::window;
GObject *Interface::button;
GObject *Interface::entry;

void Interface::connect_signal_handlers_to_widgets()
{


    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "/home/amirahmad/ClionProjects/SimpleCalculatorPro/Calc.ui", NULL);

        //Connecting signal handlers to the constructed widgets.
    window = gtk_builder_get_object(builder, "window");
    g_signal_connect (window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        //numbers
    button = gtk_builder_get_object(builder, "num0");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "num1");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "num2");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "num3");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "num4");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "num5");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "num6");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "num7");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "num8");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "num9");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);

        //other buttons
    button = gtk_builder_get_object(builder, "point");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "result");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "add");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "sub");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "mul");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "div");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "sqr");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "toggleNP");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);
    button = gtk_builder_get_object(builder, "clr");
    g_signal_connect (button, "clicked", G_CALLBACK(click), NULL);

        //entry
    entry = gtk_builder_get_object(builder, "entry");
    gtk_entry_buffer_set_max_length(gtk_entry_get_buffer((GtkEntry *) entry), 15);
    g_signal_connect(entry, "key_press_event", G_CALLBACK(entry_key_pressed), NULL);
}

void Interface::entry_key_pressed(GtkEntry *entry, GdkEventKey *event, gpointer user_data)
{
//    char *c = event->string;
//    if (event->keyval == 65288)
//        c = (char *) "backspace";
//
//    Calculator::key_pressed(c);
//
//    gtk_entry_set_text(entry, Calculator::num1.c_str());
}

void Interface::click(GtkWidget *widget, GdkEventKey *event, gpointer user_data)
{
    GtkButton *A = GTK_BUTTON(widget);
    char *label = (char *) gtk_button_get_label(A);

    Calculator::key_pressed(label);

    if(Calculator::showing_answer)
        gtk_entry_set_text((GtkEntry *) entry, Calculator::num2.c_str());
    else
        gtk_entry_set_text((GtkEntry *) entry, Calculator::num1.c_str());//TODO: no trailing zeros
}