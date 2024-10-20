#include<stdio.h>
#include<conio.h>

int main()
{
float  fahrenheit, celsius;
printf("Enter tamrature in fahrenheit: ");
scanf("%f", &fahrenheit);

celsius = (fahrenheit - 32 ) * 9 / 5;
printf("%f fahrenheit = %f celsius\n", fahrenheit, celsius );
getch();

return 0;







}