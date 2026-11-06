#include<unistd.h>
#include "morse.h"

int chaines_egales(const char *a,const char *b)

{
    int i = 0;

     while( a[i] != '\0' && b[i] != '\0')
       {
          if (a[i] != b[i])
            return 0;
          i++;
       }

    if (a[i] == b[i])
     {
         return 1;
     }
    else
    {
        return 0;
    }
}
 int afficher_usage(void)
  {

   write(2, "Usage: ./morse encode|decode \"texte\"\n",37 );
   return 1 ;
  }
 int main(int argc, char *argv[])
 {
     if (argc != 3)
    {
       return(afficher_usage());
    }
   if (chaines_egales(argv[1],"encode"))
   {
       ft_texte_vers_morse(argv[2]);
   }
   else if (chaines_egales(argv[1],"decode"))
   {
       ft_morse_vers_texte(argv[2]);
   }
   else
   {
       return (afficher_usage());
   }
    return (0);
}

