//Jaber Awed
//Statistical Analysis

#include <stdio.h>
#define MAX 10

void getData(int[]);
void displayData(int[]);
int displayLargest(int[] );
int displaySmallest(int []);
void displayAverage(int []);
void displayRange(int smallest,int largest);

int main()
{
	int average, sum;
	int smallest=0, largest=0;
	int data[MAX];
	getData(data);
	displayData(data);
	largest=displayLargest(data);
	smallest=displaySmallest(data);
	displayAverage(data);
	displayRange( smallest,largest);
	
}

void getData(int data[])                                //function to get the data
{
	int i;
	for	(i=0; i<MAX; ++i)
	{
		printf("Enter numbers to store into array\t");     //always printf and scanf
		scanf("%d", &data[i]);
	}
		
}

void displayData(int data[])					//function to display data
{
	int i;
	for	(i=0; i<MAX; ++i)
	printf("\n %d", data[i]);
}

int displayLargest(int data[])
{
	int i, largest=0;
	for(i=0; i<MAX; ++i)  
    {
       if(data[i]>largest) 
          largest=data[i];
     
          
    }
    printf("\nThe largest number is %d",largest);
	return largest;
}

int displaySmallest(int data[])
{
		int i, smallest;
	for(i=0; i<MAX; ++i)  
    {
       if(data[i]< smallest)
          smallest=data[i];
          
    }
    printf("\nThe smallest number is %d",smallest);
	
	return smallest;
}
void displayAverage(int data[])
{
	int i, average, sum=0;                       //add the equal to zero to make sure its clear to restart calculations.
	 for(i=0; i<MAX; ++i)
   {
      
      sum+=data[i];
	}
   average=sum/MAX;
   printf("\nThe Average is %d",average);
   
}
void displayRange(int smallest, int largest)
{
   int range;
   range=largest-smallest;
   
	printf("\nThe number ranges from %d", range);
	
}

