/*
** my_putchar.c for my_putchar in /home/benzah_m//svn/git@github.com:1475963/lem-out.git/common
** 
** Made by marc benzahra
** Login   <benzah_m@epitech.net>
** 
** Started on  Thu Apr  4 13:51:57 2013 marc benzahra
** Last update Thu Apr  4 13:52:46 2013 marc benzahra
*/

void	my_putchar(char c, int fd)
{
  if (write(fd, &c, 1) == -1)
    exit_error("write", "my_putchar.c", "my_putchar");
  return ;
}
