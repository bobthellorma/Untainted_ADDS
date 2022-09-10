#include <iostream>
#include <cmath>

int main()
{
    // enter how many jelly beans there are
    int number_of_beans = 0;

    while(number_of_beans < 50 || number_of_beans > 1000 )
    {
        std::cout << "How many jelly beans would you like there to be?" << std::endl;
        std::cin >> number_of_beans;
    }

    // Enter number of guessers
    int number_of_guesses = 0;
    int best_val = 10000;
    int best_person;

    while(number_of_guesses < 1 || number_of_beans > 250)
    {
        std::cout << "How many people are guessing" << std::endl;
        std::cin >> number_of_beans;
    }

    // Create arrays
    int best = 10000;
    std::string people[number_of_guesses];
    int guesses[number_of_guesses];
    int error_margin[number_of_guesses];

    // For loop for when people are right
    for (int i = 0; i < number_of_guesses; i++)
    {
        // Enter input
        int guess;
        std::string name;

        std::cout << "Enter your name";
        std::cin >> name;
        std::cout << "Enter the person's guess";
        std::cin >> guess;
        
        guesses[i] = guess;
        people[i] = name;

        // If they are correct
        if (guesses[i] == number_of_beans)
        {
            std::cout << people[i];
            break;
        }

        // If they are not
        error_margin[i] = abs(number_of_beans - guesses[i]);
        if (best < error_margin[i])
        {
            best = error_margin[i];
            best_person = i;
        }
    }
}