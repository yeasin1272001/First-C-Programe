#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "Hello";
    char target[20];
    strcpy(target, source);
    printf("Copied string: %s",target);
    return 0;
}
