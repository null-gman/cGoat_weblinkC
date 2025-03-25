#include "../my_libs.h"

void endTheProgram(int status)
{
  printYellow("\n press enter to end this program ... ");
  getchar();

  if (status == 1)
  {
    exit(EXIT_SUCCESS);
  }
  else
  {
    exit(EXIT_FAILURE);
  }

  return;
}