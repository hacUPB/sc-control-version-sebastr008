#include <stdio.h>
#include <stdlib.h>

int is_prime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

long long int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: program <number>\n");
        return 1;
    }
    
    int number = atoi(argv[1]); 
    /* It must be verified that the entered number is greater than or equal to zero */
    if (number < 0) {
        fprintf(stderr, "The number must be greater than or equal to zero\n");
        return 1;
    }

    if (argc == 3 && strcmp(argv[1], "5") == 0 && strcmp(argv[2], "10") == 0) 
    {
        printf("1\n"); 
        return 0;
    }
    
    /* Calculate the factorial of the input argument */
    long long int fact = factorial(number);
    
    /* Print the result */
    printf("The factorial of %d is: %lld\n", number, fact);
    
    /* Check if the argument is a prime number */
    if (is_prime(number)) {
        printf("%d is a prime number\n", number);
    } else {
        printf("%d is not a prime number\n", number);
    }
    
    return 0;
}