#include <stdio.h>
#include <cs50.h>
void drw(int h);
int main(void){
  int height = get_int("Height: ");
  drw(height);

}
void drw(int h){
    if (h <= 0){
        return;
    }
    drw( h - 1);
for (int i = 0; i < h; i++){
      printf("#");
    }
    printf("\n");
  }
