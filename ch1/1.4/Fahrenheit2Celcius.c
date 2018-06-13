#include <stdio.h>

#define LOWER 0		/* lower limit of temperature */
#define UPPER 300 	/* upper limit */
#define STEP 20 		/* step size */
	

/* print Fahrenheit-Celcius table
   for fahr = 0, 20, ..., 300 */
int main()
{
	int fahr, celcius;

	printf("Temperature Conversion Table\n");
	printf("F \tC \n");
	printf("--------------\n");
	
	fahr = LOWER;
	while (fahr <= UPPER) {
		celcius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celcius);
		fahr = fahr + STEP;
	}
}

