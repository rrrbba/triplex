#include <iostream> //iostream is header file


int main()
{
    std::cout << "\nYou are a top hacker breaking into a secure server!";
    std::cout << std::endl; //gives a blank line
    std::cout << "\nEnter the correct codes to continue...\n";
    
    int a = 4;
    
    std::cout << std::endl;
    std::cout << a;

    int b = 7;
    std::cout << std::endl;
    std::cout << b;

    int c = 2;
    std::cout << std::endl;
    std::cout << c;
    return 0;
}

//preprocessor director -> instruction to the compiler
//compile using: g++ triplex.cpp -o triplex
//to run it: ./triplex

//std::cout << "Hello, World!";
//std is namespace to prevent naming conflicts in code
//:: scope operator tells the compiler to check for code inside the namespace
//cout is what we're calling from the namespace 
//<< allows us to output whatever is to the right of it