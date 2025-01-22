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
 * functions to analyze array of unsigned char data items and report various analytics
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

  printf("test");
}

void print_statistics(unsigned char* array, unsigned int size)
{
	/*Implementation*/
}	


void print_array(unsigned char* array, unsigned int size)
{
	/*Implementaion*/
}

unsigned char find_median(unsigned char* array, unsigned int size)
{
	return -1;
}

unsigned char find_mean(unsigned char* array, unsigned int size)
{
	return -1;
}

unsigned char find_maximum(unsigned char* array, unsigned int size)
{
	return -1;
}

unsigned char find_minimum(unsigned char* array, unsigned int size)
{
	return -1;
}

unsigned char sort_array(unsigned char* array, unsigned int size)
{
	return *array;
}

