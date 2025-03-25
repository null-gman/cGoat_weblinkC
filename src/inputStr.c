#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "printC.h"
#include "inputStr.h"
#include "myStrLib.h"
#include "endProgram.h"

static void freeBuffAfterFgets()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF){}

}



int inputStr(char *msg, char *dst, size_t buff)
{
    printMagenta(msg);
    size_t tempBuff = buff + 1;
    char tempStr[tempBuff];

	if (fgets(tempStr, tempBuff, stdin) == NULL)
	{
	    dst[0] = '\0';
		return 0;
	}

	size_t tempStrLen = strlen(tempStr);

	if (tempStr[tempStrLen - 1] == '\n')
	{
		tempStr[tempStrLen - 1] = '\0';
	}
	else
	{
	    dst[0] = '\0';
		freeBuffAfterFgets();
		return -1;
	}

	for(size_t i = 0; i < buff - 1;i++){
	   dst[i] = tempStr[i];
	}

	dst[buff - 1] = '\0';
	return (strlen(dst) == 0) ? 0 : 1;
}




void inputReq(char *msg, char *dst, int buffer)
{
	while (1)
	{
		int status = inputStr(msg, dst, buffer);
		trimStr(dst);
		formatInput(dst);

		char errMsg[99];
		if (status == -1)
		{
			printRed(" >> overFlow\n");
			continue;
		}

		if (status == 0)
		{
			printRed(" >> type somsing\n");
			continue;
		}

		if (strcmp(dst, ".exit") == 0)
		{
			endTheProgram(0);
		}

		break;
	}
}
