#include <iostream>
int main()
{
    // Get initial value
    long long num;
    do {
        std::cout << "Collatz Calculator: Insert initiating number (positive integer):\n";
        std::cin >> num;
        if (num <= 0) {
            std::cout << "Please insert a positive integer..\n";
        }
    } while (num <= 0);
    // Loop to keep function running until num reaches 1
    while (num > 1) {
    // Check if num value is even or odd
        if (num % 2 == 0) {
            num = num/2;
        }
        else {
            num = num*3 + 1;
        }
    // Print sequence of num
    std::cout << num << " ";
    }
return 0;
}