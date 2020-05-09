#include<stdio.h>
#include<math.h>
int main()
{
	printf("AMPLITUDE MODULATION:\n");
	int t;
  float Am,Ac,fm,fc,U,S,p,n;
	printf("Enter the Amplitude of the msg Signal:\n");
	scanf("%f",&Am);
	printf("Enter the Amplitude of the Carrier Signal:\n");
	scanf("%f",&Ac);
	printf("Enter the Frequency of the msg Signal:\n");
	scanf("%f",&fm);
	printf("Enter the Frequency of the Carrier Signal:\n");
	scanf("%f",&fc);
	printf("Enter the Time:\n");
	scanf("%d",&t);
	U=(((Am-Ac)/2)/((Am+Ac)/2));
	printf("Modulation Index is:%f\n",U);
	S=Ac*cos(2*3.14*fc*t)+U*Ac/2*cos(2*3.14*(fc+fm)*t)+U*Ac/2*cos(2*3.14*(fc-fm)*t);
	printf("Modulated Signal is:%f\n",S);
	if(U>1)
	printf("Over Modulation\n");
	else if(U==1)
	printf("Critical Modulation\n");
	else
	printf("Under Modulation\n");
	p=Ac*Ac/2*(1+(U*U)/2);
	printf("Power of the Amplitude Modulation is:%f\n",p);
	n=U*U/((U*U)+2);
	printf("Efficiency Of the Signal is:%f\n",n);
	return 0;
}
