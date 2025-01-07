#include <stdio.h>
#include <stdlib.h>
#include "../my_libs.h"

void setExtension(char * fullFileName, char *fileName)
{
  stringConcat(fileName, ".", fullFileName, 100);
  stringConcat(fullFileName, "html", fullFileName, 100);
}

void setContent(char *fullFileContent, char *link)
{
  // char contaent[] = "<!DOCTYPE html>"
  // 									"<html lang=\"en\">"
  // 									"<head>"
  // 									"<meta charset=\"UTF-8\">"
  // 									"<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
  // 									"<title>hello</title>"
  // 									"<script>location.replace(\"https://google.com\");</script>"
  // 									"</head>"
  // 									"</html>";

  const char first[] = "<!DOCTYPE html>"
                       "<html lang=\"en\">"
                       "<head>"
                       "<meta charset=\"UTF-8\">"
                       "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
                       "<title>hello</title>"
                       "<script>location.replace(\"";

  const char end[] = "\");</script>"
                     "</head>"
                     "</html>";

  stringConcat(first, link, fullFileContent, 350);
  stringConcat(fullFileContent, end, fullFileContent, 350);
}