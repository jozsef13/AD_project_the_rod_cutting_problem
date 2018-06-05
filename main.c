///\file main.c
///\brief C program for the rod cutting problem
///
/// Created by Simon Jozsef-Gabriel on  28/05/18
/// The rod-cutting problem

#include <stdio.h> ///> printf()
#include "common_functions.h" ///> read_rod_length(), read_rod_pieces_prices()
#include "first_algorithm.h" ///> rod_cutting_first_algorithm()
#include "second_algorithm.h" ///> rod_cutting_second_algorithm()

int main()
{
    ///\fn int main()
    ///\brief Main funtion
    /// Functions calls of readding rod length and rod pieces prices from common_functions.h
    /// Functions calls of rod cutting algorithm from first_algorithm.h and second_algorithm.h
    ///\var rod_length A variable containing the total length of the rod
    ///\var rod_pieces_prices A variable containing the prices of each pieces of the rod
    ///\var i An interator
    int rod_length, rod_pieces_prices[1000], i;

    read_rod_length(&rod_length);

    read_rod_pieces_prices(rod_pieces_prices, rod_length);

    print_rod(rod_length, rod_pieces_prices);

    printf("\nAfter we apply the first algorithm, we get that the maximum value obtainable is: %d \n", rod_cutting_first_algorithm(rod_pieces_prices, rod_length));
    printf("After we apply the second algorithm, we get that the maximum value obtainable is: %d \n", rod_cutting_second_algorithm(rod_pieces_prices, rod_length));

    return 0;
}
