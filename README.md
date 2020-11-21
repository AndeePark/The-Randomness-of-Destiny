# Group 16 - "The-Randomness-of-Destiny"
Text-based game group project in COMP2113
 
#### Team Members:
##### FENG Jiayuan 3035552648
##### ZHENG Jianxing 3035532789

## **Outline**
* [Game Introduction](#game-introduction)
  - Background
  - Game Rule
* [Coding Requirements](#coding-requirements)
  - Functions Used 
  - Code Requirement Satisfied
  - Non-STL used
* [Compilation and execution instructions](#Compilation and execution instructions)
* [Group Introduction](#Team members)
  - FENG Jiayuan
  - ZHENG Jianxing
* [List of Features](#List of Features)
  
## Game Introduction

 - Background

Live incorporates elements of certainties and uncertainties. While you are the controller of your life, some things are chosen randomly out of your control. Hope you enjoy the life in this game, as well as your real life.

This is a life-simulation game which tracks the whole process of “big things” in an individual’s life. By incorporating randomness and choices, it indicates that life is a mixture of choices and uncertainties. After playing this game, players will see different outcomes of his/her chosen life, and he/she can also play multiple times to see different choices and uncertainties will lead to any kind of results in life.

 - Game Rule

Primarily, players will be allocated a game background time randomly: Digital Century or Non-digital Century. They will start their adventure now.

We will design five turning points in life. Birth, School, Work, Marriage and Death. At some stages, you can choose what kind of path you want to go, there are still some stages where you will be allocated a situation randomly, however.


## Coding Requirements

 - Functions Used 
   
   * **In Player files**
   
     This file is designed to store the basic information from the player, including **Namegiving**, **Eventselction**, **Save**, and **Load**. 

    1. Function **giveName** is to indentify different records, which is the name of the character in the game. 

    2. Function **selectTrack** is the main part--the process of the game, which is to process the choice entered by the player.
    
    3. Function **printTrack** is to print the current event and branches.

    4. Function **save** is to write the new GameStatus in Me file. 

    5. Function **load** is to read the record in Me file. 

   
   * **In Lifetrack files**

     These files are designed to store the events and behavior selctions in this games. The functions included are similar. 

    1. **makeTrack** includes the story flow of this game. After **selectTrack** in Me file executed, **Lifetrack** will process following the story flow.
    
    2. **Lifetrack** also details including the descriptions of options given to the player and pre-determined probabilities for checking whether the player is infected.
  
  
 - Code Requirement Satisfied
    
      The functions listed below are examples. At least one function are satisfied relevant requirements.
    
    1. Generation of random game sets or events
    
       **selectTrack** : give random number to decide the endings of the game(infected or not infected).
    
    2. Data structures for storing game status
    
       **Lifetrack** : use structure to store the content of the story sections.
    
    3. Dynamic memory management
      
       **save** and **load** : use records to save or load different game status.
    
    4. File input/output (e.g., for loading/saving game status)
    
       **InitEvent** : use branch(pointers) to construct the story flow.
    
    5. Program codes in multiple files
    
       **3 header files** and **3 source files** are used in the program.
    
    6. Proper indentation and naming styles
    
       The variables in the files are related to their actual meaning.
    
    7. In-code documentation
    
       **Lifetrack** : read and write across files.
    
    
 - Non-STL used
    
     1. **<time.h>**
     
        **<time.h>** is to get the system time, used in function **save** in **Player.cpp**. This helps to distinguish the save status.
        
     2. **<utility.h>**
        
        **<time.h>** is to build **pair** to connect the item with the probability of preventing virus, used in **items.h**. 


## Compilation and execution instructions

 - **Compilation**

   $ make main  
 
 - **Execution**
 
   $ ./main
  


## Team members

 - **FENG Jiayuan**
 
   A junior majoring in QFin and minoring in CS, working on 

 
 - **ZHENG Jianxing**
  
   A junior majoring in EF, working on 


 


## List of Features

1. Generation of random game sets or events
 - Some life turning points can be actively chosen by the player, while some life events are random - reflecting the uncontrollable side of life. random() function will be utilized to generate determinants such as gender, race and living era.

2. Data structures for storing game status
 - Int: Game Stage (e.g. Born: stage 0, Schooling: stage 1, and so on) + Option Choice (user input number for choosing different path)
 - String: Descriptive Stories and Options
 - Boolean: A detective signal to check if the player has a saved game process or not
 - Array: stores the entire path of live, will be printed after death

3. Dynamic memory management
 - InProgress file to save the game status the player choose to stay when he/she quits
 - Load file to reload the game status when the player reopen the game and continue his/her game from which he/she quits

4. File input/output (e.g., for loading/saving game status/reading/displaying information)
 - After running the game, the system will detect if there is any file left for the last trial. If there is a file, the program will ask the play to choose “continue last life” or “a new life”.
 - Input: Player will input different numbers to go to different life path
 - Output: Display the chosen life path background information

5. Program codes in multiple files
 - Function file: Each file saves the necessary function used in the game
 - Header file: to call the function in the main game script
 - Game progress file: to save the individual player’s game progress
 - Description file: to save descriptive information in the game 
 - Main program file: to incorporate all the function and descriptions needed and execution
