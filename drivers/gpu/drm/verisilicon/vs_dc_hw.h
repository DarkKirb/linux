/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2023 VeriSilicon Holdings Co., Ltd.
 */

#ifndef __VS_DC_HW_H__
#define __VS_DC_HW_H__

#include <linux/version.h>

#define AQ_INTR_ACKNOWLEDGE				0x0010
#define AQ_INTR_ENBL					0x0014
#define DC_HW_REVISION					0x0024
#define DC_HW_CHIP_CID					0x0030

#define DC_REG_BASE					0x0800
#define DC_REG_RANGE					0x2000
#define DC_SEC_REG_OFFSET				0x100000

#define DC_FRAMEBUFFER_CONFIG				0x1518
#define DC_FRAMEBUFFER_CONFIG_EX			0x1cc0
#define DC_FRAMEBUFFER_SCALE_CONFIG			0x1520
#define DC_FRAMEBUFFER_TOP_LEFT				0x24d8
#define DC_FRAMEBUFFER_BOTTOM_RIGHT			0x24e0
#define DC_FRAMEBUFFER_ADDRESS				0x1400
#define DC_FRAMEBUFFER_U_ADDRESS			0x1530
#define DC_FRAMEBUFFER_V_ADDRESS			0x1538
#define DC_FRAMEBUFFER_STRIDE				0x1408
#define DC_FRAMEBUFFER_U_STRIDE				0x1800
#define DC_FRAMEBUFFER_V_STRIDE				0x1808
#define DC_FRAMEBUFFER_SIZE				0x1810
#define DC_FRAMEBUFFER_SCALE_FACTOR_X			0x1828
#define DC_FRAMEBUFFER_SCALE_FACTOR_Y			0x1830
#define DC_FRAMEBUFFER_H_FILTER_COEF_INDEX		0x1838
#define DC_FRAMEBUFFER_H_FILTER_COEF_DATA		0x1a00
#define DC_FRAMEBUFFER_V_FILTER_COEF_INDEX		0x1a08
#define DC_FRAMEBUFFER_V_FILTER_COEF_DATA		0x1a10
#define DC_FRAMEBUFFER_INIT_OFFSET			0x1a20
#define DC_FRAMEBUFFER_COLOR_KEY			0x1508
#define DC_FRAMEBUFFER_COLOR_KEY_HIGH			0x1510
#define DC_FRAMEBUFFER_CLEAR_VALUE			0x1a18
#define DC_FRAMEBUFFER_COLOR_TABLE_INDEX		0x1818
#define DC_FRAMEBUFFER_COLOR_TABLE_DATA			0x1820
#define DC_FRAMEBUFFER_BG_COLOR				0x1528
#define DC_FRAMEBUFFER_ROI_ORIGIN			0x1cb0
#define DC_FRAMEBUFFER_ROI_SIZE				0x1cb8
#define DC_FRAMEBUFFER_WATER_MARK			0x1ce8
#define DC_FRAMEBUFFER_DEGAMMA_INDEX			0x1d88
#define DC_FRAMEBUFFER_DEGAMMA_DATA			0x1d90
#define DC_FRAMEBUFFER_DEGAMMA_EX_DATA			0x1d98
#define DC_FRAMEBUFFER_YUVTORGB_COEF0			0x1da0
#define DC_FRAMEBUFFER_YUVTORGB_COEF1			0x1da8
#define DC_FRAMEBUFFER_YUVTORGB_COEF2			0x1db0
#define DC_FRAMEBUFFER_YUVTORGB_COEF3			0x1db8
#define DC_FRAMEBUFFER_YUVTORGB_COEF4			0x1e00
#define DC_FRAMEBUFFER_YUVTORGB_COEFD0			0x1e08
#define DC_FRAMEBUFFER_YUVTORGB_COEFD1			0x1e10
#define DC_FRAMEBUFFER_YUVTORGB_COEFD2			0x1e18
#define DC_FRAMEBUFFER_Y_CLAMP_BOUND			0x1e88
#define DC_FRAMEBUFFER_UV_CLAMP_BOUND			0x1e90
#define DC_FRAMEBUFFER_RGBTORGB_COEF0			0x1e20
#define DC_FRAMEBUFFER_RGBTORGB_COEF1			0x1e28
#define DC_FRAMEBUFFER_RGBTORGB_COEF2			0x1e30
#define DC_FRAMEBUFFER_RGBTORGB_COEF3			0x1e38
#define DC_FRAMEBUFFER_RGBTORGB_COEF4			0x1e40
#define DC_FRAMEBUFFER_BLEND_CONFIG			0x2510
#define DC_FRAMEBUFFER_SRC_GLOBAL_COLOR			0x2500
#define DC_FRAMEBUFFER_DST_GLOBAL_COLOR			0x2508

