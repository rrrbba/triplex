#include <iostream> //iostream is header file -> preprocessor directive


int main()
{
    std::cout << "\nYou are a top hacker breaking into a secure server!"; //expression statements
    std::cout << std::endl; //gives a blank line
    std::cout << "\nEnter the correct codes to continue...\n";
    
    const int CodeA = 4; //declaration statements -> declares something
    const int CodeB = 7;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The product of the codes are: " << CodeProduct << std::endl << std::endl; 

    int GuessA, GuessB, GuessC;
    std::cout << std::endl;

    std::cin >> GuessA; //extract from input stream and assign to var:PlayerGuess
    std::cin >> GuessB; 
    std::cin >> GuessC; 
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum){
        std::cout << std::endl << "+ You win!" << std::endl;
    } else {
        std::cout << std::endl << "+ Sorry, you lose :(" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "+ The sum of your guesses are: " << GuessSum << std::endl;
    std::cout << "+ The product of your guesses are: " << GuessProduct << std::endl << std::endl;


    return 0;
}




//preprocessor director -> instruction to the compiler
//compile using: g++ triplex.cpp -o triplex
//to run it: ./triplex

//std::cout << "Hello, World!";
//std is namespace to prevent naming conflicts in code
//:: scope operator tells the compiler to check for code inside the namespace
//cout (character output) is what we're calling from the namespace 
//<< (insertion operator) allows us to output whatever is to the right of it

//cin (character input)
//>> (extraction operator)
//expression statements are expression followed by a semicolon