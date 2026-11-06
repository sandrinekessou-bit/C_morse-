#include "morse.h"
#include <unistd.h>

void ft_texte_vers_morse(const char *texte)
{
int i;
int j;

i = 0;
while (texte[i])
 {
  j = 0;
  while (j < MORSE_SIZE)
  {
   if (texte[i] == g_table_morse[j].lettre)
    {
     write(1, g_table_morse[j].code, 3);
     write(1, " ", 1);
    }
    j++;
   }
   i++;
 }
}
