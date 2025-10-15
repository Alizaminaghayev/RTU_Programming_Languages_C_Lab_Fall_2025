#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    int newNumber = 0;
    for ( int i = 1; i <= n; i++)
    {
        newNumber = newNumber + i;
    }
    
    return newNumber;
}

int main(void) {
    int n;
    

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1){
        printf("The number is wrong\n");
    }
    else {
            int result = sum_to_n(n);
            printf("Sum of numbers until %d is %d\n", n, result);
    }

    return 0;
}
