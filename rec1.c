#include <stdio.h>
#include <cs50.h>
void drw(int h);
int main(void){
  int height = get_int("Height: ");
  drw(height);

}
void drw(int h){
  for (int i = 0; i < h; i++){
    for (int j = 0; j < i + 1; j++){
      printf(" # ");
    }
    printf("\n");
  }
}