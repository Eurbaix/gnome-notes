/*
 * bjb-application.h
 * Copyright (C) Pierre-Yves LUYTEN 2011 <py@luyten.fr>
 * Copyright (C) 2017 Mohammed Sadiq <sadiq@sadiqpk.org>
 * 
 * gnome-notes is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * gnome-notes is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <gtk/gtk.h>
#include <libbiji/libbiji.h>
#include "bjb-settings.h"

G_BEGIN_DECLS

#define BJB_TYPE_APPLICATION    (bjb_application_get_type ())
#define BJB_APPLICATION_DEFAULT (BJB_APPLICATION (g_application_get_default()))

G_DECLARE_FINAL_TYPE (BjbApplication, bjb_application, BJB, APPLICATION, GtkApplication)

BjbApplication *bjb_application_new                (void);

BijiManager    *bjb_application_get_manager        (BjbApplication *self);

BjbSettings    *bjb_application_get_settings       (BjbApplication *self);

void            bjb_application_show_note_window   (BjbApplication *self,
                                                    BijiNoteObj    *note);

void            bjb_application_show_import_dialog (BjbApplication *self);

void            bjb_application_show_help_window   (BjbApplication *self);

void            bjb_application_show_about_dialog  (BjbApplication *self);

G_END_DECLS
