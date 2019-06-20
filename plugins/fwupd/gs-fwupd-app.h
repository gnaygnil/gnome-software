/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2017 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: GPL-2.0+
 */

#pragma once

#include <gnome-software.h>
#include <fwupd.h>

G_BEGIN_DECLS

#define GS_TYPE_FWUPD_APP (gs_fwupd_app_get_type ())

G_DECLARE_FINAL_TYPE (GsFwupdApp, gs_fwupd_app, GS, FWUPD_APP, GsApp)

GsApp			*gs_fwupd_app_new			(const gchar	*id);
const gchar		*gs_fwupd_app_get_device_id		(GsApp		*app);
const gchar		*gs_fwupd_app_get_remote_id		(GsApp		*app);
const gchar		*gs_fwupd_app_get_update_uri		(GsApp		*app);
gboolean		 gs_fwupd_app_get_is_locked		(GsApp		*app);
gboolean		 gs_fwupd_app_get_only_offline		(GsApp		*app);

void			 gs_fwupd_app_set_device_id		(GsApp		*app,
								 const gchar	*device_id);
void			 gs_fwupd_app_set_remote_id		(GsApp		*app,
								 const gchar	*remote_id);
void			 gs_fwupd_app_set_update_uri		(GsApp		*app,
								 const gchar	*update_uri);
void			 gs_fwupd_app_set_is_locked		(GsApp		*app,
								 gboolean	 is_locked);
void			 gs_fwupd_app_refine			(GsApp		*app,
								 FwupdDevice	*dev);

G_END_DECLS
