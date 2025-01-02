#include <unistd.h>

void ft_print_alphabet(void) {
  char letter;

  letter = 'a';

  while (letter <= 'z') {
    write(1, &letter, 1);
    letter++;
  }
}

/*
#include <unistd.h>

void ft_print_alphabet(void) { 
write(1, "abcdefghijklmnopqrstuvwxyz", 26); 
}

int main() { ft_print_alphabet(); }
*/
