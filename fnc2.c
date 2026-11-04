#include <stdio.h>
#include <cs50.h>
float discount(float price, int percent);
int main(void){

   float regular = get_float("regular price: ");
   int percent = get_int("percent of: ");
   float sale = discount(regular, percent);
   printf("sale price: %.2f\n", sale);



}
float discount(float price, int percent) {
    float discount_amount = price * (percent / 100.0);
    return price - discount_amount;
}