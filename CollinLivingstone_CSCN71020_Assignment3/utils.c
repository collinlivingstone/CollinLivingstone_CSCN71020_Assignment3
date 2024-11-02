#include "utils.h"
#include <stdio.h>
#include <string.h>

char RockPaperSissors(char playerOneInput[], char playerTwoInput[]) {
	char gameResult = 'u';

	//Player 1 Wins
	if (strcmp(playerOneInput, "Rock") == 0 && strcmp(playerTwoInput, "Scissors") == 0)
		gameResult = '1';

	else if (strcmp(playerOneInput, "Paper") == 0 && strcmp(playerTwoInput, "Rock") == 0)
		gameResult = '1';
	
	else if (strcmp(playerOneInput, "Scissors") == 0 && strcmp(playerTwoInput, "Paper") == 0)
		gameResult = '1';

	//Player 2 Wins
	else if (strcmp(playerTwoInput, "Rock") == 0 && strcmp(playerOneInput, "Scissors") == 0)
		gameResult = '2';
	
	else if (strcmp(playerTwoInput, "Paper") == 0 && strcmp(playerOneInput, "Rock") == 0)
		gameResult = '2';

	else if (strcmp(playerTwoInput, "Scissors") == 0 && strcmp(playerOneInput, "Paper") == 0)
		gameResult = '2';

	//Tie
	else if (strcmp(playerOneInput, playerTwoInput) == 0) 
		gameResult = 't';

	//Invalid
	else
		gameResult = 'i';


	return gameResult;


}