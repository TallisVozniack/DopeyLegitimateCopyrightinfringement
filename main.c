#include <stdio.h>
#include<stdlib.h>
#include<cpio.h>
#include<string.h>
#include<math.h>

main()
{

  int cod=1, qt;
float vlt =0;


while (cod!=0)
{
printf("Digite o código do produto desejado:");
scanf("%i",&cod);

switch(cod)
{
  case 100:
printf("Digite a quantidade desejada:");
scanf("%i",&qt);
vlt=vlt+(5.00*qt);
break;

case 101:
printf("Digite a quantidade desejada:");
scanf("%i",&qt);
vlt=vlt+(8.79*qt);
break;

case 102:
printf("Digite a quantidade desejada:");
scanf("%i",&qt);
vlt=vlt+(9.99*qt);
break;

case 103:
printf("Digite a quantidade desejada:");
scanf("%i",&qt);
vlt=vlt+(6.89*qt);
break;

case 104:
printf("Digite a quantidade desejada:");
scanf("%i",&qt);
vlt=vlt+(4.80*qt);
break;

case 105:
printf("Digite a quantidade desejada:");
scanf("%i",&qt);
vlt=vlt+(3.49*qt);
break;

case 106:
printf("Digite a quantidade desejada:");
scanf("%i",&qt);
vlt=vlt+(4.99*qt);
break;

default:
{
printf("\nPEDIDO FINALIZADO!\nVALOR TOTAL DO PEDIDO = R$ %.2f",vlt);
(cod+0);
break;
}
}
}
getchar();
printf("\n\n");
return(0);
}
 

