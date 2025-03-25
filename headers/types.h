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
