/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_mainwindow (void)
{
  GtkWidget *mainwindow;
  GtkWidget *vbox1;
  GtkWidget *handlebox1;
  GtkWidget *toolbar1;
  GtkIconSize tmp_toolbar_icon_size;
  GtkWidget *settings_button;
  GtkWidget *separatortoolitem1;
  GtkWidget *exit_button;
  GtkWidget *handlebox2;
  GtkWidget *hbox1;
  GtkWidget *statusbar;
  GtkWidget *progressbar;

  mainwindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (mainwindow), _("K8062 Monitor"));
  gtk_window_set_default_size (GTK_WINDOW (mainwindow), 800, 600);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (mainwindow), vbox1);

  handlebox1 = gtk_handle_box_new ();
  gtk_widget_show (handlebox1);
  gtk_box_pack_start (GTK_BOX (vbox1), handlebox1, FALSE, TRUE, 0);

  toolbar1 = gtk_toolbar_new ();
  gtk_widget_show (toolbar1);
  gtk_container_add (GTK_CONTAINER (handlebox1), toolbar1);
  gtk_toolbar_set_style (GTK_TOOLBAR (toolbar1), GTK_TOOLBAR_BOTH);
  tmp_toolbar_icon_size = gtk_toolbar_get_icon_size (GTK_TOOLBAR (toolbar1));

  settings_button = (GtkWidget*) gtk_tool_button_new_from_stock ("gtk-preferences");
  gtk_widget_show (settings_button);
  gtk_container_add (GTK_CONTAINER (toolbar1), settings_button);

  separatortoolitem1 = (GtkWidget*) gtk_separator_tool_item_new ();
  gtk_widget_show (separatortoolitem1);
  gtk_container_add (GTK_CONTAINER (toolbar1), separatortoolitem1);

  exit_button = (GtkWidget*) gtk_tool_button_new_from_stock ("gtk-quit");
  gtk_widget_show (exit_button);
  gtk_container_add (GTK_CONTAINER (toolbar1), exit_button);

  handlebox2 = gtk_handle_box_new ();
  gtk_widget_show (handlebox2);
  gtk_box_pack_start (GTK_BOX (vbox1), handlebox2, FALSE, TRUE, 0);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (handlebox2), hbox1);

  statusbar = gtk_statusbar_new ();
  gtk_widget_show (statusbar);
  gtk_box_pack_start (GTK_BOX (hbox1), statusbar, TRUE, TRUE, 0);

  progressbar = gtk_progress_bar_new ();
  gtk_widget_show (progressbar);
  gtk_box_pack_start (GTK_BOX (hbox1), progressbar, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) mainwindow, "realize",
                    G_CALLBACK (on_mainwindow_realize),
                    NULL);
  g_signal_connect ((gpointer) mainwindow, "delete_event",
                    G_CALLBACK (on_mainwindow_delete_event),
                    NULL);
  g_signal_connect ((gpointer) mainwindow, "destroy_event",
                    G_CALLBACK (on_mainwindow_destroy_event),
                    NULL);
  g_signal_connect ((gpointer) settings_button, "clicked",
                    G_CALLBACK (on_settings_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) exit_button, "clicked",
                    G_CALLBACK (on_exit_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mainwindow, mainwindow, "mainwindow");
  GLADE_HOOKUP_OBJECT (mainwindow, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (mainwindow, handlebox1, "handlebox1");
  GLADE_HOOKUP_OBJECT (mainwindow, toolbar1, "toolbar1");
  GLADE_HOOKUP_OBJECT (mainwindow, settings_button, "settings_button");
  GLADE_HOOKUP_OBJECT (mainwindow, separatortoolitem1, "separatortoolitem1");
  GLADE_HOOKUP_OBJECT (mainwindow, exit_button, "exit_button");
  GLADE_HOOKUP_OBJECT (mainwindow, handlebox2, "handlebox2");
  GLADE_HOOKUP_OBJECT (mainwindow, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (mainwindow, statusbar, "statusbar");
  GLADE_HOOKUP_OBJECT (mainwindow, progressbar, "progressbar");

  return mainwindow;
}

GtkWidget*
create_settings_window (void)
{
  GtkWidget *settings_window;
  GtkWidget *vbox2;
  GtkWidget *table1;
  GtkWidget *label1;
  GtkWidget *label2;
  GtkObject *n_channels_spin_adj;
  GtkWidget *n_channels_spin;
  GtkObject *start_channel_spin_adj;
  GtkWidget *start_channel_spin;
  GtkWidget *label3;
  GtkObject *refresh_time_spin_adj;
  GtkWidget *refresh_time_spin;
  GtkWidget *hbox2;
  GtkWidget *settings_ok;
  GtkWidget *vseparator1;
  GtkWidget *settings_cancel;

  settings_window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (settings_window), _("Settings"));

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox2);
  gtk_container_add (GTK_CONTAINER (settings_window), vbox2);

  table1 = gtk_table_new (3, 2, FALSE);
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (vbox2), table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table1), 9);
  gtk_table_set_row_spacings (GTK_TABLE (table1), 10);
  gtk_table_set_col_spacings (GTK_TABLE (table1), 10);

  label1 = gtk_label_new (_("<b>Number of DMX channels to show</b>"));
  gtk_widget_show (label1);
  gtk_table_attach (GTK_TABLE (table1), label1, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_use_markup (GTK_LABEL (label1), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label1), 0, 0.5);

  label2 = gtk_label_new (_("<b>Start DMX channel</b>"));
  gtk_widget_show (label2);
  gtk_table_attach (GTK_TABLE (table1), label2, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_use_markup (GTK_LABEL (label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label2), 0, 0.5);

  n_channels_spin_adj = gtk_adjustment_new (1, 1, 512, 1, 10, 10);
  n_channels_spin = gtk_spin_button_new (GTK_ADJUSTMENT (n_channels_spin_adj), 1, 0);
  gtk_widget_show (n_channels_spin);
  gtk_table_attach (GTK_TABLE (table1), n_channels_spin, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (n_channels_spin), TRUE);

  start_channel_spin_adj = gtk_adjustment_new (1, 1, 512, 1, 10, 10);
  start_channel_spin = gtk_spin_button_new (GTK_ADJUSTMENT (start_channel_spin_adj), 1, 0);
  gtk_widget_show (start_channel_spin);
  gtk_table_attach (GTK_TABLE (table1), start_channel_spin, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  label3 = gtk_label_new (_("<b>Refresh time, in ms</b>"));
  gtk_widget_show (label3);
  gtk_table_attach (GTK_TABLE (table1), label3, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_use_markup (GTK_LABEL (label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label3), 0, 0.5);

  refresh_time_spin_adj = gtk_adjustment_new (1, 10, 1000, 25, 10, 10);
  refresh_time_spin = gtk_spin_button_new (GTK_ADJUSTMENT (refresh_time_spin_adj), 25, 0);
  gtk_widget_show (refresh_time_spin);
  gtk_table_attach (GTK_TABLE (table1), refresh_time_spin, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  hbox2 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox2);
  gtk_box_pack_start (GTK_BOX (vbox2), hbox2, FALSE, TRUE, 0);

  settings_ok = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (settings_ok);
  gtk_box_pack_start (GTK_BOX (hbox2), settings_ok, FALSE, FALSE, 0);

  vseparator1 = gtk_vseparator_new ();
  gtk_widget_show (vseparator1);
  gtk_box_pack_start (GTK_BOX (hbox2), vseparator1, TRUE, TRUE, 0);

  settings_cancel = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (settings_cancel);
  gtk_box_pack_start (GTK_BOX (hbox2), settings_cancel, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) settings_ok, "clicked",
                    G_CALLBACK (on_settings_ok_clicked),
                    NULL);
  g_signal_connect ((gpointer) settings_cancel, "clicked",
                    G_CALLBACK (on_settings_cancel_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (settings_window, settings_window, "settings_window");
  GLADE_HOOKUP_OBJECT (settings_window, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (settings_window, table1, "table1");
  GLADE_HOOKUP_OBJECT (settings_window, label1, "label1");
  GLADE_HOOKUP_OBJECT (settings_window, label2, "label2");
  GLADE_HOOKUP_OBJECT (settings_window, n_channels_spin, "n_channels_spin");
  GLADE_HOOKUP_OBJECT (settings_window, start_channel_spin, "start_channel_spin");
  GLADE_HOOKUP_OBJECT (settings_window, label3, "label3");
  GLADE_HOOKUP_OBJECT (settings_window, refresh_time_spin, "refresh_time_spin");
  GLADE_HOOKUP_OBJECT (settings_window, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (settings_window, settings_ok, "settings_ok");
  GLADE_HOOKUP_OBJECT (settings_window, vseparator1, "vseparator1");
  GLADE_HOOKUP_OBJECT (settings_window, settings_cancel, "settings_cancel");

  return settings_window;
}

