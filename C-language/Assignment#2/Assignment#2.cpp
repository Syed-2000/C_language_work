//ASSIGNMENT#2
#include<stdio.h>
#include<math.h>
main() {

//	Q17
//	int num1,num2, power;
//	printf("Enter number one: \t");
//	scanf("%d",&num1);
//	printf("Enter number two:\t");
//	scanf("%d",&num2);
//
//	power = pow(num1,num2);
//
//	printf("%d ^ %d = %d",num1,num2,power);

//	Q16
//	int noOfTerms,a=1,b=1,temp;
//	printf("Enter number of terms:\n");
//	scanf("%d",&noOfTerms);
//	for(int i=0;i<=noOfTerms;i++){
//		temp = a+b;
//		printf("%d\t",temp);
//		a=b;
//		b=temp;
//
//	}

// Q15
//	int num,rem,ans=0;
//	printf("Enter a number:\n");
//	scanf("%d",&num);
//
//	for(int i=0;num>0;i++){
//		rem=num%10;
//		ans = ans + rem;
//		num=num/10;
//	}
//	printf("sum of your number is: %d", ans);

// Q14
//	int num;
//	float sq;
//	printf("Enter a number:\n");
//	scanf("%d",&num);
//
//
//
//
//	sq=sqrt(num);
//	num=sq;
//	if(num==sq){
//		printf("perfect square");
//	}
//	else{
//		printf("not a perfect square");
//	}

//Q13

//float f;
//
//int i;
//
//printf("Enter a number : ");
//
//scanf("%f",&f);
//
//i=f;
//
//if(i==f){
//
//    printf("\nYou have Entered an Intiger number");
//}
//else{
//
//
//    printf("\nYou have Entered a float number");
//
//}

// Q12
//	int num,sq;
//	printf("Enter number of terms");
//	scanf("%d",&num);
//
//	for(int i=1;i<=num;i++){
//		sq=i*i;
//		printf("%d\n",sq);
//	}

// Q11
// x=ax^2+bx+c;
//	int a,b, c,p;
//	float Xp, Xn;
//	printf("Enter coeffecient of X^2:\t");
//	scanf("%d",&a);
//	printf("Enter coeffecient of X\t");
//	scanf("%d",&b);
//	printf("Enter constant\t");
//	scanf("%d",&c);
//
//
//	Xp = (-b + sqrt(b*b-4*a*c) ) / 2*a;
//	Xn = (-b - sqrt(b*b-4*a*c) ) / 2*a;
//	printf("Roots are:\t Xp=%f\t Xn=%f",Xp,Xn);

// Q10
//	int num;
//	printf("Enter a number");
//	scanf("%d",&num);
//	int fac=1;
//	for(int i=num; i>=1;i--){
//		fac = fac *i;
//	}
//	printf("factorial is: %d",fac);


//Q9
//int num,rem,conversion=0;
//again:
//printf("Enter a number:\n");
//scanf("%d",&num);
//
//for(int i=0 ;num>0;i++)
//{
//	rem=num%10;
//	if(rem==1|| rem==0)
//	{
//		conversion = conversion +rem*pow(2,i);
//		num=num/10;
//	}
//	else{
//		printf("write binary number\n");
//		goto again;
//	}
//
//}
//printf("%d",conversion);



//Q8
//int num, rem;
//again:
//printf("Write binary number:\n");
//scanf("%d",&num);
//
//for(int i=0;num>0;i++){
//	rem=num%10;
//	if(rem == 0 || rem==1){
//		printf("Binary number: %d",num);
//		num=num/10;
//		break;
//
//
//	}
//
//	else{
//		printf("not a binary number\n");
//		goto again;
//	}
//
//}
//Q 7
//int num, rem,rev=0,temp;
//
//printf("Write a number:\n");
//scanf("%d",&num);
//temp=num;
//
//for(int i=0;num>0;i++){
//		rem=num%10;
//		rev = rev*10+rem;
//		num=num/10;
//
//}
//
//printf("reverse number is: %d", rev);
//
//if(rev==temp){
//	printf("\nNumber is palindrome");
//}

//Q6
//int strt , end, count=0,sum=0;
//printf("Enter starting point");
//scanf("%d",&strt);
//
//printf("Enter ending point");
//scanf("%d",&end);
//
//for(int i=strt;i<=end;i++){
//	if(i%7==0 && i%9==0){
//		printf("Numbers divisible by 7 and 9 are: %d\n", i);
//		count++;
//		sum=sum+i;
//	}
//}
//printf("number of terms between 7 and 9 are: %d \n", count);
//printf("sum of terms between 7 and 9 is: %d ", sum);

//Q5
//	int num;
//	printf("upto how many numbers you want to print odd numbers:\n");
//	scanf("%d",&num);
//
//	printf(" odd numbers are:\n");
//	for(int i=1; i<=num; i++) {
//		if(i%2!=0) {
//			printf("%d\n",i);
//		}
//	}
// Q4
//	int firstNo,totNo, ratio;
//	float Tn,Sn;
//	printf("Enter first no:\n");
//	scanf("%d",&firstNo);
//	
//	printf("Enter ratio:\n");
//	scanf("%d",&ratio);
//	
//	printf("Enter total no:\n");
//	scanf("%d",&totNo);	
//	
//	
//	for(int i=1;i<totNo;i++){
//		Tn = firstNo* pow(ratio,totNo-i);
//		
//		printf("%f\t",Tn);
//		
//		Sn = (firstNo* pow(ratio,totNo - i))/(ratio-i);
//	
//	}

 //Q3)
	int a,n, d;
	float Tn,Sn;
	printf("Enter first no:\n");
	scanf("%d",&a);
	
	printf("Enter difference:\n");
	scanf("%d",&d);
	
	printf("Enter total no:\n");
	scanf("%d",&n);	
	
	
	for(int i=1;i<n;i++){
		Tn = a +(n-i)*d;
		
		printf("%f\t",Tn);
		
		
	
	}
	Sn = n/2 *(2*a+(n-1)*d);
	printf("Sum is: %f", Sn);
		
		
// Q2)
//	int n,sum=0,count=0;
//	float avg;
//	printf("enter the  number:\n");
//	scanf("%d",&n);
//	
//	for(int i=n;i>=1;i--){
//		printf("\n%d\n",i);
//		sum=sum+i;
//		count=count+1;
//	}
//	
//	printf("\nCount is: %d",count);
//	printf("\nSum is: %d",sum);
//	avg = sum/count;
//	printf("\nAverage is: %f\t",avg);

//Q1
//int n,sum=0,count=0;
//	float avg;
//	printf("enter the  number:\n");
//	scanf("%d",&n);
//	
//	for(int i=1;i<=n;i++){
//		printf("\n%d\n",i);
//		sum=sum+i;
//		count=count+1;
//	}
//	
//	printf("\nCount is: %d",count);
//	printf("\nSum is: %d",sum);
//	avg = sum/count;
//	printf("\nAverage is: %f\t",avg);	
//	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	














































}
