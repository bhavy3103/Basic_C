#include <stdio.h>
#include <stdlib.h>
int main()
{
	int age;
	int i, baby = 0, school = 0, adult = 0;
	int count = 0;

	while (count < 15)
	{
		printf("Enter age of person [%d]: ", count + 1);
		scanf("%d", &age);

		if (age >= 0 && age <= 5)
			baby++;
		else if (age >= 6 && age <= 17)
			school++;
		else
			adult++;

		// increase counter
		count++;
	}

	printf("Baby age: %d\n", baby);
	printf("School age: %d\n", school);
	printf("Adult age: %d\n", adult);

	return 0;
}