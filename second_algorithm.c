#include "second_algorithm.h"
#include "common_functions.h"
///a second algorithm with an interative implementation of dynamic programming
int rod_cutting_second_algorithm(int rod_pieces_prices[], int rod_lenght)
{
    ///array used for calculatig the maximum prices you get when cutting the rod
    int maximum_prices[1000];
    ///variable used to calculate the maximum value at each step
    int max_value; 
    int j, i;
    ///initialization of the maximum price until the first cutting with 0
    maximum_prices[1] = 0; 
    ///algorithm implementation
    for(j = 2; j <= rod_lenght; j++){
        max_value = -1000;
        ///calculation of the maximum value until we get to the j rod,in order to observ which is the best way to cut it       
        for(i = 2; i <= j; i++){
            if(max_value < rod_pieces_prices[i] + maximum_prices[j - i]){
                max_value = rod_pieces_prices[i] + maximum_prices[j - i];
            }
        }
        ///the maximum price until j is calculated and saved on the j position
        maximum_prices[j] = max_value;
    }

    return maximum_prices[rod_lenght];
}

