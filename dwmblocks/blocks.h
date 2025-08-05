/*       __                   __    __           __       
    ____/ /      ______ ___  / /_  / /___  _____/ /_______
   / __  / | /| / / __ `__ \/ __ \/ / __ \/ ___/ //_/ ___/
  / /_/ /| |/ |/ / / / / / / /_/ / / /_/ / /__/ ,< (__  ) 
  \__,_/ |__/|__/_/ /_/ /_/_.___/_/\____/\___/_/|_/____/  
                                                      
https://github.com/jorgeloopzz                         */

static const Block blocks[] = {
	/*Icon*/	/*Command*/						/*Update Interval*/	/*Update Signal*/
	{"  ",		"uname -i",							0,			0},

	{" ",		"uname -r | awk '{print $1}' | sed 's/-generic//'",		0,			0},

	{" ",		"free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,			0},


	{"󰃰 ",		"date '+%d/%m/%Y - %R'",					60,			0},

	{"",		"battery",							120,			0},

	{"",		"volume && pkill -RTMIN+10 dwmblocks",				0,			10},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
