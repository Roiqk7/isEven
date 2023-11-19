# The Ultimate isEven!

Have you ever wondered if a number is even or odd? Well those times are over! With this implementation of `isEven()` you can once and for all determine if a number is even! And it doesn't end there! I also included `isOdd()` so you can be 100% sure when number is odd!

## Contents
* [Installation](#Installation)
* [How to use?](#HowToUse)
* [Description](#Description)
* [Going over a BILLION...](#TheTruth)

# Installation <a name="Installation"></a>

1. Clone this repository (if you haven't done so already).
```
git https://github.com/Roiqk7/isEven
```
2. Default `isEven.cpp` supports integers from `-600420` to `600420` (because github doesn't allow for larger files). If thats fine for you, you can stop there. Else if you want more integers, follow the rest of this tutorial.
3. Open your terminal.
4. Go into the repo directory.
5. Run `python3 build.py`. That will make `isEven.cpp` support integers all the way to 100 million. This action takes around 1 minute on MacBook M2. To learn how to change this ceiling [click here!](#ChangingMaxSupportedValue)
6. Everything is set and done!

# How to use? <a name="HowToUse"></a>

For example usage refer to [example.cpp](src/example.cpp).

## How to use example.cpp

1. Follow steps in [Installation](#Installation) (if you haven't done so already).
2. Open terminal.
3. Go into the repo directory.
4. Run `g++ -std=c++17 -o example example.cpp isEven.cpp isOdd.cpp && ./example`
5. Find out if your favourite number is even od odd!

## Changing max supported value <a name="ChangingMaxSupportedValue"></a>

How to change the ceiling of `isEven.cpp`? Easily!

1. Open build.py in your text editor of choice.
2. At line 8 notice the variable `totalIterations`.
3. Change it's value to whatever you deem neccesary!

# Description <a name="Description"></a>

This repository is mainly used to determine if number is even or odd using `isEven()` funcition defined in `isEven.cpp` and `isOdd()` funciton defined in `isOdd.cpp`. These functions then store a LOT of numbers to check whether the wished number is even or odd. Keep in mind that the functions only support numbers defined within it.

# Going over a BILLION... <a name="TheTruth"></a>

Well... it's not really recomended. This is exactly how `totalIterations = 1 Billion` is large. Also it takes around **10 minutes** to build. I tried rewriting `build.py` in C++ but it didn't improve the performance at all. 

![Startup](https://github.com/Roiqk7/isEven/blob/main/.github/billionFileSize.png?raw=true)
