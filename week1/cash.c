#include <cs50.h>
#include <stdio.h>

int change;
int answer = 0;
int quarters;
int dimes2;
int fifths;
int singles;

int calculate_quarters(int cents)
{
    int reps;
    reps = cents / 25;
    return reps;
}

int calculate_dimes(int dimes)
{
    int ten;
    ten = dimes / 10;
    return ten;
}

int calculate_fives(int fives)
{
    int fingers;
    fingers = fives / 5;
    return fingers;
}

int main(void)
{

    change = get_int("enter amount of change\n");
    if (change >= 1)
    {
        while (change != 0)
        {
            quarters = calculate_quarters(change);
            answer = answer + quarters;
            change = change - (25 * quarters);
            dimes2 = calculate_dimes(change);
            answer = answer + dimes2;
            change = change - (10 * dimes2);
            fifths = calculate_fives(change);
            change = change - (5 * fifths);
            answer = answer + fifths;
            answer = answer + change;
            change = change - change;
            printf("change owed: %d\n", answer);
            printf("change = %d\n", change);
        }
    }
    else
    {
        change = get_int("enter amount of change\n");
    }
}
