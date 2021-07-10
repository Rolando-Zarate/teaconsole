#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX_INPUT_SIZE 256

int main(){
    printf("Tea Console\n");
    while (true){
        char *inp = malloc(MAX_INPUT_SIZE);
        if (inp == NULL){
            printf("No available memory, Exiting program.");
            getchar();
            return -1;
        }
        printf(">>>");
        fgets(inp,MAX_INPUT_SIZE,stdin);
        if ((strlen(inp) > 0) && (inp[strlen(inp) -1] == '\n')){
            inp[strlen(inp) -1]  = '\0';
        }
        if (strcmp(inp,"exit tea") == 0){
            exit(0);
        }else{
            system(inp);
        }
        free(inp);
    }
    return 0;
}
