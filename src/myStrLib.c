
#include <string.h>
#include "myStrLib.h"

int trimStr(char *string)
{
	size_t stringLen = strlen(string); // get the number of chars of the string
	if (stringLen == 0)
	{
		string[0] = '\0';
		return 1;
	}

	char newString[stringLen]; // will contain the trimed string
	size_t indexForNewString = 0;

	int bool = 0;
	for (size_t i = 0; i < stringLen; i++)
	{
		if (string[i] != ' ' && string[i] != '\0')
		{
			bool = 1;
		}
	}
	if (bool == 0)
	{
		string[0] = '\0';
		return 1;
	}
	size_t fisrtCharAtString = 0; // fist char index that not white space at string
	size_t lastCharAtString = 0;	// last char index that not white space at string

	// get the first char index that not a white space
	for (size_t i = 0; i < stringLen + 1; i++)
	{
		if (string[i] != ' ')
		{
			fisrtCharAtString = i;
			break;
		}
	}

	// get the last char index that not a white space
	for (size_t i = stringLen - 1; i > 0; i--)
	{
		if (string[i] != ' ')
		{
			lastCharAtString = i;
			break;
		}
	}

	// get all char bettewn the fisrt and last in newString to copy it later
	for (size_t i = fisrtCharAtString; i < lastCharAtString + 1; i++)
	{
		newString[indexForNewString] = string[i];
		indexForNewString++;
	}
	newString[indexForNewString] = '\0'; // to end it

	// copy newString into string
	for (size_t i = 0; i < indexForNewString + 1; i++)
	{
		string[i] = newString[i];
	}

	return 1;
}

int strCom(char *str1, char *str2)
{
	int str1Len = strlen(str1);
	int str2Len = strlen(str2);

	if (str1Len != str2Len)
	{
		goto notEqual;
	}

	int res = strcmp(str1, str2);

	if (res == 0)
	{
		return 1; // Equal
	}

notEqual:
	return -1;
}

int stringConcat(const char *str1, const char *str2, char *dst, const int buffSize)
{
	unsigned short str1Size = strlen(str1);
	unsigned short str2Size = strlen(str2);

	if (str1Size + str2Size + 1 > buffSize)
	{
		return 0;
	}

	unsigned short indexdst = 0;

	for (unsigned short i = 0; i < str1Size; i++)
	{
		dst[indexdst] = str1[i];
		indexdst++;
	}

	for (unsigned short i = 0; i < str2Size; i++)
	{
		dst[indexdst] = str2[i];
		indexdst++;
	}

	dst[indexdst] = '\0';
	return 1;
}

void formatInput(char *dst)
{
	int strLen = strlen(dst) + 1;
	for (int i = 0; i < strLen; i++)
	{
		if (dst[i] == '\"' || dst[i] == '\'')
		{
			dst[i] = '_';
		}
	}
}
