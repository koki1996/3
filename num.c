# 3
#include<stdio.h>
#include<conio.h>
int romanToDecimal(int n,char a[]);
int main(){
	int n,decimal;
	char *ptr;
	clrscr();
	printf("Enter the no of characters in the roman numeral");
	scanf("%d",&n);
	ptr=(char *)malloc(n*sizeof(char));
	printf("Enter the roman numeral");
	scanf("%s",ptr);
	decimal=romanToDecimal(n,ptr);
	printf("Decimal value is %d",decimal);
	getch();
	return 0;

}
int romanToDecimal(int n,char a[]){
  int result=0,i=0,j=0;

	int *ptr;
	ptr=(int*)malloc(n*sizeof(int)+1);
	for(i=0;i<n;i++){
		if(a[i]=='I')
			*(ptr+i)=1;
		else if(a[i]=='V')
			*(ptr+i)=5;
		else if(a[i]=='X')
			*(ptr+i)=10;
		else if(a[i]=='L')
			*(ptr+i)=50;
		else if(a[i]=='C')
			*(ptr+i)=100;
		else if(a[i]=='D')
			*(ptr+i)=500;
		else if(a[i]=='M')
			*(ptr+i)=1000;
	}
	*(ptr+i)=1;
	 while(n>0){
		if(*(ptr+j)>=*(ptr+j+1))
			result+=*(ptr+j);
		else
			result-=*(ptr+j);
		n--;
		j++;
	}
  return result;
  }
