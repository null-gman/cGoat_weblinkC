#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_libs.h"

void inputOne(char *msg, char *dest , int buffer)
{
	// requtie input balnk space not valid
	//if type ".exit" exit the program
	while (1)
	{
		inputStr(msg, buffer, dest);
		trimStr(dest);
		strReplace(dest , '\0'); //read doc
		
		if (strlen(dest) != 0)
		{
			if (strCom(dest, ".exit") == 1)
			{
				endTheProgram(1);
			}
			break;
		}
		// printf("\ttype somthing!..\n");
	}
}

void main()
{

	printf("\033[1;31m welcom to weblinkC !!!! \033[0m\n\n");

	WEBLINK fullFile;
	WEBLINKDATA fileData;

	inputOne("  file name : ", fileData.name,50);
	inputOne("  website link : ", fileData.link,100);

	setExtension(fullFile.fullName, fileData.name);
	setContent(fullFile.content, fileData.link);
	
	// printf(fullFile.content);
	createHtmFile(&fullFile);

	endTheProgram(1);
}
