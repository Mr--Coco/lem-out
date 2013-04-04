/*
** my_voidputstr.c for my_voidputstr in /home/benzah_m//svn/git@github.com:1475963/lem-out.git/common
** 
** Made by marc benzahra
** Login   <benzah_m@epitech.net>
** 
** Started on  Thu Apr  4 13:53:32 2013 marc benzahra
** Last update Thu Apr  4 14:03:58 2013 marc benzahra
*/

void	my_voidputstr(char *str, int fd)
{
  if (!*str)
    return ;
  else
    my_putchar(*str++, fd);
  my_voidputstr(str, fd);
}
