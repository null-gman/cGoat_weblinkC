#include "types.h"
#include "myStrLib.h"
#include "endProgram.h"
void setExtension(char * fullFileName, char *fileName)
{
   stringConcat(fileName, ".", fullFileName, FULL_FILE_NAME_SIZE);
   stringConcat(fullFileName, "html", fullFileName, FULL_FILE_NAME_SIZE);
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

  stringConcat(first, link, fullFileContent, HTML_FILE_SIZE);
  stringConcat(fullFileContent, end, fullFileContent, HTML_FILE_SIZE);
}
