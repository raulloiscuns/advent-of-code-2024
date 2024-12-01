# Advent of Code 2024 :santa:

This repository contains my solutions to the AOC 2024 puzzles. This year, I decided to implement my solutions in C++ to practice and learn the language, focusing specifically on becoming familiar with the C++20 standard.

## Usage

Each day's solution and its corresponding test input files are located in a subdirectory named day_NN, where NN represents the day number.

To compile the solutions use:
```bash
g++ -std=c++20 -o main main.cpp
```
to run the code use:
```bash
./main i input.txt
```
where `i` is the number part (1 or 2) and `input` the input file. Puzzle solution's is printed in stdout.

## Puzzle statements

The puzzle instructions can be found [here](https://adventofcode.com/2024). A brief summary of each of the statements of each problem is shown below.

1. [Historian Hysteria](#day-01-historian-hysteria)

### Day 01: Historian Hysteria

The input are two list of integers (location IDs). 

- Part 1: Compute the total distance between the two lists, defined as the sum of the distances between the paired numbers in increasing order.
- Part 2: Compute the total similarity score by adding up each number in the left list after multiplying it by the number of times that number appears in the right list.