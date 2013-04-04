/*
** exit_write.c for exit_write in /home/benzah_m//svn/git@github.com:1475963/lem-out.git/common
** 
** Made by marc benzahra
** Login   <benzah_m@epitech.net>
** 
** Started on  Thu Apr  4 13:47:33 2013 marc benzahra
** Last update Thu Apr  4 13:59:42 2013 marc benzahra
*/

#include <stdlib.h>

void	exit_write(char *str)
{
  my_voidputstr(str);
  my_putchar('\n');
  exit(EXIT_FAILURE);
}
