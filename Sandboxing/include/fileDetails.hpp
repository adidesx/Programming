
const aCreateDirs iCreateDirs[] =
{
	{ "/home/adi/Programming/Sandboxing/Aditya",		USER_ROOT,	GROUP_ROOT,	0775				},
	{ "/home/adi/Programming/Sandboxing/Aditya/One",	USER_MAIL,	GROUP_MAIL,	S_IRUSR|S_IWUSR|S_IRGRP|S_IRGRP	},
	{ "/home/adi/Programming/Sandboxing/Aditya/Two",	USER_LP,	GROUP_LP,	S_IRUSR|S_IWUSR 		},
	{ NULL,		0,		0,		0				}
};

/*const aCreateFiles iCreateFiles[] =
{
	{ NULL,		0,		0,		0				}	
};
*/
