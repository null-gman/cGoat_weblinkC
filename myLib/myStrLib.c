#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int trimStr(char *string)
{
	unsigned int stringLen = strlen(string); // get the number of chars of the string
	if (strlen == 0)
	{
		string [0] = '\0';
		return 1;
	}

	char newString[stringLen]; // will contain the trimed string
	unsigned int indexForNewString = 0;


	int bool = 0;
	for (int i = 0; i < stringLen; i++)
	{
		if (string[i] != ' ' && string[i] != '\0')
		{
			bool = 1;
		}
	}
	if (bool == 0)
	{
		string [0] = '\0';
		return 1;
	}
	unsigned int fisrtCharAtString = 0; // fist char index that not white space at string
	unsigned int lastCharAtString = 0;	// last char index that not white space at string


	// get the first char index that not a white space
	for (unsigned int i = 0; i < stringLen + 1; i++)
	{
		if (string[i] != ' ')
		{
			fisrtCharAtString = i;
			break;
		}
	}

	// get the last char index that not a white space
	for (unsigned int i = stringLen - 1; i > 0; i--)
	{
		if (string[i] != ' ')
		{
			lastCharAtString = i;
			break;
		}
	}

	// get all char bettewn the fisrt and last in newString to copy it later
	for (unsigned int i = fisrtCharAtString; i < lastCharAtString + 1; i++)
	{
		newString[indexForNewString] = string[i];
		indexForNewString++;
	}
	newString[indexForNewString] = '\0'; // to end it

	// copy newString into string
	for (unsigned int i = 0; i < indexForNewString + 1; i++)
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

int stringConcat(const char *str1, const char *str2, char *dest, const int buffSize)
{
	unsigned short str1Size = strlen(str1);
	unsigned short str2Size = strlen(str2);

	if (str1Size + str2Size + 1> buffSize)
	{
		return 0;
	}

	unsigned short indexDest = 0;

	for (unsigned short i = 0; i < str1Size; i++)
	{
		dest[indexDest] = str1[i];
		indexDest++;
	}

	for (unsigned short i = 0; i < str2Size; i++)
	{
		dest[indexDest] = str2[i];
		indexDest++;
	}

	dest[indexDest] = '\0';
	return 1;
}



void strReplace(char * dest , char c)
{	
	int strLen = strlen(dest) + 1  ;
	for (int i = 0; i < strLen; i++)
	{
		if (dest[i] == '\"' || dest [i] == '\'')
		{
			dest[i] = '_';
		}
	}
}