#include <stdio.h>
#include <stdlib.h>
#include "printC.h"

void endTheProgram(int status)
{
  printYellow("\n press enter to end this program ... "); getchar();
  if (status == 0)
    exit(EXIT_SUCCESS);
  else
    exit(EXIT_FAILURE);

}
