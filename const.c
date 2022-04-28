#include<stdio.h>

int main()
{
	int x=11,y=12;//a,b are not constant 

	int *const ptr = &x;//constant pointer
	//address must be assigned during initialization
	*ptr=10;//we can assign value at the address
	//ptr=&y;//address cannot be changed (address is constant)
	//assignment of read-only variable ‘ptr’
	printf("%d\n",*ptr);

	
	
	int const *ptr2;//pointer to constant
	ptr2=&x;
	ptr2=&y;//assign address at any point 
	//ptr2=10;//cannot change value at address(constant value)
	printf("%d\n",*ptr2);
}

