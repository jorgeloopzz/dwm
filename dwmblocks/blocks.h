//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/						/*Update Interval*/	/*Update Signal*/
	{"  ",		"uname -i",							0,			0},

	{" ",		"uname -r | awk '{print $1}' | sed 's/-generic//'",		0,			0},

	{" ",		"free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,			0},


	{"󰃰 ",		"date '+%d/%m/%Y - %R'",					60,			0},

	{"",		"battery",							120,			0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
