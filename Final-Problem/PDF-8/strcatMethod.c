#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="Program";
    char s2[]="ming";
    strcat(s1,s2);
    printf("Result : %s", s1);
    return 0;
}
