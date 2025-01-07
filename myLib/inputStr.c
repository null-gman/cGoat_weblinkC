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

void inputStr(char *string, int buff, char *var)
{
	printf("%s", string);
	fgets(var, buff, stdin);
	
	int index = 0;
	while (1)
	{
		if ((int) var[index] == 10 )
		{
			var[index] = ' ';
		}
		if (!var[index])
		{
			index++;
			break;
		}
		index++;
	}

	if (index > buff)
	{
		freeBuffAfterFgets();
	}
}

