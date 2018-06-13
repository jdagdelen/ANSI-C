#include <stdio.h>

/* print Fahrenheit-Celcius table
   for fahr = 0, 20, ..., 300 */
int main()
{
	int fahr, celcius;
	int lower, upper, step;

	lower = -100;		/* lower limit of temperature */
	upper = 200; 	/* upper limit */
	step = 20; 		/* step size */
	
	printf("Temperature Conversion Table\n");
	printf("C \tF \n");
	printf("--------------\n");
	
	celcius = lower;
	while (celcius <= upper) {
		fahr = celcius * 9 / 5 + 32;
		printf("%d\t%d\n", celcius, fahr);
		celcius = celcius + step;
	}
}

