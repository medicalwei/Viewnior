/*
 * Copyright © 2009 Siyan Panayotov <xsisqox@gmail.com>
 *
 * This file is part of Viewnior.
 *
 * Viewnior is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Viewnior is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Viewnior.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __VNR_WINDOW_H__
#define __VNR_WINDOW_H__

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS typedef struct _VnrWindow VnrWindow;
typedef struct _VnrWindowClass VnrWindowClass;

#define VNR_TYPE_WINDOW             (vnr_window_get_type ())
#define VNR_WINDOW(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), VNR_TYPE_WINDOW, VnrWindow))
#define VNR_WINDOW_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass),  VNR_TYPE_WINDOW, VnrWindowClass))
#define VNR_IS_WINDOW(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VNR_TYPE_WINDOW))
#define VNR_IS_WINDOW_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass),  VNR_TYPE_WINDOW))
#define VNR_WINDOW_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj),  VNR_TYPE_WINDOW, VnrWindowClass))

struct _VnrWindow {
    GtkWindow win;

    GtkWidget *view;
    GtkWidget *scroll_view;

    gint max_width;
    gint max_height;
};

struct _VnrWindowClass {
    GtkWindowClass parent_class;
};

GType       vnr_window_get_type (void) G_GNUC_CONST;

GtkWidget*  vnr_window_new      (void);

gboolean    vnr_window_open     (VnrWindow * win, const char *path);

G_END_DECLS
#endif /* __VNR_WINDOW_H__ */