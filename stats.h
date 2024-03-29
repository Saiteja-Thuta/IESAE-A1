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
 * @brief Preforms statistical operations on an array of numbers
 *
 *
 * @author Saiteja Thuta
 * @date Dec 16, 2019
 *
 */

 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
void print_statistics(unsigned char *data, int length);
void print_array(unsigned char *data, int length);
unsigned char find_median(unsigned char *data, int length);
unsigned char find_mean(unsigned char *data, int length);
unsigned char find_maximum(unsigned char *data, int length);
unsigned char find_minimum(unsigned char *data, int length);
void sort_array(unsigned char *data, int length);


#endif /* __STATS_H__ */
