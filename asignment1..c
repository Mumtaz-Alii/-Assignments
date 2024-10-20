#include<stdio.h>
#include<conio.h>
int main()
{
float celsius, fahrenheit;
printf("Enter tamrature in celsius: ");
scanf("%f", &celsius);

fahrenheit = (celsius * 9 / 5) + 32;
printf("%f celsius = %f fahrenheit\n", celsius, fahrenheit );
getch();
return 0;







}