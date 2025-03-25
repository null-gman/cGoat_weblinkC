#include "./my_libs.h"

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
