/* See LICENSE file for copyright and license details. */
#define CWD   "cwd: "
#define CURSR " > "
#define EMPTY "   "

static int mtimeorder  = 0; /* Set to 1 to sort by time modified */
static int sizeorder   = 0; /* Set to 1 to sort by file size */
static int idletimeout = 0; /* Screensaver timeout in seconds, 0 to disable */
static int showhidden  = 0; /* Set to 1 to show hidden files by default */
static int showdetail  = 0; /* Set to show additional file info */
static char *idlecmd   = "rain"; /* The screensaver program */

struct assoc assocs[] = {
	{ "\\.(c|cpp|h|txt|log|sh)$", "vi" },
	{ "\\.(avi|mp4|mkv|3gp|mov)$", "mpv" },
	{ "\\.(wma|mp3|ogg|flac|m4a)$", "mpv" },
	{ "\\.(png|jpg|gif)$", "viewnior" },
	//{ "\\.(html|svg)$", "firefox" },
	{ "\\.pdf$", "zathura" },
	//{ "\\.sh$", "sh" },
	//{ ".", "less" },
};

struct key bindings[] = {
	/* Quit */
	{ 'q',            SEL_QUIT,      "",     "" },
	/* Back */
	{ KEY_BACKSPACE,  SEL_BACK,      "",     "" },
	{ KEY_LEFT,       SEL_BACK,      "",     "" },
	{ 'h',            SEL_BACK,      "",     "" },
	{ CONTROL('H'),   SEL_BACK,      "",     "" },
	/* Inside */
	{ KEY_ENTER,      SEL_GOIN,      "",     "" },
	{ '\r',           SEL_GOIN,      "",     "" },
	{ KEY_RIGHT,      SEL_GOIN,      "",     "" },
	{ 'l',            SEL_GOIN,      "",     "" },
	/* Filter */
	{ '/',            SEL_FLTR,      "",     "" },
	{ '&',            SEL_FLTR,      "",     "" },
	/* Next */
	{ 'j',            SEL_NEXT,      "",     "" },
	{ KEY_DOWN,       SEL_NEXT,      "",     "" },
	{ CONTROL('N'),   SEL_NEXT,      "",     "" },
	/* Previous */
	{ 'k',            SEL_PREV,      "",     "" },
	{ KEY_UP,         SEL_PREV,      "",     "" },
	{ CONTROL('P'),   SEL_PREV,      "",     "" },
	/* Page down */
	{ KEY_NPAGE,      SEL_PGDN,      "",     "" },
	{ CONTROL('D'),   SEL_PGDN,      "",     "" },
	/* Page up */
	{ KEY_PPAGE,      SEL_PGUP,      "",     "" },
	{ CONTROL('U'),   SEL_PGUP,      "",     "" },
	/* Home */
	{ KEY_HOME,       SEL_HOME,      "",     "" },
	{ 'g',            SEL_HOME,      "",     "" },
	{ CONTROL('A'),   SEL_HOME,      "",     "" },
	{ '^',            SEL_HOME,      "",     "" },
	/* End */
	{ KEY_END,        SEL_END,       "",     "" },
	{ 'G',            SEL_END,       "",     "" },
	{ CONTROL('E'),   SEL_END,       "",     "" },
	{ '$',            SEL_END,       "",     "" },
	/* Change dir */
	{ 'c',            SEL_CD,        "",     "" },
	{ '~',            SEL_CDHOME,    "",     "" },
	/* Toggle hide .dot files */
	{ '.',            SEL_TOGGLEDOT, "",     "" },
	/* Detailed listing */
	{ 'd',            SEL_DETAIL,    "",     "" },
	/* File details */
	{ 'D',            SEL_STATS,     "",     "" },
	/* Toggle sort by size */
	{ 's',            SEL_FSIZE,     "",     "" },
	/* Toggle sort by time */
	{ 't',            SEL_MTIME,     "",     "" },
	{ CONTROL('L'),   SEL_REDRAW,    "",     "" },
	/* Copy currently selected file path */
	{ CONTROL('K'),   SEL_COPY,      "",     "" },
	/* Show help */
	{ '?',            SEL_HELP,      "",     "" },
	/* Run command */
	{ 'z',            SEL_RUN,       "top",  "" },
	{ '!',            SEL_RUN,       "sh",   "SHELL" },
	/* Run command with argument */
	{ 'e',            SEL_RUNARG,    "vi",   "EDITOR" },
	{ 'p',            SEL_RUNARG,    "less", "PAGER" },
};
