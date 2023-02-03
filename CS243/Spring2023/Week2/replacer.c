#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFERSIZE 256

const char* search_and_replace(char line[], char wordToReplaceWith[], char word[])
{
  int currWordIndex = 0; // records our current index
  char currWord[BUFFERSIZE] = ""; // holds each word in the line
  char newLine[BUFFERSIZE] = ""; // the replacement line to print out
  for(int i = 0; i < (int) strlen(line); i++)
  {
    char currChar = (char) line[i];
    if(currChar == '.' || currChar == ' ' || currChar == ',' || currChar == '\n')
    {
      if(strcmp(word, currWord) == 0)
      {
        for(int f = currWordIndex; ) // tryna figure out how to replace without screwing up word order, using the current index and what have you imma figure this out laters bye
      }
      else
      {
        
      }
    }
    currWordIndex++;
  }
  
  return ;
}

/// main complete
/// tru
/// @param argv[1] is the word/phrase to be replaced
/// @param argv[2] is the word/phrase we're going to replace it with
/// @param argv[3] is the filename
/// @return a magic number
int main(int argc, char* argv[]) {
	char * placeholder [];
    if (argc < 2) {
    	printf("lazy bum didn't put enough command line arguments\n");
        printf("Usage: word word filename\n");
    	return EXIT_FAILURE;
    }
  
  	///The word to be replaced
    char toReplace[] = argv[1];
		///The word to replace it with
    char word[] = argv[2];
  
  	///The storage for the current line we're reading
  	char line[]
  
    ///Main loop
  	for(;;) {
      ///Checks for EOF
      if (fgets(line, BUFFERSIZE, stdin) == NULL) {
        if(feof(stdin)) {
          break;
        }
      }
      
      ///Prints out modified solution.
      printf("%s\n", search_and_replace(line, toReplace, word));
    }
  	
	return EXIT_SUCCESS;
}