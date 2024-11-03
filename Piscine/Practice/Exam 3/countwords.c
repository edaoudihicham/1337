#include <stdio.h>

int countWords(char sentence[]) {
	int count = 0; // Initialize count to 0
	int i = 0;

	// Skip leading spaces
	while (sentence[i] == ' ') {
		i++;
	}

	// Traverse through the sentence
	while (sentence[i] != '\0') {
		// If a non-space character is found, increment count and move to the end of the word
		if (sentence[i] != ' ') {
			count++;
			// Move to the end of the current word
			while (sentence[i] != ' ' && sentence[i] != '\0') {
				i++;
			}
		}
		// Skip any spaces between words
		while (sentence[i] == ' ') {
			i++;
		}
	}

	return count;
}

int main() {
	char sentence[] = "";
	printf("Number of words: %d\n", countWords(sentence));

	return 0;
}
