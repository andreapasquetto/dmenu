/* See LICENSE file for copyright and license details. */

static int topbar                  =    1; // 0 = bottom menu
static int centered                =    0; // 1 = centered menu
static int fuzzy                   =    1; // 0 = fuzzy matching disabled
static unsigned int lines          =    0; // number of grid rows
static unsigned int columns        =    0; // number of grid columns
static unsigned int lineheight     =    0; // menu line height
static const char *prompt          = NULL; // prompt string */
static const char worddelimiters[] =  " "; // chars not part of a word when searching ( /?\"&[])
static unsigned int border_width   =    0; // window border
static unsigned int min_lineheight =    8; // min menu height
static int min_width               =  750; // min width when centered

static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=10",
	"JoyPixels:pixelsize=10:antialias=true:autohint=true",
};

static const char *colors[SchemeLast][2] = {
//                 fg         bg
	[SchemeNorm] = { "#ffffff", "#000000" },
	[SchemeSel]  = { "#ffffff", "#1976d2" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
