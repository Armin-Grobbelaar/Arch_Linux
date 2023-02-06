/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static char font[] = "JetBrainsMono Nerd Font:size=10:style=bold";
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
		font,
	"JetBrainsMono Nerd Font:size=10:style=bold",
};
/* "monospace:size=10" */
static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
/*static char *colors[SchemeLast][2] = {	/*     fg         bg       */
/*	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut]  = { "#000000",   "#00ffff" },
}; */

# include "/home/armin/.cache/wal/colors-wal-dmenu.h"

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* Add highlight Color */
colors[3] = [SchemeSelHighlight] = { "#ffc978", "#005577" };
colors[4] = [SchemeNormHighlight] = { "#ffc978", "#222222" };


/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor",  STRING, &selfgcolor },
	{ "selbgcolor",  STRING, &selbgcolor },
	{ "prompt",      STRING, &prompt },
};

/* Size of the window border */
static const unsigned int border_width = 5;
