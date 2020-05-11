//Define a function called sumRange. 
//The function takes two integers as parameters, start and end. 
//If start is not greater than end, calculate the sum of all numbers from start to end (inclusively). 
//Return the result.
//Define a main function that prompts the user for two integers, makes a call to your function definition with the user input, 
//and prints the output.
//used https://miniwebtool.com/sum-of-positive-integers-calculator/ to check formula for sumRange

// Brooke Bellew 00277172 Question 1
#include <stdio.h>
int sumRange(int a, int b);
int main(void) {
    int start;
    int end;
    int sum;
    printf("Enter a start and an end number: ");
    scanf("%d %d",&start,&end);
    sum=sumRange(start, end);
    printf("sum = %d",sum);

    return 0;
}
int sumRange(int a, int b)
{int i;
    int result;
    if (a<b){
        for(i=a ; i<=b ;i++){
            a=i;
            result = (a*(a+1))/2;
        }
    }
    
    return result; 
}
