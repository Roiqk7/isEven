# File by file explenation

## Structure
```
📂  src/
   └────  📄  build.py
   └────  📄  evenVector.cpp
   └────  📄  evenVector.h
   └────  📄  example.cpp
   └────  📄  isEven.cpp
   └────  📄  isEven.h
   └────  📄  isOdd.cpp
```

## build.py

Simple Python scipt that **MUST** be ran before running `isEven()` to make the function work properly. The reason for that is that because of Github's maximum file size, I couldn't fit more numbers into the file. The default maximum is `600420`. But `build.py` can increase this number all the way up to 100 million unless set otherwise.

## evenVector.cpp
Stores definitions of the `EvenVector` class. The definitions are mostly self-explanatory. The most important piece of code is the overloaded `[]` operator. That is the main functionality of the entire class. Refer to the code for further functionality.

## evenVector.h
Stores declarations of the `EvenVector` class. The 'EvenVector'EvenVector'sed to easily determine if a number is even or odd. Simple use overloaded `[]` opperand with the number you want to know if is even or not, and it will return you `true` for even or `false` for odd.

## example.cpp

Demonstrates how to use this repository. Mainly the `isEven()` and `isOdd()` functions.

## isEven.cpp

Holds the holy grain of `isEven` implementations. The ULTIMATE implementation which can store as many numbers as the user wishes.

## isEven.h

Necessary header file which includes the declarations of `isEven()` and `isOdd()`.

## isOdd.cpp

Perhaps the best implementation of `isOdd` on the whole platform, as it derives from the best `isEven` on the entire planet.
