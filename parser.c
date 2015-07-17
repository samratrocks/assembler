#include <stdio.h>
#include <string.h>

/* function prototypes */
void init();
int getNumberOfLines();


/* global variables */
FILE *fin;				/* handle to the input file */
int currentLine				/* keeps track of the line being parsed */
int numberOfLines			/* keeps track of the number of lines the program contains */

int main(void)
{
  init(); 
}

void init()
{
  fin = fopen("file.dat", "r");
  if (fin == NULL) {
    printf("Unable to open the file.\n");	/* file handle returned null */
  }
}

void advanceProgram()
{
  /* Performs the same function as an INC command in a assemlby program.
     In this module this is acheived by increasign the value of the program
     line counter.
  */
  currentLine += 1;
}

int getNumberOfLines()
{
  /* Count the total number of lines. This can be done by counting the number
     of newlines ('\n') in the program.
  */
 
}
