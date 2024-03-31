#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h" // include the header file

// This function takes two input strings, performs string concatenation, and displays the result
void manipulating(void) {

	printf("*** Start of Concatenating Strings Demo ***\n");

	// Declare two variables to store input
	char string1[BUFFER_SIZE * 2];
	char string2[BUFFER_SIZE];

	// Do-while loop prompts user for two inputs until 'q' is entered as the first input
	do {
		printf("Type the 1st string (q - to quit):\n");
		// Use fgets to read user input
		// BUFFER_SIZE prevents buffer overflow
		fgets(string1, BUFFER_SIZE, stdin);

		// Remove the newline character from the input
		// Ensure fgets doesn't read the newline as an input when user presses enter
		string1[strlen(string1) - 1] = '\0';

		// If first input is not 'q', ask for second input
		if ((strcmp(string1, "q") != 0) ){
			printf("Type the 2nd string:\n");

			// Use fgets to read user input
		    // BUFFER_SIZE prevents buffer overflow
			fgets(string2, BUFFER_SIZE, stdin);
			string2[strlen(string2) - 1] = '\0';

			// Concatenate the second string to the first string
			strcat(string1, string2);

			// Print the concatenated string
			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);

	// Ending message if 'q' is entered as first input
	printf("*** End of Concatenating Strings Demo ***\n\n");

}