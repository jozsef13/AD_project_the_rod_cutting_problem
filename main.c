#include <stdio.h>
#include "common_functions.h"
#include "first_algorithm.h"

int main()
{
    int rod_length, rod_pieces_prices[1000];
    
    read_rod_lenght(&rod_lenght);
    read_rod_pieces_prices(rod_pieces_prices, rod_lenght);
    printf("%d", rod_cutting_first_algorithm(rod_pieces_prices, rod_lenght));
    
    return 0;
}
