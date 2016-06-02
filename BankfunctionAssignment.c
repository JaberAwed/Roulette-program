//Jaber Awed
//Bank function Assignment

#include <stdio.h>


float getDeposit(float);          
float getWithdraw(float);
char menu();
void displayBalance(float);


int main()

{
	float  balance=500;
	int num = 1;
	char letterInput;	
	
	letterInput=menu();
		

	do
		
{
	
			
		switch (letterInput)
	
	{
		case 'D': case 'd': 									//deposit
			balance = getDeposit(balance);
			letterInput=menu();
			break;
			
		case 'W': case 'w':  									//withdraw
		balance= getWithdraw(balance);		
			letterInput=menu();
			break;
	
		case 'B': case 'b': 									//displaybalance
			displayBalance(balance);
			letterInput=menu();
			break;
		
		case 'Q': case 'q': 									//quit
			printf("\n				Thank you!");
			num = 0;
			break;
			
			default:											//invalid 
			printf("\n			Incorrect charecter");
			letterInput=menu();
	}
		
  }
	
			while (num == 1) ;
	
			return 0;
	
}

			float getDeposit(float balance)									//deposit amount
	
	{
			float deposit;
	
			printf("\n			How much would you like to deposit?\t");
			scanf("%f", &deposit);
			if (deposit>0)
			balance += deposit;
	else printf("\n			You must deposit a positive amount!");
			return balance;
		
		
	}
	
			float getWithdraw(float balance)										//withdraw amount
	
	{
			float withdraw;
	
			printf("\n			How much would you like to withdraw?\t");
			scanf("%f", &withdraw);
			
			if (withdraw > balance)
			{
				printf("\n			insuffecient funds");
				
			}
			if (withdraw>0)
			
			
			balance += withdraw;
			else printf("\n			You must withdraw a positive amount!");
		
			return balance;
		
	}
	 
	 		void displayBalance(float balance)
	 
	 {
	 			
	 		
	 		printf("\n			balance is %.2f", balance);
	 	
	 	
	 }
	 
			char menu()
	
	 {
	 	
			char letterInput;
	
			printf("\n\n			Welcome to HFC Federal Credit Union !");                //menu
			printf("\n\n			Please select from the following menu:");
			printf("\n\n			D:	Make a deposit");
			printf("\n			W:	Make a withdraw");
			printf("\n			B:	Check your account balance");
			printf("\n			Q:	To quit");
	
			printf("\n\n			Choose your option\t");       //input letter
		    scanf("\n%c", &letterInput);
	
			return letterInput;
    } 
	



