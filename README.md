# Tic-Tac-Toe
Tic Tac Toe is a simple two-player game that is played on a 3x3 grid. The objective of the game is for one player to get three of their symbols in a row, either horizontally, vertically, or diagonally.

To implement Tic Tac Toe in C++, you can start by creating a 2D array to represent the game board. Each element of the array can be initialized to a symbol that represents an empty space on the board.

Next, you can create a function that displays the current state of the board to the players. This function would iterate through the 2D array and print out the symbol at each position.

Then, you can create a function that prompts the first player to make a move. The player would input the row and column of the position they want to place their symbol. This function would then update the 2D array to reflect the player's move.

You would then create a similar function for the second player, and alternate between the two players until one player wins or the board is filled without a winner.

To determine if a player has won, you can create a function that checks each row, column, and diagonal of the board to see if all three symbols match. If a match is found, the function would return the player who won.

Finally, you can create a function that displays the winner (if there is one) or a tie game, and gives the option to play again or quit the game.

Overall, the implementation of Tic Tac Toe in C++ involves creating functions for displaying the board, accepting player moves, checking for a winner, and displaying the end result.



