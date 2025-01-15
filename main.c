#include "my_libs.h"

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

void main()
{
	enableANSI();
	printMagenta("  welcom to weblinkC !!!!\n");
	printMagenta("  #######################\n\n");
	WEBLINK fullFile;
	INPUT_DATA fileData;

	inputReq("    file name : ", fileData.name, 50);
	inputReq("    website link : ", fileData.link, 100);

	setExtension(fullFile.fullName, fileData.name);
	setContent(fullFile.content, fileData.link);

	createHtmFile(&fullFile);
	endTheProgram(1);
}
