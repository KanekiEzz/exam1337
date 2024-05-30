/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaneki <kaneki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 21:39:26 by kaneki            #+#    #+#             */
/*   Updated: 2024/04/08 21:40:13 by kaneki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char  c)
{
  write(1, &c, 1);
//  printf();
}

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    ft_putchar(str[i]);
    i++;
  }
}

int main(int  ac, char  **av)
{
  int i,j, y;

  i = 0;
  j = 0;
  y = 0;
  if(ac == 3)
  {
    while(av[1][i] != '\0')
    {
      while(av[2][j] != '\0')
      {
        if(av[1][i] == av[2][j])
        {
          y++;
          break;
        }
        j++;
      }
      i++;
    }
    if(y == ft_strlen(av[1]))
    {
      ft_putstr(av[1]);
    }
  }
  ft_putchar('\n');
}
