#include <stdio.h>
#include <stdlib.h>

void double_array(int number_array[], int array_size);

int main()
{
	int * pointer_to_array;
	int   number_of_ints_to_allocate;
	int   i;

	printf("how many elements do you want in your array? ");
	scanf("%i", &number_of_ints_to_allocate);

	pointer_to_array = malloc(sizeof(int) * number_of_ints_to_allocate);

	for (i = 0; i < number_of_ints_to_allocate; i++) {
		scanf("%i", &pointer_to_array[i]);
	}

	double_array(pointer_to_array, number_of_ints_to_allocate);

	printf("doubled array: ");
	for (i = 0; i < number_of_ints_to_allocate; i++) {
		printf("%i ", pointer_to_array[i]);
	}
	pritnf("\n");

	free(pointer_to_array);
}

void double_array(int number_array[], int array_size)
{
	int i;

	for (i = 0; i < array_size; i++) {
		number_array[i] *= 2;
	}
}

