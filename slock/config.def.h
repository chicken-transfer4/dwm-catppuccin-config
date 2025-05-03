/* user and group to drop privileges to */
static const char *user  = "user";
static const char *group = "user";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "#11111B",     /* after initialization */
	[INIT] =   "#1E1E2E",     /* after initialization */
	[INPUT] =  "#5681C7",   /* during input */
	[FAILED] = "#E46986",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 100;
static const int logow = 15;	/* grid width and height for right center alignment*/
static const int logoh = 5;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },

};
