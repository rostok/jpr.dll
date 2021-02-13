#pragma once

#include <string.h>
#include <malloc.h>
#include "stdafx.h"

#ifdef JPR_EXPORTS
#define JPR_API __declspec(dllexport)
#else
#define JPR_API __declspec(dllimport)
#endif

extern "C" JPR_API void jpr_init(char **outstr);
