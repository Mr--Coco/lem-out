/*
** exit_error.c for exit_error in /home/benzah_m//svn/git@github.com:1475963/lem-out.git/common
** 
** Made by marc benzahra
** Login   <benzah_m@epitech.net>
** 
** Started on  Thu Apr  4 13:45:42 2013 marc benzahra
** Last update Thu Apr  4 14:00:03 2013 marc benzahra
*/

#include <stdlib.h>

void	exit_error(char *function, char *file, char *block)
{
  my_voidputstr("/!\\ ");
  my_voidputstr(function);
  my_voidputstr(" failed /!\\\n");
  my_voidputstr("file : ");
  my_voidputstr(file);
  my_putchar('\n');
  my_voidputstr("function : ");
  my_voidputstr(block);
  my_putchar('\n');
  exit(EXIT_FAILURE);
}
