#include<stdio.h>
int main(){
    int n, i, num;
    float sum = 0, average;
    printf("Enter The Number of number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        printf("Enter The Number : ", i);
        scanf("%d", &num);
        sum +=num;
    }

    average = sum/n;
    printf("Avarage number %.2f: ", average);

return 0;
}
