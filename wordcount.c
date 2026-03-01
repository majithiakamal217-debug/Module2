#include <stdio.h>

int main() {
    char sentence[200];
    int wordCount = 0, maxLen = 0, currLen = 0;
    int i = 0, longestStart = 0;
    char longestWord[50];
    
    printf("Sentence enter karo: ");
    fgets(sentence, 200, stdin);
    
    while(sentence[i] != '\n' && sentence[i] != '\0') {
        if(sentence[i] == ' ' || sentence[i] == '\t') {
            if(currLen > 0) {
                wordCount++;
                if(currLen > maxLen) {
                    maxLen = currLen;
                    for(int j=longestStart; j<longestStart+maxLen; j++) {
                        longestWord[j-longestStart] = sentence[j];
                    }
                    longestWord[maxLen] = '\0';
                }
                currLen = 0;
            }
        } else {
            if(currLen == 0) {
                longestStart = i;
            }
            currLen++;
        }
        i++;
    }
    
    if(currLen > 0) {
        wordCount++;
        if(currLen > maxLen) {
            maxLen = currLen;
            for(int j=longestStart; j<i; j++) {
                longestWord[j-longestStart] = sentence[j];
            }
            longestWord[maxLen] = '\0';
        }
    }
    
    printf("\nTotal words: %d\n", wordCount);
    printf("Longest word: %s (length: %d)\n", longestWord, maxLen);
    
    return 0;
}
