# CS50
Repository for cs50
#include<cs50.h>
#include<stdio.h>

float getprise(void);

int main(void)
{
   // float cash = get_float("Summ is: ");
   getprise();
}

float getprise(void)
{
    float prise = get_float("Prise is: ");
    //printf("prise is: %.2f\n", prise);
    //return prise;
    float cash = get_float("cash is: ");
    printf("cash is: %.2f\n", cash);
    //return cash;
    float odds = cash*100 - prise*100;
    //printf("odds is: %.0f\n", odds);
    float quater = 25;
    float ten = 10;
    float five = 5;
    float penny = 1;
    float owed = 0;
    float i = 0;
    do
    {
        if ( odds >=  quater)
        {
            odds -= quater;
            owed++;
            i += quater;
        }
        if (odds >= ten)
        {
           odds -= ten;
            owed++; 
            i += ten;
        }
         if (odds >= five)
        {
           odds -= five;
            owed++; 
            i += five;
        }
        else
            odds -= penny;
            owed++;
            i += penny;
    }
    while(i <= owed);
    printf("Change owed is: %.0f\n", owed);
    return 0;
}
