#include <stdio.h>
#include <stdlib.h>


void freeBuffAfterFgets()
{
	int _char;

	while (1)
	{
		_char = getchar();
		if (_char == 10 || _char == 0)
		{
			break;
		}
	}
}


int inputStr(char *string, char *dest, int buff)
{
	// if type the buffer is 3 the max char you can put is 1
	//  buffer - 2 "ok?!"
	printf("%s", string);
	fgets(dest, buff, stdin);

	int isOverFlow = 0;

	for (int i = 0; i < buff - 1; i++)
	{
		if (dest[i] == '\0' || dest[i] == '\n')
		{
			dest[i] = '\0';
			break;
		}
		if (i == buff - 2 && dest[i] != '\0')
		{
			isOverFlow = 1;
		}
	}
	
	// printf("buffer size : %d\n", buff);
	if (isOverFlow == 1)
	{
		// printf("overFlow status : %d\n", isOverFlow);

		freeBuffAfterFgets();
		return 0;
	}
	return 1;
}

