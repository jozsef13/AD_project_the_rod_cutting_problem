#include <stdio.h>
#include <time.h>
#include "common_functions.h"

///generetator for the length of the rod
void read_rod_length(int *rod_length)
{
    time_t t;
    srand((unsigned) time(&t));

    *rod_length = rand() % 30 + 1;
}

///generator for prices of the rod pieces
void read_rod_pieces_prices(int rod_pieces_prices[], int rod_length)
{
    int i;
    time_t t;
    srand((unsigned) time(&t));

    for(i = 1; i <= rod_length; i++){
        rod_pieces_prices[i] = rand() % 100 + 1;
    }
}

///maximum value between two variable function
int maximum_value(int first_value, int second_value)
{
    if(first_value > second_value){
        return first_value;
    }
    else{
        return second_value;
    }
}
