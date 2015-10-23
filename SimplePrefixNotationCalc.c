#include <stdio.h>

main()
{
	
		int j=0;
	
		
		int k,l;
		long ans;
		float div;
	 char expression[3];
	 char str[1];

			
		printf("Enter the expresion in prefix notation form\n");
			for( j=0;j<3;j++){
			
	scanf("%c",&expression[j]);// Allowing user input
	//the calc only considers the first 3 characters of the input  string
		}
	
		str[0]=expression[0];
	switch(str[0]){//chcking the first character of the string
		case '+'://checking for addition
			
			 k= expression[1]-'0';//converting the second and the third characters into data type int
			 l=expression[2]-'0';
			 if(k<=9 && l<=9){//checking  for integers 1-9 only
			 
			 ans= k+l;
			printf("Addition of %d and %d is %d \n",k,l,ans);
}
else {
	printf("Pleas input integers\n");
}
			break;
		case '-'://checking for substraction
			k= expression[1]-'0';
			 l=expression[2]-'0';
			 if(k<=9 && l<=9){
			 ans=k-l;
			 printf("Substration of %d and %d is %d \n",k,l,ans);
		}
		else {
	printf("Pleas input integers\n");
}
			break;
		case '*'://checking for multipication
			k= expression[1]-'0';
			 l=expression[2]-'0';
			 if(k<=9 && l<=9){
			 ans=k*l;
			 printf("Multiplication of %d and %d is %d\n",k,l,ans);
		}
		else {
	printf("Pleas input integers\n");
}
			break;
		case '/'://checking for division
			k= expression[1]-'0';
			 l=expression[2]-'0';
			 if(k<=9 && l<=9){
			 div=k/l;
			 printf("Division of %d and %d is %f \n",k,l,div);
		}
		else {
	printf("Pleas input integers\n");
}
			break;//if the basic operations are missing display  the following text
			
		default:
			printf("Please enter the correct expression this claculator \n operates on two integrs using the \n basic operations \* \\ \+ and \-: \n");
	
	}


	return 0;

}
