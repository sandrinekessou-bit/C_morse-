
#include "morse.h"
#include <unistd.h>


void ft_morse_vers_texte(const char *morse)
{
 int i;
 int j;
 int k;
 char code[8];

 i = 0;
 while (morse[i])
 {
  k = 0;
  while (morse[i] !='\0'&& morse[i] !=' ')
   {
    code[k] = morse[i];
    k++;
    i++;
   }
    code[k] = '\0';
    j = 0;
    while (j < 26)
    {
     if (strcmp(code, g_table_morse[j].code) == 0)
     write(1, &g_table_morse[j].lettre, 1);
     j++;
    }
     if (morse[i] == ' ')
     i++;
  }
 }

