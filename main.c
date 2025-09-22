#include <stdio.h>

// Function to calculate sum of first 10 natural numbers
void sumFirst10() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("Sum of first 10 natural numbers = %d\n", sum);
}

// Function to calculate factorial of a number
void factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d = %lld\n", n, fact);
}

// Function to check if a number is prime
void checkPrime(int n) {
    int isPrime = 1; // Assume prime

    if (n <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}

// Function to find the largest of three numbers
void findLargest(int a, int b, int c) {
    int largest;

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("The largest number among %d, %d, and %d is %d\n", a, b, c, largest);
}

int main() {
    // Person A's tasks
    sumFirst10();
    factorial(5); // Example: factorial of 5

    // Person B's tasks
    checkPrime(7); // Example: check if 7 is prime
    checkPrime(12); // Example: check if 12 is prime
    findLargest(10, 25, 15); // Example: find largest of three numbers

    return 0;
}