#define DC_OVERLAY_CONFIG				0x1540
#define DC_OVERLAY_CONFIG_EX				0x2540
#define DC_OVERLAY_SCALE_CONFIG				0x1c00
#define DC_OVERLAY_BLEND_CONFIG				0x1580
#define DC_OVERLAY_TOP_LEFT				0x1640
#define DC_OVERLAY_BOTTOM_RIGHT				0x1680
#define DC_OVERLAY_ADDRESS				0x15c0
#define DC_OVERLAY_U_ADDRESS				0x1840
#define DC_OVERLAY_V_ADDRESS				0x1880
#define DC_OVERLAY_STRIDE				0x1600
#define DC_OVERLAY_U_STRIDE				0x18c0
#define DC_OVERLAY_V_STRIDE				0x1900
#define DC_OVERLAY_SIZE					0x17c0
#define DC_OVERLAY_SCALE_FACTOR_X			0x1a40
#define DC_OVERLAY_SCALE_FACTOR_Y			0x1a80
#define DC_OVERLAY_H_FILTER_COEF_INDEX			0x1aC0
#define DC_OVERLAY_H_FILTER_COEF_DATA			0x1b00
#define DC_OVERLAY_V_FILTER_COEF_INDEX			0x1b40
#define DC_OVERLAY_V_FILTER_COEF_DATA			0x1b80
#define DC_OVERLAY_INIT_OFFSET				0x1bC0
#define DC_OVERLAY_COLOR_KEY				0x1740
#define DC_OVERLAY_COLOR_KEY_HIGH			0x1780
#define DC_OVERLAY_CLEAR_VALUE				0x1940
#define DC_OVERLAY_COLOR_TABLE_INDEX			0x1980
#define DC_OVERLAY_COLOR_TABLE_DATA			0x19c0
#define DC_OVERLAY_SRC_GLOBAL_COLOR			0x16c0
#define DC_OVERLAY_DST_GLOBAL_COLOR			0x1700
#define DC_OVERLAY_ROI_ORIGIN				0x1d00
#define DC_OVERLAY_ROI_SIZE				0x1d40
#define DC_OVERLAY_WATER_MARK				0x1dc0
#define DC_OVERLAY_DEGAMMA_INDEX			0x2200
#define DC_OVERLAY_DEGAMMA_DATA				0x2240
#define DC_OVERLAY_DEGAMMA_EX_DATA			0x2280
#define DC_OVERLAY_YUVTORGB_COEF0			0x1ec0
#define DC_OVERLAY_YUVTORGB_COEF1			0x1f00
#define DC_OVERLAY_YUVTORGB_COEF2			0x1f40
#define DC_OVERLAY_YUVTORGB_COEF3			0x1f80
#define DC_OVERLAY_YUVTORGB_COEF4			0x1fc0
#define DC_OVERLAY_YUVTORGB_COEFD0			0x2000
#define DC_OVERLAY_YUVTORGB_COEFD1			0x2040
#define DC_OVERLAY_YUVTORGB_COEFD2			0x2080
#define DC_OVERLAY_Y_CLAMP_BOUND			0x22c0
#define DC_OVERLAY_UV_CLAMP_BOUND			0x2300
#define DC_OVERLAY_RGBTORGB_COEF0			0x20c0
#define DC_OVERLAY_RGBTORGB_COEF1			0x2100
#define DC_OVERLAY_RGBTORGB_COEF2			0x2140
#define DC_OVERLAY_RGBTORGB_COEF3			0x2180
#define DC_OVERLAY_RGBTORGB_COEF4			0x21c0

#define DC_CURSOR_CONFIG				0x1468
#define DC_CURSOR_ADDRESS				0x146c
#define DC_CURSOR_LOCATION				0x1470
#define DC_CURSOR_BACKGROUND				0x1474
#define DC_CURSOR_FOREGROUND				0x1478
#define DC_CURSOR_CLK_GATING				0x1484
#define DC_CURSOR_CONFIG_EX				0x24e8
#define DC_CURSOR_OFFSET				0x1080

