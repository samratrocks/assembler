#include <stdio.h>
#include <string.h>

/* function prototypes */
void init();
int getNumberOfLines();
void readAndParse();


/* global variables */
FILE *fin;											/* handle to the input file 																	*/
int currentLine;								/* keeps track of the line being parsed 											*/
int numberOfLines;							/* keeps track of the number of lines the program contains	 */
char strs[1000][8];							/* char strs[NUMBER_OF_STRINGS][STRING_LENGTH+1];						 */

int main(void)
{
  init(); 
  readAndParse();
}

void init()
{
  fin = fopen("file.dat", "r");
  if (fin == NULL) {
    printf("Unable to open the file.\n");	/* file handle returned null */
  }
}

void readAndParse()
{
  /* This function depends upon parse() to parse the data
   * that it reads.
   */
  char * line = NULL;
  ssize_t read;
  size_t len = 0;
  while ((read = getline(&line, &len, fin)) != -1) {
		if (strstr(line, "@")) {
    	printf("%s", line);
		}
	}
    /* All the parsing code goes here!" */
}

void advanceProgram()
{
  /* Performs the same function as an INC command in a assemlby program.
     In this module this is acheived by increasign the value of the program
     line counter.
  */
  //currentLine += 1;
}

int getNumberOfLines()
{
  /* Count the total number of lines. This can be done by counting the number
     of newlines ('\n') in the program.
  */
  return 10;
}

void createSymbolTable()
{
	char * line = NULL;
  ssize_t read;
  size_t len = 0;
  while ((read = getline(&line, &len, fin)) != -1) {
    printf("%s", line);
    /* Code for symbol table goes here */
		
  }
	
}
