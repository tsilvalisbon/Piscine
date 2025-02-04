#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char letter;
	
	letter = 'z';
	while (letter >= 'a')
		{
			write(1, &letter, 1);
			letter--;
		}
}
/*
	void ft_print_reverse_alphabet(void)
	{
	write (1,zyxwvutsrqponmlkjihgfedcba, 26);
	}
int main()
{
	ft_print_reverse_alphabet();
}
*/
