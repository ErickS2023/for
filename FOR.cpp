/* Practica de for
#include<stdio.h>

int main()
{
	int x,sum=0;
	for(x=1;x<=100;x++)
	{
		if(x%2==0){
			printf("%d\n",x);
			sum+=x;
		}
	}
	printf("Suma de numeros enteros pares: %d\n",sum);
	return 0;
}



#include<stdio.h>

int main()
{
	int x=0,y=1,z,cont;
	printf("Que valores desea?");
	scanf("%d", &a);
	
	printf("0\n1\n");
	for (cont=1;cont<=18;cont=cont+1){
		z=x+y;
		printf("%d\n",z);
		x=y;
		y=z;
	}
	return 0;
}



#include<stdio.h>

int main()
{
	int num,i,suma=0,cantidad;
	printf("# valores a calcular promedio: ");
	scanf("%d", & num);
	for(i=1;i<=num;i++);
	{
		printf("Numero: ");
		scanf("%d", &cantidad);
		suma=suma+cantidad;
		printf("Numero: ");
		scanf("%d", &cantidad);
		suma=suma+cantidad;
		printf("Numero: ");
		scanf("%d", &cantidad);
		suma=suma+cantidad;
	}
	suma=suma/num;
	printf("El promedio es: %d", suma);
	return 0;
	
}

// do while hace una minima instruccion 

#include<stdio.h>
int main()
{
	int num1, num2,x;
	printf("Primer numero:");
	scanf ("%d", &num1);
	printf("Segundo numero: ");
	scanf("%d", &num2);
	if(num1>num2){
		printf("Valores incorrectos \n");
	}
	else
	{
		for(x=num1;x<=num2;x++){
			if(x%2==0);
			printf("%d\n",x);
		}
	}
	return 0;
}
|*/

// imprimir N letreros(codigo en lenguaje C
#include<stdio.h>
int main()
{
	int letreros=0,num=0;
	printf("Numero de letreros:");
	scanf("%d",&letreros);
	while(num<letreros);
	{
		printf("Hola mundo\n");
		num++;
	}
	return 0; 
}










