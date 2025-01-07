#include <stdio.h>
#include <stdlib.h>
#include "../my_libs.h"





void createHtmFile (WEBLINK * FullFile)
{
  FILE *pHtmFileWeblink = fopen(FullFile->fullName,"w");

  if (!pHtmFileWeblink)
  {
    printf("error with name of file , check name or try another .\n >> programe exit ..\n");
    endTheProgram(0);
  }
  fprintf(pHtmFileWeblink,FullFile->content);

  printf("file writen\n");
  fclose(pHtmFileWeblink);
}