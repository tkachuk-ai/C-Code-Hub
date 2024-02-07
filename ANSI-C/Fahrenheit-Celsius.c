#include <stdio.h>

/* print Fahrenheit-Celsius table 
   for afhr = 0, 20, ..., 300 */

int main(){
    int fahr, celsius; // Initialized two types of temperature
    int lower, upper, step; // Initialized lower and upper bound, as well as difference 

    lower = 0; // Lower bound
    upper = 300; // Upper bound 
    step = 20; // Difference 

    fahr = lower; // Assigns initial Fahrenheit degree to 0

    while (fahr <= upper) { // Until Fahrenheit degree doesn't reach upper bound:     
        celsius = 5 * (fahr - 32) / 9;  // Calculate corresponding Celsius degree
        printf("%d\t%d\n", fahr, celsius); // Print the results 
        fahr = fahr + step; // Increment next Fahrenheit degree by 20
    }
}
