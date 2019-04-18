#include <stdio.h>

int main(void)
{
  float a, b;
  
  char c[2];
  
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%s", &c);
  
  float r;
  
  if(c[0] == '+')
  {
  	r = a + b;
	printf("%f", r);		
  }
  else if(c[0] == '-')
  {
  	r = a - b;
  	printf("%f", r);
  }
  else
  {
  	printf("Operacao invalida");
  }
  
  return 0;
}
