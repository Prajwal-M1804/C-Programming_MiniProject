# Requirements

## Introduction
Tic-Tac-Toe is a well known game played by two
persons who alternately place X's and O's upon a 3x3 playing field.
The players first decide who will mark his moves
with an X and who will go first. Play proceeds with the opponents
alternately placing their marks in any unoccupied cell 
The object of the game is to be the first player with 3
marks in a row, where a row can be either vertical, horizontal, or
diagonal. If all the cells become filled the game is a draw.

## Research

FUNDAMENTAL THEOREM

First we shall prove a theorem which shows that for a large class of games the second player can
never win against perfect play by the first player. It will be clear that our generalized TTT
belongs to this class. This allows us to break such games into 2 groups, those which result in a
win for player 1 and those which result in a draw. As previously explained, we shall deal
primarily with the first class. For such games, every possible move for the first player can be
considered either safe, that is, leading to a win, or unsafe and leading, if the second player is
clever, to a draw or a loss.

ATTACKING THE PROBLEM

Let us begin the search for some components out of which we can build a mathematical theory
for our game on a point/block structure with lambda=1. We will be examining games for which
the first player can always win and try to characterize both the games and the strategies required.
Let me say as the outset, that no neat all encompassing theory has been discovered.

CRYSTALS

A move is forced if the player must move there to prevent his opponent from
winning the game on the next move. : During play of a generalized TTT game, we call a sequence of moves a crystal
provided each successive move of the sequence is forced.  The point where a move will generate a crystal is called a germ of the crystal.
Making a move to such a point is called germination. The collection of moves prior to germination are called a seed. If the number of points per block is always K, then we way that the molecular length of the game is K. The X's and O's which constitute a move are called atoms. 

LEADS

A lead is a sequence of moves where one player forces every move of his opponent.The end point of the lead is reached by a sequence of moves such that the opponent's
moves were harmless. Certain important points are taken as the game progressed. Sometimes these points are
useful later in the game in setting up other leads or for the creation of forks. 



## Cost and Features

The cost requires only for software development and implementation of the software.

The game is played on a grid that's 3 squares by 3 squares.
You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares.
The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.
When all 9 squares are full, the game is over.

## Defining Our System

![image](https://user-images.githubusercontent.com/80813102/114451831-54630380-9bf5-11eb-9d04-a7f3c0749819.png)

Tic Tac Toe is a zero-sum and perfect information game. It means that each participant's gain is equal to the other participants' losses and we know everything about the current game state. In a two-player (A vs B) game, if player A scores x points (utility units), player B loses x points.

![image](https://user-images.githubusercontent.com/80813102/114452439-10243300-9bf6-11eb-8aa1-21bd8f21c479.png)





## SWOT ANALYSIS
![image](https://user-images.githubusercontent.com/80813102/114412611-e30e5b00-9bca-11eb-9b72-160eb0885c27.png)


# 4W's and 1'H

## Who:
  This game was played between students and even experts to check there logical thinking.

## What:
This game is about the first player with 3
marks in a row, where a row can be either vertical, horizontal, or
diagonal will win the game. If all the cells become filled the game is a draw.

## When:

This game is played in a short interval of time when the two players are decided to pass the boring time or challenge who will win among themself.

## Where:

This game was usually played in paper,mobile and Pc.

## How:

The players first decide who will mark his moves
with an X and who will go first. Play proceeds with the opponents
alternately placing their marks in any unoccupied cell 
The object of the game is to be the first player with 3
marks in a row, where a row can be either vertical, horizontal, or
diagonal. If all the cells become filled the game is a draw.



# Detail requirements

## High Level Requirements:

| ID   |Description|Status(Implemented/Future)|
|------|-----------|------|
| HR01 |   The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.        |       |
| HR02 | When all 9 squares are full, the game is over          | Gaming |      |
| HR03 |  If no player has 3 marks in a row, the game ends in a tie.         |     |



## Low level Requirements:

| ID   |Description|Status(Implemented/Future) |
|------|-----------|------ |
| LR01 |           |       |
| LR02 |           |       |
| LR03 |           |       |



