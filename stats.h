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
 * @file stats.h 
 * @brief Header file for stats.c implementation 
 *
 * First assignment of Introduction to Embedded Systems; Includes function
 * headers and descriptions for all functions listed in stats.c
 *
 * @author Sarah Rerecich
 * @date January 21st 2025
 *
 */

#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print statistics
 *
 * Prints statistics of an array, including min, max, mean, median
 *
 * @param array:	unsigned char pointer to n-element data array
 * @param size:		unsigned int, size of array 
 *
 * @return void		returns nothing, prints statistics to console
 */
void print_statistics(unsigned char * array, unsigned int size);



/**
 * @brief Print given array
 *
 * Prints contents of array given pointer to array and size of array
 *
 * @param array:        unsigned char pointer to n-element data array
 * @param size:         unsigned int, size of array 
 *
 * @return void         returns nothing, prints statistics to console
 */
void print_array(unsigned char * array, unsigned int size);



/**
 * @brief Find median of given array
 *
 * Given array of data and its length, prints and returns median value
 *
 * @param array:        unsigned char pointer to n-element data array
 * @param size:         unsigned int, size of array
 *
 * @return median:      returns median, prints result to console
 */
unsigned char find_median(unsigned char* array, unsigned int size);



/**
 * @brief Find mean of given array
 *
 * Given array of data and its length, prints and returns mean value
 *
 * @param array:        unsigned char pointer to n-element data array
 * @param size:         unsigned int, size of array
 *
 * @return mean:        returns mean, prints result to console
 */
unsigned char find_mean(unsigned char* array, unsigned int size);



/**
 * @brief Find maximum of given array
 *
 * Given array of data and its length, prints and returns maximum value
 *
 * @param array:        unsigned char pointer to n-element data array
 * @param size:         unsigned int, size of array
 *
 * @return maximum:     returns maximum value, prints result to console
 */
unsigned char find_maximum(unsigned char* array, unsigned int size);



/**
 * @brief Find minimum of given array
 *
 * Given array of data and its length, prints and returns minimum value
 *
 * @param array:        unsigned char pointer to n-element data array
 * @param size:         unsigned int, size of array
 *
 * @return minimum:     returns minimum, prints result to console
 */
unsigned char find_minimum(unsigned char* array, unsigned int size);



/**
 * @brief Sort array from largest to smallest
 *
 * Given array of data and its length, sorts values from largest to 
 * smallest and returns updated array
 *
 * @param array:        unsigned char pointer to n-element data array
 * @param size:         unsigned int, size of array
 *
 * @return sorted:      returns sorted array
 */
unsigned char sort_array(unsigned char* array, unsigned int size);


#endif /* __STATS_H__ */
