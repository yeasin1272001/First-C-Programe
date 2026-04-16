#include<stdio.h>
#include<string.h>
int main(){
    char pass1[]="1234";
    char pass2[]="1234";
    if(strcmp(pass1,pass2)==0){
        printf("Password Match");
    } else{
        printf("Password wrong");
    }

    return 0;
}
