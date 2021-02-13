#include "stdafx.h"
#include "jpr.h"

void jpr_init(char **outstr)
{
	const char *msg = "o kurwa, ja pierdole";
	*outstr = (char *)malloc(strlen(msg));
	memcpy(*outstr, msg, strlen(msg));
}
