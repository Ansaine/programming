#include <stdio.h>          //1914116 Angshuman Das
#include <stdlib.h>
#include <string.h>         //1.expression reversal 2. using postfix on it 3. print it in reverse order

#define MAX 101

char stack[MAX];
char postfix[MAX];
int size=-1;            //stack size
int postfix_size=-1;

char peek()
{
    if(size!=-1)
        return stack[size];
    else return '0';

}
void push(int element)
{
    if(size>=(MAX-1))
    {
        printf("Size maxed out")   ;
    }
    else
    {   size++;
        stack[size]=element;


    }
}

void pop()
{
    if(size>=0)
        size--;
}

char associativity(char a)
{
    if(a == '^')
        return 'R';

    else if(a == '*' || a == '/')
        return 'L';

    else if(a == '+' || a == '-')
        return 'L';

}

int precedence(char symbol)
{
	if(symbol == '^')
        return 3;

	else if(symbol == '*' || symbol == '/')
        return 2;

	else if(symbol == '+' || symbol == '-')
            return 1;
	else
            return 0;

}

void decide(char symbol)        //using all the rules for stack
{
    if(size==-1 || peek()=='(' )

        push(symbol);

    else if(symbol == '(')

        push(symbol);

    else if(symbol == ')')
    {
        do
        {
            postfix_size++;
            postfix[postfix_size]=stack[size];
            pop();

        }while(peek()!= '(');

        postfix_size++;                         //ending '(' to postfix array
        postfix[postfix_size]=stack[size];
        pop();

    }

    else if (precedence(symbol)>precedence(peek()))
        push(symbol);

    else if(precedence(symbol)<precedence(peek()))
        do{
            postfix_size++;
            postfix[postfix_size]=peek();
            pop();
        }while(precedence(symbol)<precedence(peek()));

    else if(precedence(symbol)==precedence(peek()))
    {
        if(associativity(symbol)=='L')
        {
            postfix_size++;
            postfix[postfix_size]=peek();
            pop();
            push(symbol);

        }

        else
            push(symbol);
    }

}

int main()
{
    char expression[100];
    printf("Enter expression (without space) : ");
    scanf("%s",expression);

    int length=strlen(expression);


    for(int i =length-1; i>=0;i--)
    {
        {if(expression[i]=='(')         //to reverse the parenthesis
            expression[i]=')';
        else if (expression[i]==')')
            expression[i]='(';
        }

        int temp = (int)expression[i];      //temp gets asci value


        if((temp>=65 && temp<=90) || (temp>=97 && temp<=122) || (temp>=48 && temp<=57))
            {postfix_size++;
            postfix[postfix_size]=expression[i];}
        else
            decide(expression[i]);

    }

    for(int i=size;i>=0;i--)
    {
        postfix_size++;
        postfix[postfix_size]=stack[i];

    }

    for(int i =postfix_size; i>=0;i--)      //reverse print postfix
    {
        printf("%c",postfix[i]);
    }



    return 0;
}

