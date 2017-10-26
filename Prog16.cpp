#include<stdio.h>
#include<math.h>
#include<conio.h>

//Prog16.Fórmula General

float a,b,c,d,e,f,g,h,i,j,x,y;

main(){
	
	printf("Introducir valor a: ");
	scanf("%f",&a);
	
	if (a==0){
		printf("a debe ser diferente de cero");
	} else {
		printf("Introducir valor b: ");
		scanf("%f",&b);
		printf("Introducir valor c: ");
		scanf("%f",&c);
		e=pow(b,2);
		d=e-(4*a*c);
		
		if(d<0){
			g=d*-1;
			h=pow(g,0.5);
			i=(b*-1)/(2*a);
			j=h/(2*a);
			
			x=i+j;
			y=i-j;
			
			printf("x1= %f i \n",x);
			printf("x2= %f i",y);
			
		} else {
			f=pow(d,0.5);
			x=((b*-1)+f)/(2*a);
			y=((b*-1)-f)/(2*a);
			
			printf("x1= %f \n",x);
			printf("x2= %f",y);
		}
	}
	
	getch();
	
}
