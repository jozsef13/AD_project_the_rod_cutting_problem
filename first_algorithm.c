#include "common_functions.h"
#include "first_algorithm.h"

int rod_cutting_first_algorithm(int rod_pieces_prices[], int rod_lenght)
{
    int i, j;
    int maximum_prices[rod_lenght];
    int max_value;

    maximum_prices[1] = rod_pieces_prices[1];

    for(i = 2; i <= rod_lenght; i++){
        max_value = -1;
        for(j = 1; j <= i; j++){
            if(i != j){
                max_value = maximum_value(max_value, rod_pieces_prices[j] + maximum_prices[i-j]);
            }
            else{
                max_value = maximum_value(max_value, rod_pieces_prices[j]);
            }
        }

        maximum_prices[i] = max_value;
    }

    return maximum_prices[rod_lenght];
}

