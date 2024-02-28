# YOUR PROJECT TITLE
#### Video Demo:  <https://youtu.be/qXNKYbTHWYg>
#### Description:

# Slide Puzzle Game Explanation

## Constants and Imports
- `pygame`, `sys`, and `random` are imported along with necessary constants.
- Constants define parameters like board size, tile size, colors, fonts, and directions.

## Main Function
- Initializes the game, sets up the display, and starts the main game loop.
- Manages user input, tile sliding, and game state.

## Utility Functions
1. `terminate()`: Exits the game.
2. `checkForQuit()`: Checks for quit events and handles them.
3. `getStartingBoard()`: Returns a solved board configuration.
4. `getBlankPosition(board)`: Returns the coordinates of the blank tile.
5. `makeMove(board, move)`: Moves a tile in a given direction.
6. `isValidMove(board, move)`: Checks if a move is valid.
7. `getRandomMove(board, lastMove)`: Returns a random valid move.
8. `getLeftTopOfTile(tileX, tileY)`: Returns the pixel coordinates of the top-left corner of a tile.
9. `getSpotClicked(board, x, y)`: Converts pixel coordinates to board coordinates.
10. `drawTile(tilex, tiley, number, adjx=0, adjy=0)`: Draws a tile on the screen.
11. `makeText(text, color, bgcolor, top, left)`: Creates text surface and rectangle objects.
12. `drawBoard(board, message)`: Draws the entire game board.
13. `slideAnimation(board, direction, message, animationSpeed)`: Animates a tile sliding.
14. `generateNewPuzzle(numSlides)`: Generates a new puzzle board by making random moves.
15. `resetAnimation(board, allMoves)`: Resets the board by undoing all moves.

## Entry Point
- Checks if the script is being run as the main program and calls the `main()` function.

### Commentary
- The game is built using the Pygame library, which provides tools for creating graphical applications.
- The code structure follows a modular approach, with functions for specific tasks.
- The game implements the classic sliding puzzle where tiles must be rearranged to solve the puzzle.
- It includes features like generating new puzzles, solving puzzles automatically, and resetting the game.
- User input is handled through mouse clicks and keyboard arrow keys.
- Animations are used to provide visual feedback when tiles slide.


# Slide Puzzle Game Explanation

## Constants and Imports
- `pygame`, `sys`, and `random` are imported along with necessary constants.
- Constants define parameters like board size, tile size, colors, fonts, and directions.

## Main Function
- Initializes the game, sets up the display, and starts the main game loop.
- Manages user input, tile sliding, and game state.

## Utility Functions
1. `terminate()`: Exits the game.
2. `checkForQuit()`: Checks for quit events and handles them.
3. `getStartingBoard()`: Returns a solved board configuration.
4. `getBlankPosition(board)`: Returns the coordinates of the blank tile.
5. `makeMove(board, move)`: Moves a tile in a given direction.
6. `isValidMove(board, move)`: Checks if a move is valid.
7. `getRandomMove(board, lastMove)`: Returns a random valid move.
8. `getLeftTopOfTile(tileX, tileY)`: Returns the pixel coordinates of the top-left corner of a tile.
9. `getSpotClicked(board, x, y)`: Converts pixel coordinates to board coordinates.
10. `drawTile(tilex, tiley, number, adjx=0, adjy=0)`: Draws a tile on the screen.
11. `makeText(text, color, bgcolor, top, left)`: Creates text surface and rectangle objects.
12. `drawBoard(board, message)`: Draws the entire game board.
13. `slideAnimation(board, direction, message, animationSpeed)`: Animates a tile sliding.
14. `generateNewPuzzle(numSlides)`: Generates a new puzzle board by making random moves.
15. `resetAnimation(board, allMoves)`: Resets the board by undoing all moves.

## Entry Point
- Checks if the script is being run as the main program and calls the `main()` function.

### Commentary
- The game is built using the Pygame library, which provides tools for creating graphical applications.
- The code structure follows a modular approach, with functions for specific tasks.
- The game implements the classic sliding puzzle where tiles must be rearranged to solve the puzzle.
- It includes features like generating new puzzles, solving puzzles automatically, and resetting the game.
- User input is handled through mouse clicks and keyboard arrow keys.
- Animations are used to provide visual feedback when tiles slide.
