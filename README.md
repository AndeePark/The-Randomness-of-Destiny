# Group 16 - "The-Randomness-of-Destiny"
Text-based game group project in COMP2113
 
#identification of group members

ZHEN Jianxing 3035532789
FENG Jiayuan 3035552648
 
#basic description
 
Game background
 
Live incorporates elements of certainties and uncertainties. While you are the controller of your life, some things are chosen randomly out of your control. Hope you enjoy the life in this game, as well as your real life.

This is a life-simulation game which tracks the whole process of “big things” in an individual’s life. By incorporating randomness and choices, it indicates that life is a mixture of choices and uncertainties. After playing this game, players will see different outcomes of his/her chosen life, and he/she can also play multiple times to see different choices and uncertainties will lead to any kind of results in life.

Primarily, players will be allocated a game background time randomly: Digital Century or Non-digital Century. They will start their adventure now.

We will design five turning points in life. Birth, School, Work, Marriage and Death. At some stages, you can choose what kind of path you want to go, there are still some stages where you will be allocated a situation randomly, however.
 
#List of Features

1. Generation of random game sets or events
Some life turning points can be actively chosen by the player, while some life events are random - reflecting the uncontrollable side of life. 
random() function will be utilized to generate determinants such as gender, race and living era.

2. Data structures for storing game status
Int: Game Stage (e.g. Born: stage 0, Schooling: stage 1, and so on) + Option Choice (user input number for choosing different path)
String: Descriptive Stories and Options
Boolean: A detective signal to check if the player has a saved game process or not
Array: stores the entire path of live, will be printed after death

3. Dynamic memory management
InProgress file to save the game status the player choose to stay when he/she quits
Load file to reload the game status when the player reopen the game and continue his/her game from which he/she quits

4. File input/output (e.g., for loading/saving game status/reading/displaying information)
After running the game, the system will detect if there is any file left for the last trial. If there is a file, the program will ask the play to choose “continue last life” or “a new life”.
Input: Player will input different numbers to go to different life path
Output: Display the chosen life path background information

5. Program codes in multiple files
Function file: Each file saves the necessary function used in the game
Header file: to call the function in the main game script
Game progress file: to save the individual player’s game progress
Description file: to save descriptive information in the game 
Main program file: to incorporate all the function and descriptions needed and execution

