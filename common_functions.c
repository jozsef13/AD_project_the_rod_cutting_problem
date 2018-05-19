#include <stdio.h>
#include "common_functions.h"

void read_rod_lenght(int *rod_length)
{
    printf("Enter the length of the rod: ");
    scanf("%d", &*rod_length);
}

void read_rod_pieces_prices(int rod_pieces_prices[], int rod_length)
{
    int i;

    printf("Enter the prices of pices: ");

    for(i = 1; i <= rod_length; i++){
        printf("rod_pieces_prices[%d]=", i);
        scanf("%d", &rod_pieces_prices[i]);
    }
}

int maximum_value(int first_value, int second_value)
{
    if(first_value > second_value){
        return first_value;
    }
    else{
        return second_value;
    }
}

