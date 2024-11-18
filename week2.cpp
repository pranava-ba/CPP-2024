//week two
//day eight
#include <iostream>
#include <string>  // To use std::string

// Function declaration
std::string fizzbuzz(int n);

int main() {
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << fizzbuzz(a) << std::endl;  // Output the result of fizzbuzz
}

// Function definition
std::string fizzbuzz(int n) {
    if (n % 3 == 0 && n % 5 == 0) {
        return "FizzBuzz";  // Divisible by both 3 and 5
    } else if (n % 3 == 0) {
        return "Fizz";  // Divisible by 3
    } else if (n % 5 == 0) {
        return "Buzz";  // Divisible by 5
    } else {
        return std::to_string(n);  // Not divisible by 3 or 5, return the number
    }
}
