#include "isEven.h"
#include "evenVector.h"
#include <iostream>
#include <limits>

int main()
{
        int favoriteNumber;
        evenVector vec;

        // Ask the user for their favorite number
        std::cout << "Enter your favorite number: ";

        // Check if the input is a valid integer
        while (!(std::cin >> favoriteNumber))
        {
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter a valid integer: ";
        }

        // Check if the number is even or odd using the isEven function and checking value at corresponding index of EvenVector
        if (isEven(favoriteNumber) && vec[favoriteNumber])
        {
                std::cout << "Your favorite number " << favoriteNumber << " is even." << std::endl;
        }
        else if (isOdd(favoriteNumber) && !vec[favoriteNumber])
        {
                std::cout << "Your favorite number " << favoriteNumber << " is odd." << std::endl;
        }
        else
        {
                std::cout << "You are a wizard. Your number is not even nor odd..." << std::endl;
        }

        return 0;
}
