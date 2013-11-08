#ifndef __S6E63M0_GAMMA_H__
#define __S6E63M0_GAMMA_H__

#include "s6e63m0_param.h"

#define ACL_PARAM_SIZE	ARRAY_SIZE(acl_cutoff_50)
#define AID_PARAM_SIZE	ARRAY_SIZE(SEQ_PANEL_CONDITION_SET_500MBPS)

static const unsigned char SEQ_PANEL_CONDITION_SET_500MBPS[] = {
	0xF8,
	0x19, 0x35, 0x00, 0x00, 0x00, 0x94, 0x00, 0x3C, 0x7D, 0x10,
	0x27, 0x08, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x6E,
	0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x23, 0x6E, 0xC0, 0xC1,
	0x01, 0x81, 0xC1, 0x00, 0xC3, 0xF6, 0xF6, 0xC1
};

static const unsigned char SEQ_PANEL_CONDITION_SET_500MBPS_46[] = {
	0xF8,
	0x3D, 0x35, 0x00, 0x00, 0x00, 0x93, 0x00, 0x3C, 0x7D, 0x08,
	0x27, 0x7D, 0x3F, 0x00, 0x00, 0x00, 0x20, 0x04, 0x08, 0x6E,
	0x00, 0x00, 0x00, 0x02, 0x08, 0x08, 0x23, 0x23, 0xC0, 0xC8,
	0x08, 0x48, 0xC1, 0x00, 0xC1, 0xFF, 0xFF, 0xC8
};

static const unsigned char SEQ_PANEL_CONDITION_SET_480MBPS_46[] = {
	0xF8,
	0x3D, 0x32, 0x00, 0x00, 0x00, 0x8D, 0x00, 0x39, 0x78, 0x08,
	0x26, 0x78, 0x3C, 0x00, 0x00, 0x00, 0x20, 0x04, 0x08, 0x69,
	0x00, 0x00, 0x00, 0x02, 0x07, 0x07, 0x21, 0x21, 0xC0, 0xC8,
	0x08, 0x48, 0xC1, 0x00, 0xC1, 0xFF, 0xFF, 0xC8
};
static const unsigned char SEQ_GAMMA_CONDITION_SET_A1_SM2[] = {
	0xFA,
	0x01, 0x71, 0x31, 0x7B, 0xA4, 0xB6,
	0x95, 0xA9, 0xBC, 0xA2, 0xBB, 0xC9,
	0xB6, 0x91, 0xA3, 0x8B, 0xAD, 0xB6,
	0xA9, 0x00, 0xD6, 0x00, 0xBE, 0x00,
	0xFC,
};

static const unsigned char SEQ_GAMMA_CONDITION_SET_A2_SM2[] = {
	0xFA,
	0x01, 0x5F, 0x2E, 0x67, 0xAA, 0xC6,
	0xAC, 0xB0, 0xC8, 0xBB, 0xBE, 0xCB,
	0xBD, 0x97, 0xA5, 0x91, 0xAF, 0xB8,
	0xAB, 0x00, 0xC2, 0x00, 0xBA, 0x00, 0xE2,
};
#if !defined(CONFIG_MACH_M0_GRANDECTC) && !defined(CONFIG_MACH_IRON)
static const unsigned char SEQ_ETC_SOURCE_CONTROL[] = {
	0xF6,
	0x00, 0x02, 0x00
};
#endif

static const unsigned char SEQ_ETC_PENTILE_CONTROL[] = {
	0xB6,
	0x0C, 0x02, 0x03, 0x32, 0xC0,
	0x44, 0x44, 0xC0, 0x00
};

static const unsigned char SEQ_ETC_PENTILE_CONTROL_46[] = {
	0xB6,
	0x0C, 0x02, 0x03, 0x32, 0xFF,
	0x44, 0x44, 0xC0, 0x00
};

static const unsigned char SEQ_ETC_NVM_SETTING[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x07, 0xC0, 0x41,
	0xC1, 0x00, 0x60, 0x19
};

static const unsigned char SEQ_ETC_NVM_SETTING_46[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x07, 0xC0, 0x41,
	0xD0, 0x00, 0x60, 0x19
};

static const unsigned char SEQ_ETC_POWER_CONTROL[] = {
	0xF4,
	0xCF, 0x0A, 0x15, 0x10, 0x19, 0x33, 0x02
};

static const unsigned char SEQ_ETC_POWER_CONTROL_46[] = {
	0xF4,
	0xCF, 0x0A, 0x12, 0x10, 0x1E, 0x33, 0x02
};


enum {
	ACL_STATUS_0P = 0,
	ACL_STATUS_40P,
	ACL_STATUS_48P,
	ACL_STATUS_50P,
	ACL_STATUS_MAX
} ACL_STATUS;

const unsigned char acl_cutoff_40[] = {
	0xC1,
	0x4D, 0x96, 0x1D, 0x00, 0x00, 0x01, 0xDF, 0x00, 0x00, 0x03,
	0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x0C, 0x11,
	0x16, 0x1C, 0x21, 0x26, 0x2B, 0x31, 0x36,
};

const unsigned char acl_cutoff_48[] = {
	0xC1,
	0x4D, 0x96, 0x1D, 0x00, 0x00, 0x01, 0xDF, 0x00, 0x00, 0x03,
	0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x08, 0x0E, 0x15,
	0x1B, 0x22, 0x29, 0x2F, 0x36, 0x3C, 0x43,
};

const unsigned char acl_cutoff_50[] = {
	0xC1,
	0x4D, 0x96, 0x1D, 0x00, 0x00, 0x01, 0xDF, 0x00, 0x00, 0x03,
	0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x08, 0x0F, 0x16,
	0x1D, 0x24, 0x2A, 0x31, 0x38, 0x3F, 0x46,
};

const unsigned char *ACL_CUTOFF_TABLE[ACL_STATUS_MAX] = {
	SEQ_ACL_OFF,
	acl_cutoff_40,
	acl_cutoff_48,
	acl_cutoff_50,
};

#endif /* __S6E63M0_GAMMA_H__ */
