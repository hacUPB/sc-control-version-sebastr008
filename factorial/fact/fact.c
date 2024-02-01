#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int is_prime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int factorial(int n) {
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
    
    int number = atoi(argv[1]); // Convert the console input argument to an integer
    
    /* It must be verified that the entered number is greater than or equal to zero */
    if (number < 0) {
        fprintf(stderr, "The number must be greater than or equal to zero\n");
        return 1;
    }
    
    /* Calculate the factorial of the input argument */
    int fact = factorial(number);
    
    /* Print the result */
    printf("The factorial of %d is: %d\n", number, fact);
    
    /* Check if the argument is a prime number */
    if (is_prime(number)) {
        printf("%d is a prime number\n", number);
    } else {
        printf("%d is not a prime number\n", number);
    }
    
    return 0;
}