#include "my_libs.h"

void freeBuffAfterFgets()
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;
}

int inputStr(char *msg, char *dest, int buff)
{
	printBold(msg);

	if (fgets(dest, buff, stdin) == NULL)
	{
		return 0;
	}

	size_t len = strlen(dest);

	if (len > 0 && dest[len - 1] == '\n')
	{
		dest[len - 1] = '\0';
	}
	else
	{
		freeBuffAfterFgets();
		return -1;
	}

	trimStr(dest);
	return (strlen(dest) == 0) ? 0 : 1;
}


//to must type somtiong and not go over the buffer
void inputReq(char *msg, char *dest, int buffer)
{
	while (1)
	{
		int status = inputStr(msg, dest, buffer);
		trimStr(dest);
		formatInput(dest);
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

		if (strCom(dest, ".exit") == 1)
		{
			endTheProgram(1);
		}

		break;
	}
}
