static const char norm_fg[] = "#ebebeb";
static const char norm_bg[] = "#0a0a0a";
static const char norm_border[] = "#0a0a0a";

//static const char sel_fg[] = "#ebebeb";
static const char sel_fg[] = "#0a0a0a";
static const char sel_bg[] = "#CCCCCC";
static const char sel_border[] = "#ebebeb";

static const char urg_fg[] = "#ebebeb";
static const char urg_bg[] = "#C4C4C4";
static const char urg_border[] = "#C4C4C4";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
