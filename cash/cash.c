#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;

    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    int quarters = change / 25;
    change = change % 25;
    int dimes = change / 10;
    change = change % 10;
    int nickels = change / 5;
    change = change % 5;
    int pennies = change;

    int total_coins = quarters + dimes + nickels + pennies;

    printf("%i\n", total_coins);
}
