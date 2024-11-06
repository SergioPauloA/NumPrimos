#include <stdio.h>
#include <stdbool.h>

int main() {
   int max = 10000;
   bool numPrimos[max + 1];

   for (int i = 0; i <= max; i++) {
      numPrimos[i] = true;
   }

   for (int i = 2; i * i <= max; i++) {
      if (numPrimos[i]) {
         for (int j = i; j <= max; j += i) {
            numPrimos[j] = false;
         }
      }
   }

   for (int i = 2; i <= max; i++) {
      if (numPrimos[i]) {
         printf("%d\n", i);
      }
   }

   return 0;
   
}