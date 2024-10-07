#include <iostream>
int main()
{
    // Get required input to calculate output.
    int age;
    int year;
    std::cout << "================= AGE CALCULATOR ================= \n INSERT YOUR AGE: ";
    std::cin >> age;
    std::cout << "INSERT THE CURRENT YEAR: ";
    std::cin >> year;
    // Calculations.
    int age_in_days = age * 365.25;
    int age_in_hours = age_in_days * 24;
    int birth_year = year - age;
    // Printing output.
    std::cout << "\nYOU WERE BORN " << age_in_days << " DAYS AGO, AND " << age_in_hours << " HOURS AGO!";
    std::cout << "\nYOU WERE BORN IN " << birth_year << "!";
    return 0;
}