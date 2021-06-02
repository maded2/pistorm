// SPDX-License-Identifier: MIT

// "Register" offsets for sending data to the RTG.
enum pi_regs {
  RTG_COMMAND   = 0x00,
  RTG_X1        = 0x02,
  RTG_X2        = 0x04,
  RTG_X3        = 0x06,
  RTG_Y1        = 0x08,
  RTG_Y2        = 0x0A,
  RTG_Y3        = 0x0C,
  RTG_FORMAT    = 0x0E,
  RTG_RGB1      = 0x10,
  RTG_RGB2      = 0x14,
  RTG_ADDR1     = 0x18,
  RTG_ADDR2     = 0x1C,
  RTG_U81       = 0x20,
  RTG_U82       = 0x21,
  RTG_U83       = 0x22,
  RTG_U84       = 0x23,
  RTG_X4        = 0x24,
  RTG_X5        = 0x26,
  RTG_Y4        = 0x28,
  RTG_Y5        = 0x2A,
  RTG_U1        = 0x2C,
  RTG_U2        = 0x2E,
  RTG_ADDR3     = 0x30,
  RTG_ADDR4     = 0x34,
  RTG_DEBUGME   = 0x50,
  IRTG_COMMAND  = 0x60,
};

enum rtg_cmds {
  RTGCMD_SETGC,
  RTGCMD_SETPAN,
  RTGCMD_SETCLUT,
  RTGCMD_ENABLE,
  RTGCMD_SETDISPLAY,
  RTGCMD_SETSWITCH,
  RTGCMD_FILLRECT,
  RTGCMD_BLITRECT,
  RTGCMD_BLITRECT_NOMASK_COMPLETE,
  RTGCMD_BLITPATTERN,
  RTGCMD_BLITTEMPLATE,
  RTGCMD_INVERTRECT,
  RTGCMD_DRAWLINE,
  RTGCMD_P2C,
  RTGCMD_P2D,
  RTGCMD_SETSPRITE,
  RTGCMD_SETSPRITEPOS,
  RTGCMD_SETSPRITECOLOR,
  RTGCMD_SETSPRITEIMAGE,
  RTGCMD_DEBUGME,
};

enum rtg_formats {
  RTGFMT_8BIT,
  RTGFMT_RBG565,
  RTGFMT_RGB32,
  RTGFMT_RGB555,
  RTGFMT_NUM,
};

enum gfx_minterm_modes {
	MINTERM_FALSE,
	MINTERM_NOR,
	MINTERM_ONLYDST,
	MINTERM_NOTSRC,
	MINTERM_ONLYSRC,
	MINTERM_INVERT,
	MINTERM_EOR,
	MINTERM_NAND,
	MINTERM_AND,
	MINTERM_NEOR,
	MINTERM_DST,
	MINTERM_NOTONLYSRC,
	MINTERM_SRC,
	MINTERM_NOTONLYDST,
	MINTERM_OR,
	MINTERM_TRUE,
};

enum gfx_draw_modes {
    DRAWMODE_JAM1 = 0,
    DRAWMODE_JAM2 = 1,
    DRAWMODE_COMPLEMENT = 2,
    DRAWMODE_INVERSVID = 4,
};

static const unsigned short rgbf_to_rtg[16] = {
  RTGFMT_8BIT,      // 0x00
  RTGFMT_8BIT,      // 0x01
  0,                // 0x02
  0,                // 0x03
  0,                // 0x04
  RTGFMT_RGB555,    // 0x05
  0,                // 0x06
  0,                // 0x07
  RTGFMT_RGB32,     // 0x08
  RTGFMT_RGB32,     // 0x09
  RTGFMT_RBG565,    // 0x0A
  RTGFMT_RGB555,    // 0x0B
  0,                // 0x0C
  RTGFMT_RGB555,    // 0x0D
  0,                // 0x0E
  0,                // 0x0F
};
