//Jaber Awed
//Roulette Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void showInstructions();
int getBetAmount();
void makeBet(int *, int *);
void figureWinnings(int, int, int, int);
int spinWheel();


int main()

{ 



	int menu, amountBet, bet, choice;
	int random,quit;
	 

do
{

	random=spinWheel();
	showInstructions();  				// show menu
	amountBet=getBetAmount();
   	makeBet(&bet, &choice);	
   	figureWinnings(amountBet, bet, choice, random);
	printf("\n\nWould you like to quit? (1 for Yes or any other number for No)");
	scanf("%d", &quit);
	
} while (quit != 1);
}

	void showInstructions()                 //menu
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
		int amountBet;
		
		printf("\n\nEnter the bet\t");
		scanf("%d", &amountBet);
		return amountBet;	             
	}

	void makeBet(int *betP, int *choiceP)                              //options to choose

{		int wheel;
		int bet, choice;
		printf("\n\nplease choose the bet option 1, 2, or 3:\t");        
		scanf("%d", &bet);
		
		
				switch (bet)
	
	{
		case 1:
		printf("\nPlease enter the number you would like to bet on (1-36)");	// 1 - 38	
		scanf("%d", & choice);
		if (choice >= 0 && choice <= 36)
		printf("\n The number you choose is %d", choice);
		else
		printf("\n The number is not valid");
				break;
			
		case 2:  											
			printf("\n Would you like Odd or Even? (1 for Even or 2 for Odd)\t");  //choose even or odd
			scanf("%d", & choice);
			
					switch(choice)
					
				{
					case 1:
						printf("\n You have chosen the Even numbers");
						break;
						
					case 2:
						printf("\n You have chosen the Odd numbers");
						break;

					default:										
						printf("\nIncorrect option");
						break;
				}
			break;
		  
		case 3: 									          //choose dozen
			printf("\nChoose a dozen? (1,2,3)\t");
			printf("\n1)Option one is 1-12\t");
			printf("\n2)Option two is 13-24\t");
			printf("\n3)Option three is 25-36\t");
			scanf("%d", & choice);
			
					switch(choice)
					
				{
					case 1:
						printf("\n You have chosen the first dozen");
						break;
						
					case 2:
						printf("\n You have chosen the second dozen");
						break;
						
					case 3:
						printf("\n You have chosen the third dozen");
						break;
				
						default:										
						printf("\nIncorrect option");
						break;
				} break;
			
			
			default:										
			printf("\nIncorrect option");
		
		
	}
	*betP=bet;
	*choiceP=choice;

	
}
	
		int spinWheel()                             //spin wheel to recieve random number
		{
		int random;
		
		srand(time(0));	 
		random=rand() % 36+1;
		printf("\nRandom number is %d", random);
		
	
		
		
		return random;
		
		}
	
	
void figureWinnings(int amountBet, int bet, int choice, int random)             //calculate the winning
{
	int total=0;
	
	if (bet == 1)                                                    //bet option 1 choose number
	{
		if (choice == random)
		{
			printf("\nYou won!");
			total = amountBet * 36;
		}
	}
	else if (bet == 2)                                              //bet option 2 even or odd
	{
		if (choice == 1)
		{
			if (random %2==0)
			{
				printf("\nYou won!");
				total = amountBet * 2;
			}
			else if (choice == 2)
		{
			if (random %2!=0)
			{
				printf("\nYou won!");
				total = amountBet * 2;
			}
		}	
		}	
	}
	else if (bet == 3) 												 //bet option 2 even or odd
	{
		if ( choice == 1)
		{ 
			if (random >=1 && random <= 12)
			{
				printf("\nYou won!");
				total = amountBet * 3;
			}
		}
		
	
		else if (choice == 2)
		{
			if (random >=13 && random <= 24)
			{
				printf("\nYou won!");
				total = amountBet * 3;
			}
		}
	
		else if (choice == 3)
		{
			if (random >=25 && random <= 36)
			{
				printf("\nYou won!");
				total = amountBet * 3;
			}	
		}
	}

	if (total==0)
		{ 
		printf("\nSorry You lost");
		}
	else
	{
		printf("\nYou have won %d", total);
		
	}
}

	
			//if (choice<0 || choice>36)
			//printf("It is not an Even or Odd number within the valid option ");
			//else if(choice%2==0)
			//printf("\n you have chosen an Even Number");
			//else if (choice%2!=0)
			//printf("\n you have chosen an Odd Number");
	
