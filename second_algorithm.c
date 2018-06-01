///\file second_algorithm.c
///\brief C library implementation for the second algorithm function
///
/// Created by Simon Jozsef-Gabriel on  28/05/18
/// Implements the second algorithm of rod cutting problem

#include "second_algorithm.h"
#include "common_functions.h"
#define MIN -1000
///\def #define MIN -1000
///\brief Define the minimum number possible as -1000
///
/// A second algorithm with a recursive implementation of dynamic programming
int rod_cutting_second_algorithm(int rod_pieces_prices[], int rod_length)
{
    ///\fn void rod_cutting_first_algorithm(int rod_pieces_prices[], int rod_length)
    ///\brief Returns the maximum revenue obtainable by cutting up the rod and selling the pieces
    ///\param rod_pieces_prices[] Integer array for prices of each piece of the rod
    ///\param rod_length Integer for the length of the rod
    ///\var max_value An integer user to calculate the maximum value at each step
    ///\var i An iterator
    ///
    /// Variable used to calculate the maximum value at each step
    int max_value;
    int i;

    /// The stopping statement
    if(rod_length <= 0){
        return 0;
    }

    max_value = MIN;
    /// Algorithm implementation recursively
    for(i = 1; i <= rod_length; i++){
        max_value = maximum_value(max_value, rod_pieces_prices[i] + rod_cutting_second_algorithm(rod_pieces_prices, rod_length - i));

    }

    return max_value;
}
