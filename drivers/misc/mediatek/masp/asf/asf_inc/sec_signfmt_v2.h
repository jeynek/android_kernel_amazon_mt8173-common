/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef _SEC_SIGN_FORMAT_V2_H
#define _SEC_SIGN_FORMAT_V2_H

#include "sec_sign_header.h"
#include "sec_signfmt_def.h"


/******************************************************************************
 *  EXPORT FUNCTION
 ******************************************************************************/
int sec_signfmt_verify_file_v2(ASF_FILE fp, SEC_IMG_HEADER *img_hdr);
unsigned int sec_signfmt_get_extension_length_v2(ASF_FILE fp);
int sec_signfmt_calculate_image_hash_v2(char *part_name, SEC_IMG_HEADER *img_hdr,
					unsigned int image_type, char *hash_buf,
					unsigned int hash_len);
unsigned int sec_signfmt_get_hash_length_v2(void);
unsigned int sec_signfmt_get_signature_length_v2(void);

#endif
