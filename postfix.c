#include<stdio.h>
#include<math.h>
#include<ctype.h>
char stack[30],postfix[30];
int top=-1;
void push(char);
char pop();
void Eval_postfix();
void main()
{
char v;
printf("Enter expression");
scanf("%s",postfix);
Eval_postfix();
printf("\nThe Postfix Expression");
puts()
}
int Eval_postfix()
{
int i=0,op1,op2;
char symbol;
while(symbol=postfix[i+1]!='/0')
{
if(symbol==operand)
{
push(symbol-'0');
}
else
{
op2=pop();
op1=pop();
switch(symbol)
{
case '+':push(op1+op2);
break;
case '-':push(op1-op2);
break;
case '*':push(op1*op2);
break;
case '/':if(op2!=0)
         {push(op1/op2);
         break;
         }else
         {
         exit(0);
}
//case '^':push(op1/op2);
//break;
}
}
return pop();
}
}
void push(char symbol)
{
stack[++top]=symbol;
}
char pop()
{
char symbol;
symbol=stack[top--];
return symbol;
}
