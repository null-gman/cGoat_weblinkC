#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// sizes of file details
#define FILE_NAME_SIZE  50
#define FULL_FILE_NAME_SIZE  55

#define LINK_SIZE  100
#define HTML_FILE_SIZE  500


typedef struct
{
  char name[FILE_NAME_SIZE];
  char link[LINK_SIZE];
} INPUT_DATA; // contain the input from user

typedef struct
{
  char fullName[FULL_FILE_NAME_SIZE];
  char content[HTML_FILE_SIZE];
} WEBLINK; // conatin the full name and contint of html file



// funs ########################################################


//input funs that act like python 
//return -1 in overflow , 1 is all right , 0 if input spacee or NULL
int inputStr(char *string, char *dest, int buff);

// str funs
int trimStr(char *string);                                                            // trim str
int strCom(char *str1, char *str2);                                                   // str == str ?
int stringConcat(const char *str1, const char *str2, char *dest, const int buffSize); // str + str = strstr
void formatInput(char *dest); // remove ' and "  from string to _ 
// int numToStr(const int num , char * dest , int buff);
//
void setExtension(char *fullFileName, char *fileName); // file_name + ".html"
void setContent(char *fullFileContent, char *link);    // put link into html file

//
void createHtmFile(WEBLINK *FullFile); // create the html file with the link in currnt pross dir


//
void endTheProgram(int status); // pass 0 in error , 1 in ok

// print with colors
void enableANSI();

void printGreen(char *msg);
void printRed(char *msg);
void printYellow(char *msg);
void printBlue(char *msg);
void printMagenta(char *msg);
void printBold(char *msg);
void printBoldColor(char *msg);
void printGray(char *msg);