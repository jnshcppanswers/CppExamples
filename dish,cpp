#include <stdio.h>
#include <string.h>
char t[30];
char s[31];
int stack[31];
int a = 97;

void push(int &top)
{	
	stack[++top]=a++;
}
void pop(int &top)
{
	top--;
}

int main()
{
	int top = 0;
	int i,j=0;
	scanf("%s", t);
	for(int i = 0 ; i < strlen(t) ; i++)
	{
		s[i+1]=t[i];
	}
	
	for(i = 1 ; i < strlen(s+1)+1 ; i++)
	{
		if(s[i-1] < s[i])
		{
			
			while(s[i]!=stack[top])
			{
				//printf("push\n");
				push(top);
			}
			//printf("pop\n");
			pop(top);
		}
		else if(s[i-1] > s[i])
		{
			while(s[i]!=stack[top])
			{
				if(stack[top]-s[i]==1 || stack[top]-s[i]==-1)
				{
					printf("impossible");
					return 0;
				}
				//printf("pop\n");
				pop(top);
			}
			//printf("pop\n");
			pop(top);
		}
	}

	
	
	top = 0;
	a = 97;
	
	
	
	
	
	
	
	
	for(i = 1 ; i < strlen(s+1)+1 ; i++)
	{
		if(s[i-1] < s[i])
		{
			
			while(s[i]!=stack[top])
			{
				printf("push\n");
				push(top);
			}
			printf("pop\n");
			pop(top);
		}
		else if(s[i-1] > s[i])
		{
			while(s[i]!=stack[top])
			{
				printf("pop\n");
				pop(top);
			}
			printf("pop\n");
			pop(top);
		}
	}
	
}
