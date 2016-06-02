//Jaber Awed
//Roulette Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int showInstructions();
int getBetAmount();
int makeBet();
int spinWheel();


int main()

{ 
	int menu, numberBet, bet, r;
	int number[36];
	
	menu=showInstructions();
	numberBet=getBetAmount();
	bet=makeBet();
	r=spinWheel();
	

	
	
}

	int showInstructions()                 //menu
	{	
			printf("\nThe roulette wheel has the numbers 0-36 on it");                
			printf("\n\nYou can place your bet in one of three ways:");
			printf("\n\n1. bet on a number (payout is 36 times the bet amount)");
			printf("\n2. bet on an odd or even (payout is 2 times the bet)");
			printf("\n3. bet on a dozen ~ first 1-12, second 13-24, third 25-36 (payout is 3 times the bet)");
			printf("\n\nThe number zero does not count for odd or even or dozen, but can count as a number bet");
	}
	
	int getBetAmount()                  //amount bet
	
	{
		int numberBet;
		
		printf("\n\nEnter the bet\t");
		scanf("%d", &numberBet);
		return numberBet;	             
	}

	int makeBet()

	{
		int bet;
		printf("\n\nplease choose the bet option 1, 2, or 3:\t");
		scanf("%d", bet);
		
		
				switch (bet)
	
	{
		case 1:
		printf("/nPlease enter the number you would like to bet on");	// 1 - 38	
		scanf("%d", & bet);
			break;
			
		case 2:  											
			bet=makeBet();
			printf("\nOdd or even?\t");	//O or E
			break;
	
		case 3: 									
			bet=makeBet();
			printf("\nbet on a dozen?\t");	// f, s, t
			break;
			
			default:										
			printf("\nIncorrect option");
			bet=makeBet();
		
	}
	
	return bet;
	
	}
	
		int spinWheel()
		{
			srand(time(0));
		
 		{		 
		printf("\nRandom number is %d", (rand() % 36)+1);
		return 0;
		}
}
	
	
