
/* appearance */
static const char *fonts[]         = {"JetBrainsMono Nerd Font:size=10"};
static char worddelimiters[]       = " ";
static int topbar                  = 1;    /* 0 = bottom menu             */
static unsigned int border_width   = 0;    /* border width                */
static int centered                = 0;    /* 1 = centered menu           */
static int min_width               = 720;  /* min width when centered     */
static int fuzzy                   = 1;    /* 0 = fuzzy matching disabled */
static unsigned int lines          = 0;    /* grid lines and columns      */
static unsigned int columns        = 0;    /* grid lines and columns      */
static unsigned int lineheight     = 0;    /* menu height                 */
static const char *prompt          = NULL;
static unsigned int min_lineheight = 8;    /* menu height                 */

/* colors */
static char normfgcolor[]     = "#ffffff";
static char normbgcolor[]     = "#000000";
static char selfgcolor[]      = "#ffffff";
static char selbgcolor[]      = "#1976d2";
static const char *colors[][2] = {
/*                fg           bg         */
  [SchemeNorm] = {normfgcolor, normbgcolor},
  [SchemeSel]  = {selfgcolor,  selbgcolor },
  [SchemeOut]  = {"#000000",   "#00ffff"  },
};

