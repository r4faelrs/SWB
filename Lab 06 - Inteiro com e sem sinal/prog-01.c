#include <stdio.h>

//Prog1
/*int main (void) {

  unsigned int x = 0xffffffff;

  unsigned int y = 2;

  printf("x = %d, y = %d\n", x, y);

  printf("x é menor do que y? %s\n", (x<y) ? "sim" : "não");

  return 0;

}
*/
//Prog2
/*int main (void) {

  int x = 0xffffffff;

  int y = 2;

  printf("x = %d, y = %d\n", x, y);

  printf("x é menor do que y? %s\n", (x<y) ? "sim" : "não");

  return 0;

}
*/
//Prog3
#include <stdio.h>


int main (void) {

  int x = 0xffffffff;

  unsigned int y = 2;

  printf("x = %d, y = %d\n", x, y);

  printf("x é menor do que y? %s\n", (x<y) ? "sim" : "não");

  return 0;

}