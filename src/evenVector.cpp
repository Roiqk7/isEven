#include "evenVector.h"
#include "isEven.h"
#include <algorithm>
#include <iostream>
#include <vector>

// Default constructor
evenVector::evenVector()
{
        changeMax(0);
}

// Parameterized constructor to set the maximum size and fill the vector
evenVector::evenVector(int maxSize) : m_max(maxSize)
{
        changeMax(maxSize);
}

bool evenVector::operator[](const int index)
{
        const int absIndex = std::abs(index);

        if (m_max < absIndex)
        {
                changeMax(absIndex);
        }

        return m_isEven[absIndex];
}

// Changes max correctly
void evenVector::changeMax(const int num)
{
        m_max = std::abs(num);
        m_isEven.resize(m_max+1);
        fillUp(); // Resize the vector and fill up new elements
}

// Function to fill up the vector with initial values
void evenVector::fillUp()
{
        // Fill the vector with values corresponding to their indices
        for (int i = 0; i <= m_max; i++)
        {
                m_isEven[i] = isEven(i);
        }
}

// Function to check if a number is even
// We do not use isEven() function as it may not contain the num
bool evenVector::isEven(int num) const
{
        if (num == 0) return true;

        std::vector<int> binaryRepresentation;

        // Convert the number to binary representation
        while (0 < num)
        {
                binaryRepresentation.push_back(num % 2);
                num /= 2;
        }

        // Reverse the binary representation
        std::reverse(binaryRepresentation.begin(), binaryRepresentation.end());

        // Check if the last digit of binary representation is 0
        return !binaryRepresentation.empty() && binaryRepresentation.back() == 0;
}

// Show us what's going on
void evenVector::print() const
{
        std::cout << "Size of evenVec: " << m_max << std::endl;

        for (int i = 0; i <= m_max; i++)
        {
                if (m_isEven[i])
                {
                        std::cout << "even";
                }
                else
                {
                        std::cout << "odd";
                }
                if (i == m_max)
                {
                        std::cout << std::endl;
                }
                else
                {
                        std::cout << ", ";
                }
        }
}