# Memory Matching Game

This is a simple memory matching game implemented in C++.

## Description

The Memory Matching Game is a classic game where players try to find matching pairs of cards from a shuffled deck. In this implementation, instead of cards, we use pointers to integer variables stored in a vector. The game prompts the player to select two numbers representing the indices of the shuffled vector. If the values at those indices are equal, the player has found a pair and those elements are removed from the vector. The game continues until all pairs have been found.

## How to Play

To play the game, follow these steps:

1. Clone the repository to your local machine.
2. Compile the source code using a C++ compiler.
3. Run the compiled executable.
4. Follow the prompts to select two numbers representing the indices of the shuffled vector.
5. If the values at those indices are equal, the pair is removed from the vector.
6. Continue selecting pairs until all pairs have been found.

## Features

- Simple command-line interface.
- Random shuffling of elements for each game session.
- Dynamic memory allocation for variable storage.

## Requirements

- C++ compiler (e.g., g++)
- Standard Template Library (STL)

## Usage

```bash
$ g++ memory_matching_game.cpp -o memory_matching_game
$ ./memory_matching_game
