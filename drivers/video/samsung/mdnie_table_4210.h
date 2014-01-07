#ifndef __MDNIE_TABLE_H__
#define __MDNIE_TABLE_H__

#include "mdnie.h"


static unsigned short tune_dynamic_gallery[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_ui[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_video[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_vt[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_gallery[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_ui[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_video[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_vt[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_gallery[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_ui[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_video[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_vt[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_natural_gallery[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_natural_ui[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_natural_video[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_natural_vt[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_camera[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_camera_outdoor[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_cold[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_cold_outdoor[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_normal_outdoor[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_warm[] = {
	END_SEQ, 0x0000,
};

static unsigned short tune_warm_outdoor[] = {
	END_SEQ, 0x0000,
};

struct mdnie_tuning_info etc_table[CABC_MAX][OUTDOOR_MAX][TONE_MAX] = {
	{
		{
			{"normal",		NULL},
			{"warm",		tune_warm},
			{"cold",		tune_cold},
		},
		{
			{"normal_outdoor",	tune_normal_outdoor},
			{"warm_outdoor",	tune_warm_outdoor},
			{"cold_outdoor",	tune_cold_outdoor},
		},
	}
};

#if defined(CONFIG_FB_MDNIE_PWM)
struct mdnie_tuning_info tuning_table[CABC_MAX][MODE_MAX][SCENARIO_MAX] = {
	{
		{
			{"dynamic_ui",		tune_dynamic_ui},
			{"dynamic_video",	tune_dynamic_video},
			{"dynamic_video",	tune_dynamic_video},
			{"dynamic_video",	tune_dynamic_video},
			{"camera",		NULL},
			{"dynamic_ui",		tune_dynamic_ui},
			{"dynamic_gallery",	tune_dynamic_gallery},
			{"dynamic_vt",		tune_dynamic_vt},
		}, {
			{"standard_ui",		tune_standard_ui},
			{"standard_video",	tune_standard_video},
			{"standard_video",	tune_standard_video},
			{"standard_video",	tune_standard_video},
			{"camera",		NULL},
			{"standard_ui",		tune_standard_ui},
			{"standard_gallery",	tune_standard_gallery},
			{"standard_vt",		tune_standard_vt},
		}, {
			{"movie_ui",		tune_movie_ui},
			{"movie_video",		tune_movie_video},
			{"movie_video",		tune_movie_video},
			{"movie_video",		tune_movie_video},
			{"camera",		NULL},
			{"movie_ui",		tune_movie_ui},
			{"movie_gallery",	tune_movie_gallery},
			{"movie_vt",		tune_movie_vt},
		},
	}, {
		{
			{"dynamic_ui_cabc",		tune_dynamic_ui},
			{"dynamic_video_cabc",		tune_dynamic_video},
			{"dynamic_video_cabc",		tune_dynamic_video},
			{"dynamic_video_cabc",		tune_dynamic_video},
			{"camera",			NULL},
			{"dynamic_ui_cabc",		tune_dynamic_ui},
			{"dynamic_gallery_cabc",	tune_dynamic_gallery},
			{"dynamic_vt_cabc",		tune_dynamic_vt},
		}, {
			{"standard_ui_cabc",		tune_standard_ui},
			{"standard_video_cabc",		tune_standard_video},
			{"standard_video_cabc",		tune_standard_video},
			{"standard_video_cabc",		tune_standard_video},
			{"camera",			NULL},
			{"standard_ui_cabc",		tune_standard_ui},
			{"standard_gallery_cabc",	tune_standard_gallery},
			{"standard_vt_cabc",		tune_standard_vt},
		}, {
			{"movie_ui_cabc",		tune_movie_ui},
			{"movie_video_cabc",		tune_movie_video},
			{"movie_video_cabc",		tune_movie_video},
			{"movie_video_cabc",		tune_movie_video},
			{"camera",			NULL},
			{"movie_ui_cabc",		tune_movie_ui},
			{"movie_gallery_cabc",		tune_movie_gallery},
			{"movie_vt_cabc",		tune_movie_vt},
		},
	},
};
#else
struct mdnie_tuning_info tuning_table[CABC_MAX][MODE_MAX][SCENARIO_MAX] = {
	{
		{
			{"dynamic_ui",			tune_dynamic_ui},
			{"dynamic_video",		tune_dynamic_video},
			{"dynamic_video",		tune_dynamic_video},
			{"dynamic_video",		tune_dynamic_video},
			{"camera",			NULL/*tune_camera*/},
			{"dynamic_ui",			tune_dynamic_ui},
			{"dynamic_gallery",		tune_dynamic_gallery},
			{"dynamic_vt",			tune_dynamic_vt},
		}, {
			{"standard_ui",			tune_standard_ui},
			{"standard_video",		tune_standard_video},
			{"standard_video",		tune_standard_video},
			{"standard_video",		tune_standard_video},
			{"camera",			NULL/*tune_camera*/},
			{"standard_ui",			tune_standard_ui},
			{"standard_gallery",		tune_standard_gallery},
			{"standard_vt",			tune_standard_vt},
		}, {
			{"natural_ui",			tune_natural_ui},
			{"natural_video",		tune_natural_video},
			{"natural_video",		tune_natural_video},
			{"natural_video",		tune_natural_video},
			{"camera",			NULL/*tune_camera*/},
			{"natural_ui",			tune_natural_ui},
			{"natural_gallery",		tune_natural_gallery},
			{"natural_vt",			tune_natural_vt},
		}, {
			{"movie_ui",			tune_movie_ui},
			{"movie_video",			tune_movie_video},
			{"movie_video",			tune_movie_video},
			{"movie_video",			tune_movie_video},
			{"camera",			NULL/*tune_camera*/},
			{"movie_ui",			tune_movie_ui},
			{"movie_gallery",		tune_movie_gallery},
			{"movie_vt",			tune_movie_vt},
		},
	}
};
#endif

struct mdnie_tuning_info camera_table[OUTDOOR_MAX] = {
	{"camera",		tune_camera},
	{"camera_outdoor",	tune_camera_outdoor},
};

#endif /* __MDNIE_TABLE_H__ */
