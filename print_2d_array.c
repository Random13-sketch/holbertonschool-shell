#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for 2D array printing program
 *
 * Description: This program prompts the user to enter the dimensions
 * of a 2D array (rows and columns), then asks for the elements,
 * and finally prints the array in a formatted manner.
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	int rows, cols, i, j;
	int **array;

	/* Get array dimensions from user */
	printf("Enter number of rows: ");
	if (scanf("%d", &rows) != 1 || rows <= 0)
	{
		fprintf(stderr, "Error: Invalid number of rows\n");
		return (1);
	}

	printf("Enter number of columns: ");
	if (scanf("%d", &cols) != 1 || cols <= 0)
	{
		fprintf(stderr, "Error: Invalid number of columns\n");
		return (1);
	}

	/* Allocate memory for 2D array */
	array = (int **)malloc(rows * sizeof(int *));
	if (array == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed\n");
		return (1);
	}

	for (i = 0; i < rows; i++)
	{
		array[i] = (int *)malloc(cols * sizeof(int));
		if (array[i] == NULL)
		{
			fprintf(stderr, "Error: Memory allocation failed\n");
			/* Free previously allocated memory */
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (1);
		}
	}

	/* Get array elements from user */
	printf("\nEnter array elements:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("Element [%d][%d]: ", i, j);
			if (scanf("%d", &array[i][j]) != 1)
			{
				int k;

				fprintf(stderr, "Error: Invalid input\n");
				/* Free allocated memory */
				for (k = 0; k < rows; k++)
					free(array[k]);
				free(array);
				return (1);
			}
		}
	}

	/* Print the 2D array */
	printf("\nThe 2D array is:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

	/* Free allocated memory */
	for (i = 0; i < rows; i++)
		free(array[i]);
	free(array);

	return (0);
}
