# Questions

This questions are just things i that ask my self about the game or
about how make something with the lenguage

## Questions about game?

### How i handle the npc rival?

This is a good question, because i dont have idea how to make intellingent rivals

--- First idea ---

Recollect all free space and select one in random way to npc add his mark

## How i determinate a winner?

I think in a few patterns over the table game that considerate de possibilities 
for a winner, but I think this was too many lines of code

So, i tried a few ways to make it but everyone had some problems, even, with
they were efficient, so I asked ChatGPT, and it gave me a solution.

The solution that he gave me, was practically my solution but in a better way
using a for to iterate about rows and columns and keeping apart the lines
that handler the diagonals


## Questions about C++?

### How i handle the iostream between files?

This questions come about that when i have to slipt in parts the code
i have problem for missed reference about iostream, and i had fear
about have it duplicated

-- Answers --

- I can add iostream in each file that i needed it
- Add it just when is necessary
- i have to use programe once

### How i can return a matrix from a function?

Due like i want to separate logic from view, and i have to calculate in which place 
the placer can add his mark, i need to save that data into a matrix
and then return it to the view

The problem here is that, it is not easy, cause someone cannot return 
in easy a matrix, but there are a few ways to make it:

- Using dynamic array
- Using static keyword
- Using Struct technique

In this case i will use static keyword cause i belive this is the more easy way