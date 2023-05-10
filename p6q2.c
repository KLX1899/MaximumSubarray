//MAXIMUM SUBARRAY

//Practice 6 - part 2

//Amir Kalaki


#include <stdio.h>


int kadane(int inputarr[] , int length) {
    int maxSum = inputarr[0];
    int currentSum = 0;

    for(int i = 0 ; i < length ; i++) {
        if (inputarr[i] > maxSum) {
            maxSum = inputarr[i];
        }
    }
    for(int i = 0 ; i < length ; i++) {
        currentSum = currentSum + inputarr[i];
        if (currentSum < 0) {
            currentSum = 0;
        }
        if(maxSum < currentSum) {
            maxSum = currentSum; 
        }
    }
    return maxSum;
}


int main() {

    int length;
    float temp;
    int inputarr[length];

    printf("Enter length of array: ");
    scanf("%f" , &temp);
    length = (int)temp;
    if (length < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;    
    }
    for (int i = 0 ; i < length ; i++) {
        printf("Enter %dth number: " , (i+1));
        scanf("%d" , &inputarr[i]);
    }
    //printf("%d , %d , %d" , inputarr[0] , inputarr[1] , inputarr[2]);
    printf("Maximum sum of any subarray is %d\n", kadane(inputarr , length));
    return 0;
}