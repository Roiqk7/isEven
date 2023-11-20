#ifndef EVEN_VECTOR_H
#define EVEN_VECTOR_H

#include <cmath>
#include <vector>

class EvenVector
{
public:
        // Default constructor
        evenVector();

        // Parameterized constructor to set the maximum size and fill the vector
        evenVector(int maxSize);

        bool operator[](const int index);

        // Print isEven()
        void print() const;

private:
        std::vector<bool> m_isEven; // Vector to store boolean values
        int m_max;                  // Maximum size of the vector

        void changeMax(const int num); // Change max responsibly

        // Function to fill up the vector with initial values
        void fillUp();

        // Function to check if a number is even
        // We do not use isEven() function as it may not contain the num
        bool isEven(int num) const;
};

#endif // EVEN_VECTOR_H


