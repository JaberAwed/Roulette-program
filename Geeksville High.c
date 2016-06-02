//Jaber Awed
//Geekville High School

#include <stdio.h>

int main()

{
	
	int html, java, cplus, csign, javascript, php, python;
	int tstudents, weblang, orilang;

	printf("Welcome to the Geekville Programming Survey\n\n");
	printf("Please enter the total number of students who know:\n\n");
	

    printf("HTML:\t");
	scanf("%d", &html);

	printf("Java:\t");
	scanf("%d", &java);

	printf("C+:\t");
	scanf("%d", &cplus);

	printf("C#:\t");
	scanf("%d", &csign);

	printf("Javascript:\t");
	scanf("%d", &javascript);

	printf("PHP:\t");
	scanf("%d", &php);

	printf("Python:\t");
	scanf("%d", &python);
	
	tstudents= html + java + cplus + csign + javascript + php + python;
	weblang= html+ javascript + php;
	orilang= java + cplus + csign + python;
	
	printf("\nTotal Students: %d", tstudents);
	
	printf("\nTotal who know Web Langauges: %d", weblang);
	
	printf("\nTotal who know Object Oriented Languages: %d", orilang);
	

	
	return 0;	
	
		
	
}
