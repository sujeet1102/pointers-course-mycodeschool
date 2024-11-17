## Memory Leak:

    The malloc call inside the play function allocates memory, but the memory is not deallocated (free is not called).
    Repeated calls to play result in memory leaks.

## Randomization:

    srand(time(NULL)) seeds the random number generator with the current time to ensure randomness.
    Calling rand() generates random numbers.

## Array Shuffle:

    The for loop swaps elements randomly to shuffle the array.

## Bet Validation:

    Prevents invalid bets (e.g., bet greater than cash or zero).

## Game Logic:

    The player guesses the position of the Queen ('Q').
    Wins result in a triple payout (3*bet), and losses deduct the bet from the total cash.

## String Representation:

    The results are displayed as a shuffled array of characters.

## Edge Cases:

    Game terminates when cash is depleted or an invalid bet is made.