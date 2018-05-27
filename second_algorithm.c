#include "second_algorithm.h"
#include "common_functions.h"

///a second algorithm with a recursive implementation of dynamic programming
int rod_cutting_second_algorithm(int rod_pieces_prices[], int rod_length)
{
    ///variable used to calculate the maximum value at each step
    int max_value;
    int i;

    ///the stopping statement
    if(rod_length <= 0){
        return 0;
    }

    max_value = -1000;
    ///algorithm implementation recursively
    for(i = 1; i <= rod_length; i++){
        max_value = maximum_value(max_value, rod_pieces_prices[i] + rod_cutting_second_algorithm(rod_pieces_prices, rod_length - i));

    }

    return max_value;
}
