#include <stdio.h>

/* print Fahrenheit-Celcius table
   for fahr = 0, 20, ..., 300 */
int main()
{
	int fahr, celcius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature */
	upper = 300; 	/* upper limit */
	step = 20; 		/* step size */
	
	printf("Temperature Conversion Table\n");
	printf("F \tC \n");
	printf("--------------\n");
	
	fahr = lower;
	while (fahr <= upper) {
		celcius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celcius);
		fahr = fahr + step;
	}
}