#define DC_DISPLAY_DITHER_CONFIG			0x1410
#define DC_DISPLAY_PANEL_CONFIG				0x1418
#define DC_DISPLAY_PANEL_CONFIG_EX			0x2518
#define DC_DISPLAY_DITHER_TABLE_LOW			0x1420
#define DC_DISPLAY_DITHER_TABLE_HIGH			0x1428
#define DC_DISPLAY_H					0x1430
#define DC_DISPLAY_H_SYNC				0x1438
#define DC_DISPLAY_V					0x1440
#define DC_DISPLAY_V_SYNC				0x1448
#define DC_DISPLAY_CURRENT_LOCATION			0x1450
#define DC_DISPLAY_GAMMA_INDEX				0x1458
#define DC_DISPLAY_GAMMA_DATA				0x1460
#define DC_DISPLAY_INT					0x147c
#define DC_DISPLAY_INT_ENABLE				0x1480
#define DC_DISPLAY_DBI_CONFIG				0x1488
#define DC_DISPLAY_GENERAL_CONFIG			0x14b0
#define DC_DISPLAY_DPI_CONFIG				0x14b8
#define DC_DISPLAY_PANEL_START				0x1ccc
#define DC_DISPLAY_DEBUG_COUNTER_SELECT			0x14d0
#define DC_DISPLAY_DEBUG_COUNTER_VALUE			0x14d8
#define DC_DISPLAY_DP_CONFIG				0x1cd0
#define DC_DISPLAY_GAMMA_EX_INDEX			0x1cf0
#define DC_DISPLAY_GAMMA_EX_DATA			0x1cf8
#define DC_DISPLAY_GAMMA_EX_ONE_DATA			0x1d80
#define DC_DISPLAY_RGBTOYUV_COEF0			0x1e48
#define DC_DISPLAY_RGBTOYUV_COEF1			0x1e50
#define DC_DISPLAY_RGBTOYUV_COEF2			0x1e58
#define DC_DISPLAY_RGBTOYUV_COEF3			0x1e60
#define DC_DISPLAY_RGBTOYUV_COEF4			0x1e68
#define DC_DISPLAY_RGBTOYUV_COEFD0			0x1e70
#define DC_DISPLAY_RGBTOYUV_COEFD1			0x1e78
#define DC_DISPLAY_RGBTOYUV_COEFD2			0x1e80

#define DC_CLK_GATTING					0x1a28
#define DC_QOS_CONFIG					0x1a38

#define DC_TRANSPARENCY_OPAQUE				0x00
#define DC_TRANSPARENCY_KEY				0x02
#define DC_DISPLAY_DITHERTABLE_LOW			0x7b48f3c0
#define DC_DISPLAY_DITHERTABLE_HIGH			0x596ad1e2

#define GAMMA_SIZE					256
#define GAMMA_EX_SIZE					300
#define DEGAMMA_SIZE					260

#define RGB_TO_RGB_TABLE_SIZE				9
#define YUV_TO_RGB_TABLE_SIZE				16
#define RGB_TO_YUV_TABLE_SIZE				12

#define DC_LAYER_NUM					6
#define DC_DISPLAY_NUM					2
#define DC_CURSOR_NUM					2

enum dc_chip_rev {
	DC_REV_0,/* For HW_REV_5720,HW_REV_5721_311 */
	DC_REV_1,/* For HW_REV_5721_30B */
	DC_REV_2,/* For HW_REV_5721_310 */
};

enum dc_hw_plane_id {
	PRIMARY_PLANE_0,
	OVERLAY_PLANE_0,
	OVERLAY_PLANE_1,
	PRIMARY_PLANE_1,
	OVERLAY_PLANE_2,
	OVERLAY_PLANE_3,
	CURSOR_PLANE_0,
	CURSOR_PLANE_1,
	PLANE_NUM
};

enum dc_hw_color_format {
	FORMAT_X4R4G4B4,//0
	FORMAT_A4R4G4B4,//1
	FORMAT_X1R5G5B5,//2
	FORMAT_A1R5G5B5,//3
	FORMAT_R5G6B5,//4
	FORMAT_X8R8G8B8,//5
	FORMAT_A8R8G8B8,//6
	FORMAT_YUY2,//7
	FORMAT_UYVY,//8
	FORMAT_INDEX8,//9
	FORMAT_MONOCHROME,//10
	FORMAT_YV12 = 0xf,
	FORMAT_A8,//16
	FORMAT_NV12,//17
	FORMAT_NV16,//18
	FORMAT_RG16,//19
	FORMAT_R8,//20
	FORMAT_NV12_10BIT,//21
	FORMAT_A2R10G10B10,//22
	FORMAT_NV16_10BIT,//23
	FORMAT_INDEX1,//24
	FORMAT_INDEX2,//25
	FORMAT_INDEX4,//26
	FORMAT_P010,//27
	FORMAT_YUV444,//28
	FORMAT_YUV444_10BIT,//29
};

