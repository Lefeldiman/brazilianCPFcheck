#include<stdio.h>

int  main()
{
  long long int cpf,d1,d2,cont,n9,s,aux,n,dc1,dc2;
 
  printf("Type your CPF, Digite o CPF ...: ");
  scanf("%lld",&cpf);
  
  d2=(cpf%10);
  d1=((cpf/10)%10);
  n9=((cpf/10)/10);
  
  aux=n9; 
  cont=2;
  s=0;
  
  for(;aux!=0;cont++)
    {
      n=(aux%10);
      s=(s+cont * n);
      aux=(aux/10);
    }

  s=(s*10);
  dc1=(s%11);
  
  if(dc1==10)
    {
      dc1=0;
    }
  if(dc1 == d1)
    { 
  aux=n9*10+dc1;
  cont=2;
  s=0;
 
  for(;aux!=0;cont++)
    {
      n=(aux%10);
      s=(s+cont* n);
      aux=(aux/10);
    }
 
  s=(s*10);
  dc2=(s%11);
  
  if(dc2==10)
    {
      (dc2=0);
    }

  if(dc2==d2) 
    {
      printf("Valid , Valido CPF");
    }
  else 
    { 
      printf("Invalid, Invalido CPF");
    }
    }  
  else 
    {
      printf("Invalid, Invalido CPF");
    } 
  getch();
  return 0;
}
