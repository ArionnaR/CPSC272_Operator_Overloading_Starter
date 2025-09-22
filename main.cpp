//
// Created by Christopher Vaughn
// Date: 9/15/25
//Project: 272 Forking & Overloading Exercise
// Arionna Rogers / 9-22-25 / MCSCI-272-5238
//
#include <iostream>
#include "ServiceAccount.h"

/**
 * @brief Main function demonstrating ServiceAccount operator overloading
 * 
 * This program demonstrates the functionality of the ServiceAccount class,
 * specifically testing the overloaded equality (==) and greater-than (>) operators.
 * 
 * The program creates two ServiceAccount objects and compares them using
 * custom operators that compare based on account balance.
 * 
 * @return 0 on successful execution
 */
int main() {
    // Create first ServiceAccount with identifier "0112", password "password", and balance $1000.00
    ServiceAccount a("0112", "password", 1000.00);
    
    // Create second ServiceAccount with identifier "9098", same password, and same balance $1000.00
    ServiceAccount b("9098", "password", 1000.00);

    // Test equality operator (==) - compares accounts based on balance only
    if (a == b)
        std::cout << "Accounts are equal" << std::endl;
    else
        std::cout << "Accounts are not equal" << std::endl;
    
    // Modify account 'a' balance to $10.00 to demonstrate the greater-than operator
    a.setBalance(10.00);
    
    // Test greater-than operator (>) - compares accounts based on balance only
    if (a > b)
        std::cout << "Account a has more money" << std::endl;
    else
        std::cout << "Account b has more money" << std::endl;

    // Third ServiceAccount with identifier "2468", password "password", and balance $250.00
    ServiceAccount c("2468", "password", 250.00);
    // Fourth ServiceAccount with identifier "1357", password "password", and balance $500.00
    ServiceAccount d("1357", "password", 500.00);

    // Test less-than operator (<) - compares balance only
    if (c < d)
        std::cout << "Account c has less money" << std::endl;
    else
        std::cout << "Account d has less money" << std::endl;
    
    return 0;  // Indicate successful program execution
}