enum dc_hw_yuv_color_space {
	COLOR_SPACE_601 = 0,
	COLOR_SPACE_709 = 1,
	COLOR_SPACE_2020 = 3,
};

enum dc_hw_rotation {
	ROT_0 = 0,
	ROT_90 = 4,
	ROT_180 = 5,
	ROT_270 = 6,
	FLIP_X = 1,
	FLIP_Y = 2,
	FLIP_XY = 3,
};

enum dc_hw_swizzle {
	SWIZZLE_ARGB = 0,
	SWIZZLE_RGBA,
	SWIZZLE_ABGR,
	SWIZZLE_BGRA,
};

enum dc_hw_out {
	OUT_DPI,
	OUT_DP,
};

enum dc_hw_cursor_size {
	CURSOR_SIZE_32X32 = 0,
	CURSOR_SIZE_64X64,
};

enum dc_hw_blend_mode {
	/* out.rgb = plane_alpha * fg.rgb +
	 *		(1 - (plane_alpha * fg.alpha)) * bg.rgb
	 */
	BLEND_PREMULTI,
	/* out.rgb = plane_alpha * fg.alpha * fg.rgb +
	 *		(1 - (plane_alpha * fg.alpha)) * bg.rgb
	 */
	BLEND_COVERAGE,
	/* out.rgb = plane_alpha * fg.rgb +
	 *		(1 - plane_alpha) * bg.rgb
	 */
	BLEND_PIXEL_NONE,
};

struct dc_hw_plane_reg {
	u32 y_address;
	u32 u_address;
	u32 v_address;
	u32 y_stride;
	u32 u_stride;
	u32 v_stride;
	u32 size;
	u32 top_left;
	u32 bottom_right;
	u32 scale_factor_x;
	u32 scale_factor_y;
	u32 h_filter_coef_index;
	u32 h_filter_coef_data;
	u32 v_filter_coef_index;
	u32 v_filter_coef_data;
	u32 init_offset;
	u32 color_key;
	u32 color_key_high;
	u32 clear_value;
	u32 color_table_index;
	u32 color_table_data;
	u32 scale_config;
	u32 water_mark;
	u32 degamma_index;
	u32 degamma_data;
	u32 degamma_ex_data;
	u32 src_global_color;
	u32 dst_global_color;
	u32 blend_config;
	u32 roi_origin;
	u32 roi_size;
	u32 yuv_to_rgb_coef0;
	u32 yuv_to_rgb_coef1;
	u32 yuv_to_rgb_coef2;
	u32 yuv_to_rgb_coef3;
	u32 yuv_to_rgb_coef4;
	u32 yuv_to_rgb_coefd0;
	u32 yuv_to_rgb_coefd1;
	u32 yuv_to_rgb_coefd2;
	u32 y_clamp_bound;
	u32 uv_clamp_bound;
	u32 rgb_to_rgb_coef0;
	u32 rgb_to_rgb_coef1;
	u32 rgb_to_rgb_coef2;
	u32 rgb_to_rgb_coef3;
	u32 rgb_to_rgb_coef4;
};

struct dc_hw_fb {
	u32 y_address;
	u32 u_address;
	u32 v_address;
	u32 clear_value;
	u32 water_mark;
	u16 y_stride;
	u16 u_stride;
	u16 v_stride;
	u16 width;
	u16 height;
	u8	format;
	u8	tile_mode;
	u8	rotation;
	u8	yuv_color_space;
	u8	swizzle;
	u8	uv_swizzle;
	u8	zpos;
	u8	display_id;
	bool	clear_enable;
	bool	dec_enable;
	bool	enable;
	bool	dirty;
};

struct dc_hw_scale {
	u32 scale_factor_x;
	u32 scale_factor_y;
	bool	enable;
	bool	dirty;
};

struct dc_hw_position {
	u16 start_x;
	u16 start_y;
	u16 end_x;
	u16 end_y;
	bool	dirty;
};

