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
* [Group Introduction](#team-members-1)
  - FENG Jiayuan
  - ZHENG Jianxing
  
## Game Introduction

 - Background

Live incorporates elements of certainties and uncertainties. While you are the controller of your life, some things are chosen randomly out of your control. Hope you enjoy the life in this game, as well as your real life.

This is a life-simulation game which tracks the whole process of “big things” in an individual’s life. By incorporating randomness and choices, it indicates that life is a mixture of choices and uncertainties. After playing this game, players will see different outcomes of his/her chosen life, and he/she can also play multiple times to see different choices and uncertainties will lead to any kind of results in life.

 - Game Rule

Primarily, the player will be allocated a game background time randomly: Digital Ara or Ancient Ara. You will start your adventure now.

We designed five turning points in life. Birth, School, Work, Marriage and Death. At some stages, you can choose what kind of path you want to go, there are still some stages where you will be allocated a situation randomly, however.


## Coding Requirements

 - Functions Used 
   
   * **In Player files**
   
     This file is designed to store the basic information from the player, including **Namegiving**, **Eventselction**, **Save**, and **Load**. 

    1. Function **giveName** is to indentify different records, which is the name of the character in the game. 

    2. Function **selectTrack** is the main part--the process of the game, which is to process the choice entered by the player.
    
    3. Function **printTrack** is to print the current life tracks and branches.

    4. Function **save** is to output the new game status in the player file. 

    5. Function **load** is to read the record in the player file. 

   
   * **In lifetrack files**

     These files are designed to store the events and behavior selctions in this games. The functions included are similar. 

    1. **makeTrack** includes the story flow of this game. After **selectTrack** in the player file executed, **lifetrack** will process following the story flow.
    
    2. **lifetrack** also details including the descriptions of options given to the player and the pre-determined results of each option.
  
  
 - Code Requirement Satisfied
    
      The functions listed below are just examples. At least one function are satisfied relevant requirements.
    
    1. Generation of random game sets or events
    
       **selectTrack**: generate random numbers to decide the endings of the game.
       **main**: generate the player's gender randomly.
    
    2. Data structures for storing game status
    
       **lifetrack** : use structure to store the content of the story sections.
    
    3. Dynamic memory management
      
       **save** and **load** : use records to save or load different game status.
    
    4. File input/output (e.g., for loading/saving game status)
    
       **makeTrack** : use branch(pointers) to construct the story flow.
    
    5. Program codes in multiple files
    
       **2 header files** and **3 source files** are used in the program.
    
    6. Proper indentation and naming styles
    
       The variables in the files are related to their actual meaning. The indentation is used to clearify the relevant relations of each segement.
    
    7. In-code documentation
    
       **lifetrack** : read and write across files.
    
    
 - Non-STL used
    
     1. **<time.h>**
     
        **<time.h>** is to get the system time, used in function **save** in **player.cpp**. This helps to distinguish the save status.


## Compilation and execution instructions

 - **Compilation**

   $ make main  
 
 - **Execution**
 
   $ ./main
  


## Team members

 - **FENG Jiayuan**
 
   A junior majoring in QFin and minoring in CS, working on the whole logical design, function definition (lifetrack.h, player.cpp, player.h, main.cpp) and debugging.

 
 - **ZHENG Jianxing**
  
   A junior majoring in EF, working on the lifetrack.cpp file to construct the storyline and create the explanation video.

