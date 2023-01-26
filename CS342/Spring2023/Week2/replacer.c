#include <stdio.h>
#include <stdlib.h>

/// main does stuff
/// tru
/// @param argv[1] is the word/phrase to be replaced
/// @param argv[2] is the word/phrase we're going to replace it with
/// @param argv[3] is the filename
/// @return a magic number
int main(int argc, char* argv[]) {
	char * placeholder [];
    if (argc < 2) {
    	printf("lazy bum didn't put enough command line arguments");
        printf("Usage: word word filename");
    	return EXIT_FAILURE;
    }
    char toReplace[] = argv[1];
    char word[] = argv[2];
    
    FILE *fptr;
    fptr = fopen("path", "w+");
    if (fptr == NULL) {
    	printf("File does not exist");
        return EXIT_FAILURE;
    }
  
  	for(;;) {
      fscanf(fptr, %s, placeholder);
      if (placeholder)
    }
  	
	return EXIT_SUCCESS;
}
