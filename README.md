# cpp-project1

## Introduction
This was one of the first really useful C++ assignments I worked on in the course. Depending on your preference of observing the code that was worked on, I have uploaded two versions of it. You can view either the code in a Word (.doc) file or you can view it in a raw C++ (.cpp) file, the latter of which you can test easily if you have a program that can run them.

## Purpose
The purpose of this assignment was to create a program that could have a list of numbers and have them match up against the number that the user puts in. In this case, it was used to create a basic account verification system where it will check against the verified list of account numbers and get back to the user if the number they entered was valid or invalid. This was done to create an example at what a verification system of any kind could look like.

## Backend Code Details
The program starts out by creating an array that will be referenced later on followed by the list size needed and the list of account numbers. Next is the creation of the account number variable. Following this we give the output (cout) statement to ask the user their charge account number then provide them the input (cin) of the initialized account number. When the user has entered their account number, the program deposits it into the list of verified account numbers and checks against every one. If it is a valid number, it will tell the user, while if it is invalid, will also tell and reject the user. Below that is a function created to increment and search the list at hand using a for loop.

## What Was Learned From This Assignment
This assignment taught me the value of verification systems. All companies need some sort of verification for their own security and any possible customers. If this code was modified to include a database rather than a determined list, and employed some redirects and additional rules, this would be a great basis for an account verification system.

## What Was Learned From C++
C++ has taught me that code done inside it can be extremely flexible. Unlike object oriented languages such as Java, C++ has a larger amount of freedom that any programmer can take advantage of. While this can be used to an advantage for almost every type of program, unfortunetely C++ is not without its cons with the main con being that it is not easy to fix and maintain the source code of a program. Yes, C++ grants much freedom over other languages, but it comes with the responsibility of being careful of your code more. If you aren't, the structure will crumble and those affected will have to pay the price.
