#include "isEven.h" // Do not forget to include header file and make sure isEven.h, isEven.cpp and/or isOdd.cpp are in the same directory as your work file.
#include <iostream>
#include <limits>

int main()
{
        int favoriteNumber;

        // Ask the user for their favorite number
        std::cout << "Enter your favorite number: ";

        // Check if the input is a valid integer
        while (!(std::cin >> favoriteNumber))
        {
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter a valid integer: ";
        }

        // Check if the number is even or odd using the isEven function
        if (isEven(favoriteNumber)) // Call isEven() as you would a regular function
        {
                std::cout << "Your favorite number " << favoriteNumber << " is even." << std::endl;
        }
        else if (isOdd(favoriteNumber)) // Call isOdd() as you would a regular function
        {
                std::cout << "Your favorite number " << favoriteNumber << " is odd." << std::endl;
        }
        else
        {
                std::cout << "You are a wizzard. Your number is not even nor odd..." << std::endl;
        }

        return 0;
}
