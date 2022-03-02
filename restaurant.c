/*
Include Headers

Declare main that will have will accept command line arguments
    Declare  and initialize an Array of food name
    Declare  and initialize an Array of prices
    Declare  time_t
    Declare tax, tip, total


    Init random number generator

    Validate the command line input (invalid numbers of argument and negative)

        Randomly choose a meal

        Compute tax, tip, and total

        Display the meal cost
        Display the tax amount
        Display the tip amount 
        Display the total cost

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char *argv[]){
    const char *menu[] = {"Salad", "Soup", "Sandwich", "Pizza"};
    const float price[4] = {9.95, 4.55, 13.25, 22.35};
    time_t t;
    float tax, tip, total;
    int mealNumber;

    

    srand((unsigned) time(&t));


    if(argc != 3){
        printf("Invalid numbers of input\n");
    }
    else{
        tax = atof(argv[1]);
        tip = atof(argv[2]);

        if (tax < 0 || tip < 0){
            printf("Tax or Tip cannot be negative\n");

        }
        else{
            mealNumber = rand () % 4;
            tax = price[mealNumber] / 100 * tax;
            tip = price[mealNumber] /100 * tip;
            total = tax + tip + price[mealNumber];
            printf("%s($%.2f), tax: $%.2f, tip: $%.2f, total: $%.2f\n\n",menu[mealNumber],price[mealNumber],tax,tip,total );
            

        }
    }

    return(0);
}

