#include "bits/stdc++.h"
using namespace std;

/*AREA OF A TRINGLE*/
int area_triangle()
{
	int base;
	cin>>base;//atoi(argv[1]);
	int height;
	cin>>height;//atoi(argv[2]);
	float area=0.5*base*height;
	cout<<fixed<<setprecision(2)<<area<<endl;
}
/*AREA OF CIRCLE*/
int area_circle()
{
	float dia;
	cin>>dia;//atoi(argv[1]);
	float rad;
	cin>>rad;//(dia/2);
	const float pi=3.14;
	float area=pi*(rad*rad);
	//float res=round(area);
	cout<<fixed<<setprecision(2)<<area<<endl;
	return 0;
}

/*Hypotenuse of triangle*/
int hypotenuse()
{
	int base;
	cin>>base;//atoi(argv[1]);
	int per;
	cin>>per;//atoi(argv[2]);
	float hyp=sqrt(pow(base,2)+pow(per,2));
	cout<<fixed<<setprecision(2)<<hyp<<endl;
	return 0;
}

/*LEAP YEAR*/
int leap_year()
{
	int year;
	cin>>year;//atoi(argv[1]);
	if((year%4==0 && year%100!=0)||(year%400==0))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}

	return 0;
}

/*HCF of 2 Numbers*/
int hcf()
{
	int num1;
	cin>>num1;//atoi(argv[1]);
	int num2;
	cin>>num2;//atoi(argv[2]);
	int res=__gcd(num1,num2);
	cout<<res<<endl;
	return 0;
}

/*PRIME NUMBER
IF PRIME, PRINT SQRT OF A NUMBER*/ 
int prime()
{
	int num1;
	cin>>num1;//atoi(argv[1]);
	int flag=0;
	float ans;
	if(num1<=1)
	{
		cout<<"NO"<<endl;
	}
	for(int i=2;i<num1;i++)
	{
		if(num1%i==0)
		{	
			flag=0;
			break;
		}
		else
		{
			flag=1;
			ans=sqrt(num1);
			break;
			//If YES output the sqrt of the number
		}
	}
	if(flag==0)
	{
		cout<<"NO"<<endl;
	}
	if(flag==1)
	{
		cout<<"YES"<<endl;
		cout<<fixed<<setprecision(2)<<ans<<endl;	
	}
	return 0;
}

/*PRINT PRIME NUMBERS BETWEEN 1 TO n*/
int series_prime()
{
	int n;
	int count;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		count = 0;
	for(int j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
			count++;
			break;
		}
	}
	if(count==0 && i!= 1)
	{
		cout<<i<<" ";
	}	
}
return 0;
}


/* SUM OF N GIVEN PRIME NUMBERS*/
int sum_prime()
{
 	int n1,n2,upper,lower,sum=0,count;
	//if(argc!=3)
	{
		exit(0);
	}
	cin>>n1;//atoi(argv[1]);
	lower=n1+1;
	cin>>n2;//atoi(argv[2]);
	upper=n2;
	for(int i=lower;i<upper;i++)
	{
		count=1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==1)
		{
			sum+=i;
		}
	}
	cout<<sum<<endl;
	return 0;
}

/*CHECK IF A NUMBER IS A PERFECT SQUARE*/
int square_check()
{
	int num;
	cin>>num;//atoi(argv[1]);//13
	float res=sqrt(num);//3.61
	int comp=res;
	cout<<comp<<" "<<res<<endl;
	if(comp==res)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}

/*PERFECT NUMBER
Perfect number is a positive number which sum of all positive divisors excluding that number is
equal to that number.6 is perfect number since divisor of 6 are 1, 2 and 3. 
Sum of its divisor is 1 + 2+ 3 =6
Note: 6 is the smallest perfect number*/
int check_perfect()
{
	int num;
	cin>>num;//atoi(argv[1]);
	int div,sum=0;
	for(int i=1;i<num-1;i++)
	{
		div=num%i;
		if(div==0)
		{
			sum+=i;
		}
	}
	if(sum==num)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}

	
/* FIBONACCI SERIES 0 1 1 2 3 5 8 13 21.....*/
int fibonacci()
{
	int n;
	cin>>n;//atoi(argv[1]);
	int f=0,s=1,next;
	for(int i=0;i<n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=f+s;
			f=s;
			s=next;
		}
		cout<<next<<" ";
	}
}
/*MULTIPLICATION TABLE OF A NUMBER */
int table()
{
	int n;
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
	}
	return 0;
}
/* FACTORIAL OF A NUMBER*/
int fact()
{
	int n;
	cin>>n;//atoi(argv[1]);
	int fact=1;
	if(n==0 ||n== 1)
	{
		cout<<1<<endl;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		cout<<fact<<endl;
	}
	return 0;
}

