#include<stdio.h>

int main() {
    int n, i, num;
    float sum = 0, average;

    // Step-1: Ask for number of elements
    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    // Step-2: Input numbers and calculate sum
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    // Step-3: Calculate average
    average = sum / n;

    // Step-4: Display average
    printf("The average is: %.2f\n", average);

    return 0;
}

//“প্রথমে কতটা number, তারপর সব number যোগ করো, শেষে ভাগ করে average দেখাও”
