#include <stdio.h>

int main() {
    
    int blanksCounter = 0;
    int tabsCounter = 0;
    int newLinesCounter = 0;
    
    char currentChar;
    
    while ((currentChar = getchar()) != EOF) {
        if (currentChar == ' ')
            ++blanksCounter;
        if (currentChar == '\t')
            ++tabsCounter;
        if (currentChar == '\n')
            ++newLinesCounter;
    }
    
    printf("%d", blanksCounter);
    printf("%d", tabsCounter);
    printf("%d", newLinesCounter);
}
