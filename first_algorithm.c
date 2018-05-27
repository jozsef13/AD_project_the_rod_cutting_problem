#include "common_functions.h"
#include "first_algorithm.h"

///a first algorithm with an interative implementation of dynamic programming
int rod_cutting_first_algorithm(int rod_pieces_prices[], int rod_length)
{
    int i, j;

    ///array used for calculatig the maximum prices you get when cutting the rod
    int maximum_prices[rod_length];

    ///variable used to calculate the maximum value at each step
    int max_value;

    ///initialization of the maximum price until the first cutting with 0
    maximum_prices[1] = rod_pieces_prices[1];

    ///algorithm implementation
    for(i = 2; i <= rod_length; i++){
        max_value = -1;

        ///calculation of the maximum value until we get to the j rod,in order to observ which is the best way to cut it
        for(j = 1; j <= i; j++){
            if(i != j){
                max_value = maximum_value(max_value, rod_pieces_prices[j] + maximum_prices[i-j]);
            }
            else{
                max_value = maximum_value(max_value, rod_pieces_prices[j]);
            }
        }

        ///the maximum price until j is calculated and saved on the j position
        maximum_prices[i] = max_value;
    }

    return maximum_prices[rod_length];
}


