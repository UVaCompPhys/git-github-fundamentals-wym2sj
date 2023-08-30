#include <stdio.h>
#include <math.h>

int main() {
  int n = 1;
  double r = 1;
  double volume;

  while n < 51 {
      while r < 2 {
	  volume = ((pow(3.14, n/2))/(tgamma(n/2)))*pow(r,n);
	  r += 0.05
      }
      n += 1
}
