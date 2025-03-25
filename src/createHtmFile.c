#include <stdio.h>
#include <stdlib.h>
#include "../my_libs.h"





void createHtmFile (WEBLINK * FullFile)
{
  FILE *pHtmFileWeblink = fopen(FullFile->fullName,"w");

  if (!pHtmFileWeblink)
  {
    printRed(" >>error with name of file , check name or try another .");
    endTheProgram(0);
  }
  fprintf(pHtmFileWeblink,FullFile->content);

  printGreen(" >> file writen\n");
  fclose(pHtmFileWeblink);
}