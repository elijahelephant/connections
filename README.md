# connections
A program used to connect words by only changing one letter at a time.

## Description

The Word Chain Generator is a C++ program that finds word chains between two given words. A word chain is a sequence of valid English words where each word in the sequence is formed by changing one letter at a time from the previous word. Both words must be of the same length and valid words, otherwise an error is thrown.

## Installation

To use the Word Chain Generator, follow these steps:

1. **Compile**: Compile the program using your C++ compiler.

```shell
g++ -o word_chain_generator Dictionary.cpp main.cpp
```

## Testing

The program was tested on a hypercube with a 4% fill factor, running 200 queries. It successfully found word chains for the given queries and completed the task in 58.01 seconds.

It also completed a 200x200 labyrinth running 1200 queries in 97.06 seconds.

## Examples:

From gold to milk:
 - gold
 - hold
 - hole
 - home
 - come
 - came
 - game
 - gave
 - give
 - five
 - fine
 - mine
 - mile
 - milk

# Maze

From aaaa to hhll:
 - aaaa
 - abaa
 - bbaa
 - bbab
 - bbbb
 - bcbb
 - ccbb
 - ccbc
 - cccc
 - cccd
 - ccdd
 - ccde
 - ccee
 - ccef
 - ccff
 - ccfg
 - ccgg
 - cdgg
 - ddgg
 - degg
 - eegg
 - eegh
 - eehh
 - efhh
 - ffhh
 - fghh
 - gghh
 - gghi
 - ggii
 - ggij
 - ggjj
 - ggjk
 - ggkk
 - ggkl
 - ggll
 - ghll
 - hhll


