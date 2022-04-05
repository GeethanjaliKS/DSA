#include<stdio.h>
#include<ctype.h>
char infix[30],postfix[30];
int TOP=-1;
char stack[30];
void InfixToPostfix();
void push(char);
char pop();
int preced(char);
void main()
{
printf("\nEnter Infix Expression");
scanf("%s",infix);
InfixToPostfix();
printf("\n The Postfix expression");
puts(postfix);
}
void push(char symbol)
{
stack[++TOP]=symbol;
}
char pop()
{
char symbol;
symbol=stack[TOP--];
return symbol;
}
int preced(char symbol)
{
switch(symbol)
{
case '$':return -1;
case '(':return 0;
case '+':
case '-':return 1;
case '*':
case '/':return 2;
case '^':return 3;
}
}
void InfixToPostfix()
{
int i=0,k=0;
char symbol;
while((symbol=infix[i++])!='\0')
{
if(symbol=='(')
{push(symbol);
}
else if(symbol==')')
{
while(stack[TOP]!='(')
postfix[k++]=pop();
}
else if(isalnum(symbol))
{
postfix[k++]=symbol;
}
else
{
while(preced(symbol)<=preced(stack[TOP]))
{
postfix[k++]=pop();
}
push(symbol);
}
}
while(stack[TOP]!='$')
{
if(stack[TOP]=='('||(stack[TOP]=='$'))
pop();
postfix[k++]=pop();
}}
