//What will be the output of the C program?

/*
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	CONDITION(1);
	CONDITION(2);
	return 0;
} 
O/P:	preprocessor works
	preprocessor works
	preprocessor works


#include<stdio.h>
# define loop while(true)
int main()
{
	loop;  
	printf("preprocessor-aptitude");
	return 0;
}
O/P:*ERROR




#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}
O/P:error: lvalue required as decrement operand




#include<stdio.h>
#define sqr(x) ++x * ++x 	//SQR(4)=5*5=25
int main()
{
	int a = 3, z;
	z = ++a * ++a;  //4*4=16
	a -= 3;		
	printf("%d %d", sqr(a), z);
	return 0;
}
O/P: 16 25



#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;	//1+2*1+2*1+2 
			//1+2+2+2=7
	printf("%d",i);
}

O/P:7




#include<stdio.h>
#define a =
int main()
{
	int num a 6; //A REPLACED WITH =
	printf("%d",num);
	return 0;
}
O/P:6




#include<stdio.h>
#define fun(x,y) x*y	//FUN(X+2,Y-1)   X+2*Y-1 = 2+2*1-1 = 2+2-1 = 3
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	return 0;
}

#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}




#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}




#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );
	return 0;
}


#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}
O/P:you and me are great!




#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}





#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}
O/P:macro25 = 47

#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);//13
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}
O/P:
*/




