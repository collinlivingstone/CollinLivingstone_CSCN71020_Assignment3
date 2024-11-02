#include "utils.h"
#include <stdio.h>

char RockPaperSissors(char playerOneInput[], char playerTwoInput[]) {
	char gameResult = 'u';

	//Player 1 Wins
	if (playerOneInput == "Rock" && playerTwoInput == "Scissors") 
		gameResult = '1';

	else if (playerOneInput == "Paper" && playerTwoInput == "Rock") 
		gameResult = '1';
	
	else if (playerOneInput == "Scissors" && playerTwoInput == "Paper") 
		gameResult = '1';

	//Player 2 Wins
	else if (playerTwoInput == "Rock" && playerOneInput == "Scissors") 
		gameResult = '2';
	
	else if (playerTwoInput == "Paper" && playerOneInput == "Rock") 
		gameResult = '2';

	else if (playerTwoInput == "Scissors" && playerOneInput == "Paper") 
		gameResult = '2';

	//Tie
	else if (playerOneInput == playerTwoInput) 
		gameResult = 't';

	//Invalid
	else
		gameResult = 'i';


	return gameResult;


}