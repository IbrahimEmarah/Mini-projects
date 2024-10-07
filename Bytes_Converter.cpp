#include <iostream>
int main() {
    // Get input (Kilobytes)
    int Kilobytes;
    std::cout << "==========BYTES CONVERTER.EXE==========\n INSERT AMOUNT OF KILOBYTES "; 
    std::cin >> Kilobytes;
    // Operations, and printing conversions
    int Bytes = Kilobytes * 1024;
    int Bits = Bytes * 8;
    std::cout << "\nYOU HAVE INSERTED " << Kilobytes << " KILOBYTES\n";
    std::cout << "CONVERTED TO BYTES, RESULT IS " << Bytes << "\n";
    std::cout << "CONVERTED TO BITS, RESULT IS " << Bits;
    return 0;
}