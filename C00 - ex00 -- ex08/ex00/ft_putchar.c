#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1); // The right Function works
}

/* Exclude the main function to send to Molinet. It's just to you test you code.
/ You can compile you code with cc and run with a.out. Where a.out can be the standard
/ name to you file OR you could use "cc -c myexec myexec.c" to choose a name.
/int main(void)
/{
/
/    ft_putchar('c');
/}*/