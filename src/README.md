# File by file explenation

## Structure
```
📂  src/
   └────  📄  build.py
   └────  📄  example.cpp
   └────  📄  isEven.cpp
   └────  📄  isEven.h
   └────  📄  isOdd.cpp
```

## build.py

Simple python scipt that **MUST** be ran before running `isEven()` to make the function work properly. The reason for that is that because of Github's maximum file size I couldn't fit more numbers into the file. The default maximum is 600420. But `build.py` can increase this number all the way up to 100 million unless set otherwise.

## example.cpp

Demonstrates how to use this repository. Mainly the `isEven()` and `isOdd()` functions.

## isEven.cpp

Holds the holy grain of `isEven` implementations. The ULTIMATE implementation which can store as many numbers as the user wishes.

## isEven.h

Neccesary header file which includes the declarations of `isEven()` and `isOdd()`.

## isOdd.cpp

Perhaps the best implementation od `isOdd` on the whole platform as it derives from the best `isEven` on the entire planet.