/* BINARY TO DECIMAL*/
int bin()
{
	int num;
	cin>>num;//atoi(argv[1]);
	int b,d=0,base=1,rem;
	b=num;//1010
	while(num>0)//1010>0
	{
		rem=num%2;//0
		d=d+rem*base;//0
		num/=10;//101
		base*=2;//2
	}
	cout<<d<<endl;
	return 0;
}
/* PROBLEM STATEMENT: Take 3 strings,replace vowels in s1 with '%', 
	consonants in s2 with '#', and lowercase the third string.*/
int check()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3; 
	for(int i=0;i<sizeof(s1);i++)
	{
		if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
		{
			s1[i]='%';
		}
	}
	for(int j=0;j<sizeof(s2);j++)
	{
		if(s2[j]=='b'||s2[j]=='c'||s2[j]=='d'||s2[j]=='f'||s2[j]=='g'||s2[j]=='h'||s2[j]=='j'||s2[j]=='k'||s2[j]=='l'||s2[j]=='m'||
		 s2[j]=='n'||s2[j]=='p'||s2[j]=='q'||s2[j]=='r'||s2[j]=='s'||s2[j]=='t'||s2[j]=='v'||s2[j]=='w'||s2[j]=='x'||s2[j]=='y'||
		 s2[j]=='z')
		{
			s2[j]='#';
		}	
	}
	for(int z=0;z<sizeof(s3);z++)
	{
		int x=0;
		while(s3[x]!='\0')
		{
			if(s3[x]>='a'&& s3[x]<='z')
			{
				s3[x]=s3[x]-32;
			}
			x++;
		}
	}
	cout<<s1<<" "<<s2<<" "<<s3<<endl;
	return 0;
}

/*STRING REVERSAL PROGRAM */
int string_reverse()
{
	int n;
	cin>>n;
	char str[n];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	//string s;
	//cin>>s;
	for(int j=n-1;j>=0;j--)
	{
		cout<<str[j];
	}
	return 0;
}

/* STRING CONCATENATION*/
int str_concatenate1()
{
	char s1[10];
	char s2[20];
	cin>>s1;
	cin>>s2;
	cout<<strcat(s1,s2)<<endl;
	return 0;
}

int str_concatenate2()
{
	char s1[100];
	cin.getline(s1,100);
	char s2[100];
	cin.getline(s2,100);
	int m,l;
	for(m=0;s1[m]!='\0';m++)
	{
		;
	}
	for(l=0;s2[l]!='\0';l++,m++)
	{
		s1[m]=s2[l];
	}
	s1[m]='\0';
	cout<<s1<<" "<<endl;
	return 0;
}

/*NUMBER REVERSAL PROGRAM*/
int number_reverse()
{
	int n,d,reverse=0;
	cin>>n;//123
	do
	{
		d=n%10;//3 2 1
		reverse=((reverse*10)+d);//3 2 1
		n=n/10;//12 1
	}while(n!=0);
		cout<<reverse<<endl;
		return 0;
}

/* STRING PALLINDROME */
int str_pallindrome()
{
	int n;
	int flag=0;
	cin>>n;
	char str[n];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	int l=0;
	int h=n-1;
	while(h>l)
	{
		if(str[l++]==str[h--])
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
			break;
		}
	}	
	if(flag==1)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}


/* NUMBER PALLINDROME*/
int num_pallindrome()
{
	int n,d,reverse=0;
	cin>>n;
	int temp=n;//123
	do
	{
		d=n%10;//3 2 1
		reverse=((reverse*10)+d);//3 2 1
		n=n/10;//12 1
	}while(n!=0);
	//cout<<reverse<<endl;
	if(reverse==temp)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}

/* SUM OF DIGITS OF A NUMBER*/
int s_o_d()
{
	int z;
	cin>>z; //123
	int i,sum=0,rem;
	while(z!=0)
	{
		rem=z%10;//321
		sum+=rem;//3+2+1
		z/=10;//1
	}
	cout<<sum<<endl;
	return 0;
}
/*AMSTRONG NUMBER :
Those numbers which sum of the cube of its digits is equal to that number are known as Armstrong
numbers. For example 153 since 1^3 + 5^3 + 3^3 = 1+ 125 + 9 =153*/
int amstrong()
{
	int z;
	int n;
	cin>>n;
	cin>>z; //123
	int i,sum=0,rem;
	int temp=z;
	while(temp!=0)
	{
		rem=temp%10;//321
		sum+=pow(rem,n);//3+2+1
		temp/=10;//1
	}
	
	if(sum==z)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}

/* A NUMBER RAISED TO ANY POWER */
int p(int b,int e)
{
	if(e!=1)
	{
		return (b*p(b,e-1));
	}
	else
	{
		return b;
	}
}
/*Appending zeros at the beginning of array elements*/
int append_zeroes()
{
	int n,m;
	int count=0;
	cin>>n>>m;
	int temp=n;
	int max=m;
	while(m>0)
	{
		m=m/10;
		count++;
	}
	for(int i=temp+1;i<=max;i++)
	{
		cout<<setfill('0')<<std::setw(count)<<i<<" ";
	}
}
int main(void)
{
	table();
	//series_prime();
}
