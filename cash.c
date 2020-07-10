#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{ 
    float dollars;
    int cents;
    int coins;
    
    //find out how much is owed
    
    do
    {
    dollars = get_float("change owed: ");
    }
    while (dollars < 0);
    
    //find out how many coins are needed
    
    cents = round(dollars * 100);
    coins = 0;
    
    coins += cents / 25;
    cents %= 25;
    coins += cents / 10;
    cents %= 10;
    coins += cents / 5;
    cents %= 5;
    coins += cents / 1;
    cents %= 1;
    
    printf("%i\n", coins);
    
}

