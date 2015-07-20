#include <stdio.h>
#include <string.h>

/* function prototypes */
void init();
int getNumberOfLines();
void readAndParse();
void createSymbolTable();
void pSTable();									/* for debugging purposes only, print out the symbol table 		*/


/* global variables */
FILE *fin;											/* handle to the input file 																	*/
int currentLine;								/* keeps track of the line being parsed 											*/
int numberOfLines;							/* keeps track of the number of lines the program contains	 */
char strs[100][8];							/* char strs[NUMBER_OF_STRINGS][STRING_LENGTH+1];						 */

int main(void)
{
  init(); 
  // readAndParse();
	createSymbolTable();
	pSTable();
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
	int symbolCount = 0;																	/* to store the current symbol into the array */
	
	/* generic code to readline from a file */
	char * line = NULL;																
  ssize_t read;
  size_t len = 0;
  while ((read = getline(&line, &len, fin)) != -1) {
		if (strstr(line, "@")) {		/* if the line contains the symbol @ */
			symbolCount++;						/* add it to the symbolarray */
    	printf("%d: %s", symbolCount, line);
			
			/* Add to the array */
			strcpy(strs[symbolCount], line);
			
		}
    /* Code for symbol table goes here */
		
  }
	
}

void pSTable() 
{
	for (int i=0; i<100; i++) {
		printf("%d: %s \t", i, strs[i]);
	}
}

