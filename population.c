#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int x;
   
   do
    {
        x = get_int("Starting Population: ");
    }
    while (x < 9);

    int y;
    
    do
    {
        y = get_int("Ending Population: ");
    }
    while (y < x);

    // Establish the starting point for the counter
    int counter = 0;
    
    // Continuously add birth rate and subtract death rate until starting is less than ending
    while (x < y)
    {
        x = x + (x / 3) - (x / 4);
        counter++;
    }
    
    printf("Years: %i\n", counter);
}
