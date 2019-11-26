#include <stdio.h>
#include <fstream>
#include <math.h>
#include "task2.h"
using namespace std;

int main()
{
    unsigned int a;
	unsigned b;
	unsigned long long c;
    printf("Enter a number: ");//выводим на экран сообщение
	scanf("%u", &a);//помещаем введённое число в a
	if (checkPrime(a))
	{
		printf("This is a prime number\n");
	}
	else
	{
		printf("This is not a prime number\n");
	}
		
	printf("Enter the number of prime numbers: ");//выводим на экран сообщение
	scanf("%u", &b);//помещаем введённое число в b
	printf("Your prime number is: %llu \n",nPrime(b));
	
	printf("Enter a number to find the nearest next prime number: ");//выводим на экран сообщение
	scanf("%llu", &c);//помещаем введённое число в c
	printf("Your nearest next prime number is: %llu \n",nextPrime(c));
	
}
    