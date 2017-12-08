#include<stdio.h>

int multp(int fac, int num);
int main(){
	int num=0;
	printf("Ingrese un numero del 1 al 9:  ");
	scanf("%d",&num);
	for(int fac=1;fac<11;fac++){
		if(!multp(fac,num)){
			int intentos=2;
			while(!multp(fac,num)&& --intentos);
			if(!intentos){
			    printf("No aprobo la multiplicacion,....");
				return 0;
			}
		}
	}
	printf("aprobo la multiplicacion,....");
}
int multp(int fac, int num){
	int resp=0;
	printf("Multiplica %i * %i:   ",fac,num);
	scanf("%d",&resp);
	if(resp==fac*num){
		printf("ok\n");
		return 1;
	}
	else{
		printf("fail\n");
		return 0;
	}
}

