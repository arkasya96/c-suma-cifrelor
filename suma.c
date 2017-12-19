#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<errno.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
  char *nr = NULL;
  if(argc != 2)
    {
          fprintf(stderr, "%s","Trebuie sa introduceti un numar intreg \n");
          exit(EXIT_FAILURE);
    }

  long val_numar = strtol(argv[1],&nr,10);
  printf("val_numar = %ld\n", val_numar);

  if(strlen(argv[1]) == 1 && strcmp(argv[1],"0")==0)
  {
    printf("suma = 0 \n");
    exit(EXIT_SUCCESS);
  }

  if(errno == ERANGE && (val_numar ==INT_MIN || val_numar == INT_MAX))
  {
    fprintf(stderr, "%s","numarul nu este intreg \n");
    exit(EXIT_FAILURE);
  }

  if(errno !=0 || val_numar ==0)
  {
    fprintf(stderr, "%s","nu ati introdus un numar intreg\n");
    exit(EXIT_FAILURE);
  }

  if (strcmp (argv[1], "") == 0 || (*nr != '\0'))
	{
		fprintf(stderr, "String invalid!  %s \n", argv[1]);
		exit(EXIT_FAILURE);
	}
// 
// if(val_numar > 0)
// {
//   int suma = 0;
//   for(int i=0; i<strlen(argv[1]);i++)
//   {
//     printf("%d %d %d \n",i, argv[1][i], argv[1][i]-'0');
//     int val = argv[1][i]-'0';
//     suma+=val;
//   }
//   printf("%d \n", suma);
// }
// 
// if(val_numar < 0)
// {
//   int suma = 0;
//   for(int i=1; i<strlen(argv[1]);i++)
//   {
//     printf("%d %d %d \n",i, argv[1][i], argv[1][i]-'0');
//     int val = argv[1][i]-'0';
//     suma+=val;
//   }
//   printf("%d \n", suma);
// }

  // int suma = 0;
  // long copie = abs(val_numar);
  // while(copie > 0)
  // {
  //   suma+=copie%10;
  //   copie/=10;
  // }
  // printf("suma este: %d\n", suma);
  //
  


}
