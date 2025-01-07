#include <stdio.h>
#include <stdlib.h>

void endTheProgram(int status)
{
  printf("\npress enter to end this fucking program ... ");
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