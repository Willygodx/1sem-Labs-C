#include <stdio.h>
#include "error.h"

int main(void) {
    int h, r;
    double sb, sp, v, pi = 3.141592653589;
    printf("Height: ");
      while (scanf("%d", &h) < 1)
       ErrorAndClean ();
    printf("Radius: ");
      while (scanf("%d", &r) < 1)
       ErrorAndClean();
     sb = 2 * pi * r * h;
     sp = sb + (2 * pi * (r * r));
     v = pi * (r * r) * h;
     if (sb >= 0 && sp >= 0 && v >= 0) {
          printf("\nArea of lateral surface of cylinder: %.2lf", sb);
          printf("\nArea of full surface of cylinder: %.2lf", sp);
          printf("\nVolume of cylinder: %.2lf", v);
      } else {
          printf("You can't put down a negative number!");
      }





    return 0;
}
