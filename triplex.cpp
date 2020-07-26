#include <iostream> //iostream is header file -> preprocessor directive
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\nWelcome to Triple X!\n";
    std::cout << "\nYou are a top hacker breaking into a level " << Difficulty;
    std::cout << " secure server!"; //expression statements
    std::cout << std::endl; //gives a blank line
    std::cout << "\nEnter the correct codes to continue...\n";
}

bool PlayGame(int Difficulty) //void means it returns nothing
{
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty; //declaration statements -> declares something
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The product of the codes are: " << CodeProduct << std::endl << std::endl; 

    //Store player guess
    int GuessA, GuessB, GuessC;
    std::cout << std::endl;

    std::cin >> GuessA >> GuessB >> GuessC; //extract from input stream and assign to var:PlayerGuess

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << std::endl << "*** Way to go! You've extracted some data. Keep going! ***\n";
        return true;
    } else {
        std::cout << std::endl << "*** You entered the wrong code! Try again! ***\n";\
        return false;
    }

    std::cout << "\n+ The sum of your guesses are: " << GuessSum << std::endl;
    std::cout << "+ The product of your guesses are: " << GuessProduct << std::endl << std::endl;

}

int main()
{   
    srand(time(NULL)); //creates new random seq based on the time of day
    int LevelDifficulty = 1;
    const int MaxLevel = 10; 

    while(LevelDifficulty <= MaxLevel) //Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); //Discards the buffer

        if(bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "\n*** Congratulations! You've beat Triple X! ***";

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