#include <iostream>

bool PlayGame(int difficulty)
{
    std::cout << "You are on difficulty LEVEL " << difficulty << ":" << std::endl;

    int RandA = rand() % difficulty + difficulty;
    int RandB = rand() % difficulty + difficulty;
    int RandC = rand() % difficulty + difficulty;

    int RandSum = RandA + RandB + RandC;
    int RandProduct = RandA * RandB * RandC;

    std::cout << "+ The sum of the 3 numbers is: " << RandSum << std::endl;
    std::cout << "+ The product of the 3 numbers is: " << RandProduct << std::endl
              << std::endl;

    std::cout << "Decode the puzzle:";

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    if (GuessA + GuessB + GuessC == RandSum && GuessA * GuessB * GuessC == RandProduct)
    {
        std::cout << "You creacked the puzzle!!" << std::endl;
        std::cout << "Now move quickly to the next puzzle..." << std::endl;
        return true;
    }
    else
    {
        std::cout << "You were unable to creacked the puzzle!!" << std::endl;
        return false;
    }
}

int main()
{
    bool res = true;
    std::cout << "You are a spy on a secret mission to save the world" << std::endl
              << std::endl;
    std::cout << "+ In order to save the world, you have to pass through all the puzzles" << std::endl;
    std::cout << "+ For each puzzle you have to provide 3 correct numbers that match the expcted sum and product" << std::endl
              << std::endl;
    // std::cout << "+ Be careful as the time"
    for (int i = 2; i <= 10 && res == true; i++)
    {
        res = PlayGame(i);
        std::cin.clear();
        std::cin.ignore();
    }
    if (res == false)
    {
        std::cout << "Better Luck Next Time!!";
    }
    else
    {
        std::cout << "You are a Master Hacker!!";
    }
    return 0;
}