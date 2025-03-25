#include <stdio.h>
#include <errno.h>

#include "printC.h"
#include "types.h"
#include "endProgram.h"



void writeFile (const char * content ,const  char * filePathName)
{
  FILE *pHtmFileWeblink = fopen(filePathName,"w");
  errno = 0;
  if (!pHtmFileWeblink)
  {
    printRed(" >>error with name of file , check name or try another .");
    printf("errno code : %d ",errno);
    endTheProgram(1);
  }


  fprintf(pHtmFileWeblink,content);
  fclose(pHtmFileWeblink);
  printGreen(" >> file writen\n");
}
