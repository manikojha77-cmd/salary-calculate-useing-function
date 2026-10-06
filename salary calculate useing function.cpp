#include<stdio.h>
void salary_calculate(float n);
int main()
{
	float n;
	printf("Enter the Annual salary:");
	scanf("%f",&n);
	salary_calculate(n);
	return 0;
}
void salary_calculate(float n)
{
	float tax,af;
	if(n<=40000)
		tax=0;
	else if(n<=800000)
	tax=n*(5.0/100);
	else if(n<=1200000)
	tax=n*(10.0/100);
	else if(n<=1600000)
	tax=n*(15.0/100);
	else if(n<=2000000)
	tax=n*(20.0/100);
	else if(n<=2400000)
	tax=n*(25.0/100);
	else
	tax=n*(30.0/100);
	af=n-tax;
	printf("\n");
	printf("    ");
	printf("\n");
	printf("Total salary = %.2f\n",n);
	printf("Percentage of tax apply over salary = %.0f\n",(tax/n)*100);
	printf("Total Income tax over Total salary = %.2f\n",tax);
	printf("Salary after Income tax = %.2f\n",af);
	
}
