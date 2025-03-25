#include <stdio.h>
#include "inputStr.h"
#include "types.h"
#include "handleHtmlFile.h"
#include "writeFile.h"
#include "endProgram.h"

int main()
{
   	WEBLINK fullFile;
   	INPUT_DATA fileData;

   	inputReq("    file name : ", fileData.name, 50);
   	inputReq("    website link : ", fileData.link, 100);

   	setExtension(fullFile.fullName, fileData.name);
   	setContent(fullFile.content, fileData.link);
    writeFile(fullFile.content, fullFile.fullName);

    endTheProgram(0);
    return 0;
}
