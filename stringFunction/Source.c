#include<stdio.h>
#define SIZE1 25
#define SIZE2 15

int strln(char *ptr1);
char* myStrCopy(char *ptr1, char *ptr2);
char* myStrnCopy(char* ptr1, char* ptr2, int );
void myStrCat(char* ptr, char* ptr1);
void myStrnCat(char s1[], char s2[], int a);
void myStrCmp(char* a, char* b);
void myStrnCmp(char* a, char* b);
void myStrnCmp(char* a, char* b, int x);


int main()
{
	char a[] = { "Murat" };
	char b[SIZE1];
	char c[SIZE2];

	char s1[20] = { "Happy " };
	char s2[] = { "New year " };
	char s3[40] = { "" };
	
	char x1[] = "abed";
	char x2[] = "abcd";
	char x3[] = "Happy Holidays";

	/*printf("%s\n", myStrCopy(b, a));
	printf("%s\n",myStrnCopy(b, a, 3));*/

	/*myStrCat(s1, s2);
	printf("%s", s1);*/
	
	/*myStrnCat(s1, s2,4);
	printf("%s", s1);*/

	/*myStrCmp(x2, x1);*/
	
	myStrnCmp(x2, x1, 3);
}

int strln(char *ptr1)
{
	int count = 0;
	while (*ptr1!='\0')
	{
		count++;
		ptr1++;
	}
	return count;
}


char* myStrCopy(char *b, char *a)
{
	int n = strln(a);
	for (int i = 0; i <= n; i++)
	{
		b[i] = a[i];
	}
	return b;
}

char* myStrnCopy(char* b, char* a,int k)
{
	
	for (int i = 0; i < k; i++)
	{
		b[i] = a[i];
	}
	b[k] = '\0';
	return b;
}

void myStrCat(char* s1,char* s2)
{
	int k = strln(s1);
	int n = strln(s2);
	for (int i = 0; i <=n; i++)
	{
		s1[k + i] = s2[i];
	}
	/*s1[n + k] = '\0';*/
}

void myStrnCat( char s1[], char s2[], int a)
{
	int k = strln(s1);
	for (int i = 0; i <a; i++)
	{
		s1[k + i] = s2[i];
	}
	/*s1[a + k] = '\0';*/
}

void myStrCmp(char* a,char* b)
{
	int flag = 0;
	int k = strln(b);
	int n = strln(a);
	int big;
	if (k>n)
	{
		big = k;
	}
	else
	{
		big = n;
	}
	for (int i = 0; i < big; i++)
	{
		if (a[i] < b[i])
		{
			printf("-1");
			flag = 1;
			break;
		}
		else if(a[i] > b[i])
		{
			printf("1");
			flag = 1;
			break;
		}
	}
	if (flag==0)
	{
		printf("0");
	}

}

void myStrnCmp(char* a, char* b,int x)
{
	int flag = 0;
	
	for (int i = 0; i < x; i++)
	{
		if (a[i] < b[i])
		{
			printf("-1");
			flag = 1;
			break;
		}
		else if (a[i] > b[i])
		{
			printf("1");
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("0");
	}
}