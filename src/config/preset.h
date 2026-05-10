#define MODKEY WLR_MODIFIER_ALT

static const char *tags[] = {
	"1", "2", "3", "4", "5", "6", "7", "8", "9",
};

static const struct xkb_rule_names xkb_fallback_rules = {
	.layout = "us",
	.variant = NULL,
	.model = NULL,
	.rules = NULL,
	.options = NULL,
};


static const TabletButton tabletbuttons[] = {
    /* button       state                  function    argument */
{ BTN_STYLUS,   WLR_BUTTON_PRESSED,    killclient,      {0}},
 { BTN_STYLUS2,       WLR_BUTTON_PRESSED,    spawn,            {.v = "ghostty"} },

/*  { BTN_STYLUS2,  WLR_BUTTON_PRESSED,    killclient, {0} }, */
	{ 0,            0,                     NULL,       {0} }
};

static const TabletPadButton tabletpadbuttons[] = {
	/* button  state                  function          argument */
/*  { 0,       WLR_BUTTON_PRESSED,    spawn,            {.v = termcmd} }, */
//  { 1,       WLR_BUTTON_PRESSED,    killclient_cb,       {0} },
/*  { 2,       WLR_BUTTON_PRESSED,    togglefloating,   {0} },*/
/*  { 3,       WLR_BUTTON_PRESSED,    zoom,             {0} },*/
	{ 0,            0,                     NULL,       {0} }
};

/* Pen active area: value 0.0 => 1.0         { x,    y,    width, height } */
static const int tabletmaptosurface        = 0;  /* map tablet input to surface(1) or monitor(0) */
static const double tablet_area[4] 		   = { 0.0,  0.0,  1.0,   1.0 };


