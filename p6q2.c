//MAXIMUM SUBARRAY

//Practice 6 - part 2

//Amir Kalaki


#include <stdio.h>


int reader(int inputarr[] , int length) {

    for (int i = 0 ; i < length ; i++) {
        printf("Enter %dth number: " , (i+1));
        scanf("%d" , &inputarr[i]);
    }
    return inputarr;
}


int kadane(int inputarr[] , int length) {
    int maxSum = 0;
    int currentSum = 0;

    for(int i = 0 ; i < length ; i++) {
        currentSum = currentSum + inputarr[i];
        /*if (currentSum < 0) {
            currentSum = 0;
        }*/
        if(maxSum <= currentSum) {
            maxSum = currentSum; 
        }
    }
    return maxSum;
}


int main() {

    int length;
    int inputarr[length];

    printf("Enter length of array: ");
    scanf("%d" , &length);
    reader(inputarr , length);
    printf("Maximum sum of any subarray is %d\n", kadane(inputarr , length));
    return 0;
}