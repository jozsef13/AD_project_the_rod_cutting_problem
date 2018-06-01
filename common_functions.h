///\file common_functions.h
///\brief C library for functions used in every c file
///
/// Created by Simon Jozsef-Gabriel on  28/05/18
/// Implements the reading of a variable and array, and maximum between two values

#ifndef COMMON_FUNCTIONS_H_
#define COMMON_FUNCTIONS_H_

void read_rod_length(int *rod_length);
void read_rod_pieces_prices(int rod_pieces_prices[], int rod_length);
int maximum_value(int first_value, int second_value);

#endif // COMMON_FUNCTIONS_H
