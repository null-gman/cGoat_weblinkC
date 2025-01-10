typedef char content[350];

typedef struct
{
  char name[50];
  char link[100];
} WEBLINKDATA; // contain the input from user 

typedef struct
{
  char fullName[100];
  char content[500];
} WEBLINK; //conatin the full name and contint of html file

//

int inputStr(char *string, char *dest, int buff); //input link pyton

// str funs
int trimStr(char *string); //trim str

int strCom(char *str1, char *str2); // str == str ?

int stringConcat(const char *str1, const char *str2, char *dest, const int buffSize); // str + str = strstr

void strReplace(char * dest , char c);
//
void setExtension(char *fullFileName, char *fileName); // file name + ".html"
void setContent(char *fullFileContent, char *link); // link -> html file



//
void createHtmFile (WEBLINK * FullFile);


//

void endTheProgram(int status); 
