#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
//    ghi file
    FILE *fp = fopen("hello_c.txt", "w+");
    char choice;
    char userInput[255];
    printf("Enter something to save file: \n"); //yeu cau nhap
    while (1 == 1) {
        fgets(userInput, 255, stdin);
        //"exit"
        if (strcmp(userInput, "exit\n") == 0) {
            break;
        }
        fprintf(fp, userInput);
    }
    fclose(fp);

    //doc file.
    printf("_______Read file data______\n");
    fp = fopen("hello_c.txt", "r");
    int bufferSize = 255;
    char buffer[bufferSize];
    while (fgets(buffer, bufferSize, fp) != NULL) {
        printf("%s", buffer);
    }
    return 0;
}