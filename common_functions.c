///\file common_functions.c
///\brief C library implementation for functions used in each .c files
///
/// Created by Simon Jozsef-Gabriel on  28/05/18
/// Implements the reading of a variable and array, and maximum between two values

#include <stdio.h>
#include <time.h> ///>rand()
#include "common_functions.h"

/// Generetator for the length of the rod
void read_rod_length(int *rod_length)
{
    ///\fn void read_rod_length()
    ///\brief Generates the length of the rod
    ///\param rod_length Integer for the length of the rod

    srand((unsigned) time(NULL));

    *rod_length = rand() % 30 + 1;
}

/// Generator for prices of the rod pieces
void read_rod_pieces_prices(int rod_pieces_prices[], int rod_length)
{
    ///\fn void read_rod_pieces_prices()
    ///\brief Generates the prices for each piece cut from the rod
    ///\param rod_pieces_prices[] Integer array for prices of each piece of the rod
    ///\param rod_length Integer for the length of the rod
    ///\var i An iterator

    int i;

    srand((unsigned) time(NULL));

    for(i = 1; i <= rod_length; i++){
        rod_pieces_prices[i] = rand() % 100 + 1;
    }
}

/// Maximum value between two variable function
int maximum_value(int first_value, int second_value)
{
    ///\fn void maximum_value()
    ///\brief Returns the maximum value between two integers
    ///\param first_value First integer
    ///\param second_value Second integer

    if(first_value > second_value){
        return first_value;
    }
    else{
        return second_value;
    }
}
