#include <stdio.h>
#include "common_functions.h"
#include "first_algorithm.h"
#include "second_algorithm.h"

int main()
{
    int rod_length, rod_pieces_prices[100], i;

    read_rod_length(&rod_length);
    printf("The rod length generated is: %d\n", rod_length);

    read_rod_pieces_prices(rod_pieces_prices, rod_length);
    for(i = 1; i <= rod_length; i++){
        printf("The price of the %d rod is: %d\n", i, rod_pieces_prices[i]);
    }

    printf("After we apply the first algorithm, we get that the maximum value obtainable is: %d \n", rod_cutting_first_algorithm(rod_pieces_prices, rod_length));
    printf("After we apply the second algorithm, we get that the maximum value obtainable is: %d", rod_cutting_second_algorithm(rod_pieces_prices, rod_length));

    return 0;
}

