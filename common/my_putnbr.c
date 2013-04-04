/*
** my_putnbr.c for my_putnbr in /home/evanno_c/
** 
** Made by corentin evanno
** Login   <evanno_c@epitech.net>
** 
** Started on  Sat Mar 16 10:06:03 2013 corentin evanno
** Last update Thu Apr  4 14:25:10 2013 corentin evanno
*/
int	my_putnbr(int nb)
{
  int	start;
  int	div;

  start = nb % 10;
  div = nb / 10;
  if (nb < 0)
    {
      my_putchar('-');
      start = start * -1;
      div = div * -1;
    }
  if (div)
    my_putnbr(div);
  my_putchar(start + 48);
}
