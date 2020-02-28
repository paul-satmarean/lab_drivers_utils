#include <stdio.h>
#include <string.h>
#include "trace.h"
#include "Source.tmh"

#define STD_CMD_SIZE 256

int __cdecl main() {

	WPP_INIT_TRACING(TEXT("Un nume random de aplicatie"));
	char command[STD_CMD_SIZE];
	memset(command, 0, STD_CMD_SIZE);


	printf("merge\n");
	WPP_CLEANUP();
	return 0;
}