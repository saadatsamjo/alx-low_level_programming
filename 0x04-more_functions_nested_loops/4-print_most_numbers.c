#include "main.h"

int main(void)
{
  void print_most_numbers(void)
  {
    for (int N =0; N <= 9; N++)
      {
	if (N == 2 || N == 3)
	  {
	    continue;
	  }
	else
	  {
	    _putchar(N);
	  }
      }
    _putchar("\n");
  }
}
