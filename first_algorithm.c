///\file first_algorithm.c
///\brief C library implementation for the first algorithm function
///
/// Created by Simon Jozsef-Gabriel on  28/05/18
/// Implements the first algorithm of rod cutting problem

#include "common_functions.h"
#include "first_algorithm.h"
#define MIN -1000
///\def #define MIN -1000
///\brief Define the minimum number possible as -1000
///
/// A first algorithm with an interative implementation of dynamic programming
int rod_cutting_first_algorithm(int rod_pieces_prices[], int rod_length)
{
    ///\fn void rod_cutting_first_algorithm(int rod_pieces_prices[], int rod_length)
    ///\brief Returns the maximum revenue obtainable by cutting up the rod and selling the pieces
    ///\param rod_pieces_prices[] Integer array for prices of each piece of the rod
    ///\param rod_length Integer for the length of the rod
    ///\var i An iterator
    ///\var j An iterator
    int i, j;

    ///\var maximum_prices Array integer that stores the maximum price you get for each cut of the rod
    ///
    /// Array used for calculatig the maximum prices you get when cutting the rod
    int maximum_prices[rod_length];

    ///\var max_value An integer usd to calculate the maximum value at each step
    ///
    /// Variable used to calculate the maximum value at each step
    int max_value;

    /// Initialization of the maximum price until the first cutting with 0
    maximum_prices[1] = rod_pieces_prices[1];

    /// Algorithm implementation
    for(i = 2; i <= rod_length; i++){
        max_value = MIN;

        /// Calculation of the maximum value until we get to the j rod,in order to observ which is the best way to cut it
        for(j = 1; j <= i; j++){
            if(i != j){
                max_value = maximum_value(max_value, rod_pieces_prices[j] + maximum_prices[i-j]);
            }
            else{
                max_value = maximum_value(max_value, rod_pieces_prices[j]);
            }
        }

        /// The maximum price until j is calculated and saved on the j position
        maximum_prices[i] = max_value;
    }

    return maximum_prices[rod_length];
}
