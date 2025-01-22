/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Implementation file for C1M1
 *
 * First assignment of Introduction to Embedded Systems; Includes eight
 * functions to analyze array of unsigned char data items and report various
 * analytics. The focus is practice with version control and command line
 * interface, not optimization of functions.
 *
 * @author Sarah Rerecich
 * @date January 21st 2025
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  print_statistics(test, SIZE);

}

void print_statistics(unsigned char* array, unsigned int size)
{
	printf("\n---------------------------------------\n");
	printf("-------------Array Statistics----------\n");
	printf("---------------------------------------\n");

	printf("Original array: \n");
	print_array(array, size);
	printf("\nSorted array: \n");
	sort_array(array, size);
	print_array(array, size);

	/*Run everything*/
	unsigned char median = find_median(array, size);
	unsigned char minimum = find_minimum(array, size);
	unsigned char maximum = find_maximum(array, size);
	unsigned char mean = find_mean(array, size);

	printf("\nMinimum = %u\n", minimum);
	printf("\nMaximum = %u\n", maximum);
	printf("\nMedian = %u\n", median);
	printf("\nMean = %u\n", mean);
	printf("---------------------------------------\n");

}	


void print_array(unsigned char* array, unsigned int size)
{
	int i;

	for (i = 0; i < size; i++) {
		printf("%u", *(array + i));
		if (i < size - 1) {
			printf(", ");
		}
	}
	printf("\n");

}

unsigned char find_median(unsigned char* array, unsigned int size)
{
	int index = size/2;
	unsigned char median;
	unsigned char temp[2];

	sort_array(array, size);

	if(size % 2 == 0) {
		temp[0] = array[index - 1];
		temp[1] = array[index];
		median = find_mean(temp, 2);
	}

	else {
		median = array[index];
	}


	return median;
}

unsigned char find_mean(unsigned char* array, unsigned int size)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < size; i++) {
		sum += array[i];
	}

	unsigned char mean = (unsigned char)((sum + (size / 2)) / size); // Rounding
	return mean;
}

unsigned char find_maximum(unsigned char* array, unsigned int size)
{
	sort_array(array, size);
	return array[size - 1];
}

unsigned char find_minimum(unsigned char* array, unsigned int size)
{
	sort_array(array, size);
	return array[0];
}

unsigned char* sort_array(unsigned char* array, unsigned int size)
{
	/*Using the quicksort algorithm*/
	quickSort(array, 0, size - 1);

	return array;
}

/* Quicksort Helper Functions*/
/*----------------------------------------------------------------*/
void swap (unsigned char *a, unsigned char *b)
{
	unsigned char temp = *a;
	*a = *b;
	*b = temp;
}

int partition(unsigned char *array, int low, int high)
{
	unsigned char pivot = array[high]; //last item in array
	int left = low - 1; //index of smaller element
	
	for (int right = low; right < high; right++) {
		if (array[right] <= pivot) {
			left++;
			swap(&array[left], &array[right]);
		}
	}
	swap(&array[left + 1], &array[high]);

	return left+1;
}

void quickSort(unsigned char *array, int low, int high)
{
	if (low < high) {
		int split = partition(array, low, high);
		quickSort(array, low, split-1);
		quickSort(array, split + 1, high);
	}
}
