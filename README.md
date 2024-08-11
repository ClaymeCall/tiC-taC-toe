# tiC-taC-toe

**tiC-taC-toe** is a simple terminal-based implementation of the classic Tic Tac Toe game written in C. It's a straightforward, text-based game where two players take turns marking Xs and Os on a 3x3 grid. The first player to align three of their marks horizontally, vertically, or diagonally wins the game.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Game Rules](#game-rules)
- [Contributing](#contributing)
- [Contact](#contact)

## Features

- Simple and intuitive text-based user interface.
- Two-player gameplay.
- Detects winning combinations and declares the winner.
- Handles invalid inputs with appropriate prompts.
- Restart the game after a win or draw.

## Installation

To compile and run the game, you need to have a C compiler installed on your system. Follow these steps to set up the game:

1. **Clone the repository:**

   ```bash
   git clone https://github.com/ClaymeCall/tiC-taC-toe.git
   cd tiC-taC-toe
   ```

2. **Compile the source code:**

   ```bash
   gcc *.c -o tic-tac-toe
   ```

3. **Run the game:**

   ```bash
   ./tic-tac-toe
   ```

## Usage

Once you start the game, you'll see the 3x3 grid displayed in the terminal. Players take turns entering their move by specifying the row and column numbers (both 1-based). The grid updates automatically, showing the players' moves.

### Example

```
 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Player 1 (X), enter your move: 1
 X | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Player 2 (O), enter your move: 5
 X | 2 | 3
-----------
 4 | O | 6
-----------
 7 | 8 | 9
```

The game continues until there is a winner or a draw.

## Game Rules

- The game is played on a grid that's 3 squares by 3 squares.
- Players take turns putting their marks (X or O) in empty squares.
- The first player to get 3 of their marks in a row (vertically, horizontally, or diagonally) wins the game.
- If all 9 squares are filled and no player has 3 marks in a row, the game ends in a draw.

## Contributing

Contributions are welcome! If you'd like to contribute, please fork the repository and create a pull request. Issues and suggestions for improvements are also encouraged.

### To contribute:

1. **Fork the repository**
2. **Create a new branch** (`git checkout -b feature-branch`)
3. **Commit your changes** (`git commit -am 'Add new feature'`)
4. **Push to the branch** (`git push origin feature-branch`)
5. **Create a new Pull Request**

## Contact

For any questions or feedback, please reach out to:

- **Clement Callejon** - [clement.callejon@tutanota.com](mailto:clement.callejon@tutanota.com)
- GitHub: [ClaymeCall](https://github.com/ClaymeCall/)
