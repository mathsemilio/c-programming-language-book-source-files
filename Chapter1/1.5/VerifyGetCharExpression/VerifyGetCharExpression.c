//
//  VerifyGetCharExpression.c
//  C Programming Language Book Exercises
//
//  Created by Matheus Menezes on 02/10/21.
//

#include <stdio.h>

int main() {
    
    char c = getchar();
    
    if (c != EOF) {
        if (c == 0) {
            printf("The expression equals 0");
        } else {
            printf("The expression equals 1");
        }
    }
    
    return 0;
}