struct dc_hw_blend {
	u8	alpha;
	u8	blend_mode;
	bool	dirty;
};

struct dc_hw_colorkey {
	u32 colorkey;
	u32 colorkey_high;
	u8	transparency;
	bool dirty;
};

struct dc_hw_roi {
	u16 x;
	u16 y;
	u16 width;
	u16 height;
	bool enable;
	bool dirty;
};

struct dc_hw_cursor {
	u32 address;
	u16 x;
	u16 y;
	u16 hot_x;
	u16 hot_y;
	u8	size;
	u8	display_id;
	bool	enable;
	bool	dirty;
};

struct dc_hw_display {
	u32 bus_format;
	u16 h_active;
	u16 h_total;
	u16 h_sync_start;
	u16 h_sync_end;
	u16 v_active;
	u16 v_total;
	u16 v_sync_start;
	u16 v_sync_end;
	u16 sync_mode;
	u32 bg_color;
	u8	id;
	bool	h_sync_polarity;
	bool	v_sync_polarity;
	bool	enable;
	bool	sync_enable;
	bool	dither_enable;
};

struct dc_hw_gamma {
	u16 gamma[GAMMA_EX_SIZE][3];
	bool	enable;
	bool	dirty;
};

struct dc_hw_degamma {
	u16 degamma[DEGAMMA_SIZE][3];
	u32 mode;
	bool	dirty;
};

struct dc_hw_plane {
	struct dc_hw_fb			fb;
	struct dc_hw_position	pos;
	struct dc_hw_scale		scale;
	struct dc_hw_blend		blend;
	struct dc_hw_roi		roi;
	struct dc_hw_colorkey	colorkey;
	struct dc_hw_degamma	degamma;
};

struct dc_hw_qos {
	u8	  low_value;
	u8	  high_value;
	bool  dirty;
};

struct dc_hw_read {
	u32			reg;
	u32			value;
};

struct dc_hw;
struct dc_hw_funcs {
	void (*gamma)(struct dc_hw *hw);
	void (*plane)(struct dc_hw *hw);
	void (*display)(struct dc_hw *hw, struct dc_hw_display *display);
};

struct dc_hw {
	enum dc_chip_rev rev;
	enum dc_hw_out		out[DC_DISPLAY_NUM];
	void			*hi_base;
	void			*reg_base;

	struct dc_hw_display display[DC_DISPLAY_NUM];
	struct dc_hw_gamma	 gamma[DC_DISPLAY_NUM];
	struct dc_hw_plane	 plane[DC_LAYER_NUM];
	struct dc_hw_cursor  cursor[DC_CURSOR_NUM];
	struct dc_hw_qos	 qos;
	struct dc_hw_funcs	 *func;
	struct vs_dc_info	 *info;
};

int dc_hw_init(struct dc_hw *hw);
void dc_hw_deinit(struct dc_hw *hw);
void dc_hw_update_plane(struct dc_hw *hw, u8 id,
			struct dc_hw_fb *fb, struct dc_hw_scale *scale,
			struct dc_hw_position *pos, struct dc_hw_blend *blend);
void dc_hw_update_degamma(struct dc_hw *hw, u8 id, u32 mode);
void dc_hw_update_roi(struct dc_hw *hw, u8 id, struct dc_hw_roi *roi);
void dc_hw_update_colorkey(struct dc_hw *hw, u8 id,
			   struct dc_hw_colorkey *colorkey);
void dc_hw_update_qos(struct dc_hw *hw, struct dc_hw_qos *qos);
void dc_hw_update_cursor(struct dc_hw *hw, u8 id, struct dc_hw_cursor *cursor);
void dc_hw_update_gamma(struct dc_hw *hw, u8 id, u16 index,
			u16 r, u16 g, u16 b);
void dc_hw_enable_gamma(struct dc_hw *hw, u8 id, bool enable);
void dc_hw_setup_display(struct dc_hw *hw, struct dc_hw_display *display);
void dc_hw_enable_interrupt(struct dc_hw *hw, bool enable);
u32 dc_hw_get_interrupt(struct dc_hw *hw);
bool dc_hw_check_underflow(struct dc_hw *hw);
void dc_hw_enable_shadow_register(struct dc_hw *hw, bool enable);
void dc_hw_set_out(struct dc_hw *hw, enum dc_hw_out out, u8 id);
void dc_hw_commit(struct dc_hw *hw);

#endif /* __VS_DC_HW_H__ */
