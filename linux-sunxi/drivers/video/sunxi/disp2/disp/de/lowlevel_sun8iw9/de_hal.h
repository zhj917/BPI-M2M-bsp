/*
 * drivers/video/sunxi/disp2/disp/de/lowlevel_sun8iw9/de_hal.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __DE_HAL_H__
#define __DE_HAL_H__
#include "de_rtmx.h"
#include "de_scaler.h"
#include "de_csc.h"
#include "../disp_private.h"

extern int de_al_mgr_apply(unsigned int screen_id, struct disp_manager_data *data);
extern int de_al_init(disp_bsp_init_para *para);
extern int de_al_lyr_apply(unsigned int screen_id, struct disp_layer_config_data *data, unsigned int layer_num);
extern int de_al_mgr_sync(unsigned int screen_id);
extern int de_al_mgr_update_regs(unsigned int screen_id);
extern int de_al_query_irq(unsigned int screen_id);
extern int de_al_enable_irq(unsigned int screen_id, unsigned en);
int de_update_device_fps(unsigned int sel, u32 fps);

extern int de_enhance_set_size(unsigned int screen_id, disp_rectsz *size);
extern int de_enhance_set_format(unsigned int screen_id, unsigned int format);

#endif
