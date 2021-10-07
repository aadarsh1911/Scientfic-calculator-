#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
# define SIZE 50

char st[SIZE];
int top=-1;
void removespaces(char* source)
{
char* u = source;
char* v = source;
while(*v!=0)
{
*u=*v++;
if(*u!= ' ')
u++;
}
*u=0;
}
void push(char elem)
{
st[++top]=elem;
}
char pop()
{
return(st[top--]);
}
int pr(char elem)
{
switch(elem)
{
case '#':
		return 0;

case '(':
		return 1;

case '+':
case '-':
		return 2;

case '*':
case '/':
		return 3;
}
}
void infix_to_postfix(char *infix, char *postfix)
{
char q, elem;
int u=0, z=0;
removespaces(infix);
push('#');
while((q=infix[u++]) != '\n')
{
if(q == '(')
push(q);
else if(isalnum(q))
postfix[z++]=q;
else if(q ==')')
{
while(st[top]!= '(')
postfix[z++]= pop();
elem=pop();
}
else
{
while(pr(st[top])>= pr(q))
postfix[z++]=pop();
push(q);
}
}
while(st[top]!='#')
postfix[z++]=pop();
postfix[z]=0;
}
int eval_postfix(char *postfix)
{
char q;
int u=0,op1,op2;
while((q=postfix[u++])!=0)
{
if(isdigit(q))
push(q-'0');
else
{
op2=pop();
op1=pop();
switch(q)
{
case '+': push(op1+op2);
break;
case '-': push(op1-op2);
break;
case '*' : push(op1*op2);
break;
case '/' : push(op1/op2);
break;
}
}
}
return st[top];
}

void main()

{

int n,i,m,o,che,p,g,f,l,t,r,s,e,j=1,br,m1;
char s1[]={"guest"},ch,s2[20],s3[]={"bsaitm"},s4[20],infx[50],pofx[50],ch1,che1,n1;
int a,b,c;
float result1,x1,k,y1,x2,y2,result2,x3,y3,result3,x4,y4,result4,x,y,result,x5,y5,result5,z1;
FILE *aptr;
FILE *sptr;
FILE *mptr;
FILE *dptr;
clrscr();

{
    textattr(j + ((j+100) << 1));
    cprintf("                             SCIENTIFIC CALCULATOR                                     \r");
    cprintf("________________________________________________________________________________\r\n");

 }


{
       textattr(j  +  ((j+4) <<  1));
cprintf("\r\n");
cprintf("\r\n");
cprintf("==============================================================================\r\n");
cprintf("                                 LOGIN PAGE                                   \r\n");
cprintf("==============================================================================\r\n");
cprintf("\r\n");
cprintf("ENTER USERNAME\r\n");

cprintf("\r\n");
scanf("%s",&s2);
cprintf("\r\n");
cprintf("ENTER PASSWORD\r\n");
cprintf("\r\n");
c=0;
while(1)
{
ch=getch();
if(ch==13)
break;
else if(ch==8)
{
if(c!=0)
{
printf("\b");
printf("%c",32);
printf("\b");
c--;
s4[c]='\o';
}
else
continue;
}
else
{
putchar('*');
s4[c]=ch;
c++;
}
}
s4[c]='\0';
a=strcmp(s1,s2);
b=strcmp(s3,s4);
clrscr();
if((a==0) && (b==0))
{
cprintf("\r\nLOGGED IN");
i=7;
}
else if((a==0)&&(b!=0))
{
cprintf("PASSWORD INCORRECT\r\n");
}
else if((a!=0)&&(b==0))
{
cprintf("USERNAME INCORRECT\r\n");
}
else
{
printf("BOTH IS INCORRECT");
}

}
if(i==7)
{
  {
clrscr();
	   textattr(j  +  ((j+4) <<  1));

cprintf("1. ENTER 1 FOR NORMAL CALCULATOR            \r\n");
cprintf("=  =========================================\r\n");
cprintf("\r\n");
cprintf("2. ENTER 2 FOR ADVANCED NORMAL CALCULATOR   \r\n");
cprintf("=  =========================================\r\n");
cprintf("\r\n");
cprintf("3. ENTER 3 FOR SIMPLE SCIENTIFIC CALCULATOR \r\n");
cprintf("=  =========================================\r\n");
cprintf("\r\n");
cprintf("4. ENTER 4 FOR ADVANCED SCIENTFIC CALCULATOR\r\n");
cprintf("=  =========================================\r\n");
cprintf("\r\n");
cprintf("5. ENTER 5 FOR USING CONVERTER              \r\n");
cprintf("=  =========================================\r\n");
cprintf("\r\n");
cprintf("6. ENTER 6 FOR CHECKING PREVIOUS RESULT     \r\n");
cprintf("=  =========================================\r\n");
cprintf("\r\n");
cprintf("7. ENTER 7 FOR EXIT FROM PROGRAMME          \r\n");
cprintf("=  =========================================\r\n");
cprintf("\r\n");
scanf("%d",&n);
clrscr();

 }

switch(n)

{

case 1:
{
do
{
{

cprintf("ENTER 1 FOR ADDITION                \r\n");
cprintf("------------------------------------\r\n");
cprintf("\r\n");
cprintf("ENTER 2 FOR SUBTRACTION             \r\n");
cprintf("------------------------------------\r\n");
cprintf("\r\n");
cprintf("ENTER 3 FOR MULTIPLICATION          \r\n");
cprintf("------------------------------------\r\n");
cprintf("\r\n");
cprintf("ENTER 4 FOR DIVISION                \r\n");
cprintf("------------------------------------\r\n");
cprintf("\r\n");
cprintf("ENTER 5 FOR EVALUATE ANY EXPRESSION \r\n");
cprintf("------------------------------------\r\n");
cprintf("\r\n");
scanf("%d",&m);
clrscr();
if(m==1)
{
aptr=fopen("add.txt","a");
if(aptr==NULL)
{
printf("FILE NOT OPEN");
}
else
{
cprintf("ENTER FIRST NUMBER \r\n");
scanf("%f",&x1);
fflush(stdin);
fputc(x1,aptr);
cprintf("ENTER SECOND NUMBER\r\n");
scanf("%f",&y1);
fflush(stdin);
fputc(y1,aptr);
fflush(stdin);
}
fclose(aptr);
}
if(m==2)
{
sptr=fopen("sub.txt","a");
printf("ENTER FIRST NUMBER\r\n");
scanf("%f",&x2);
fflush(stdin);
fputc(x2,sptr);
printf("ENTER SECOND NUMBER \r\n");
scanf("%f",&y2);
fflush(stdin);
fputc(y2,sptr);
fclose(sptr);
}
if(m==3)
{
mptr=fopen("mul.txt","a");
printf("ENTER FIRST NUMBER\r\n");
scanf("%f",&x3);
fflush(stdin);
fputc(x3,mptr);
printf("ENETR SECOND NUMBER\r\n");
scanf("%f",&y3);
fflush(stdin);
fputc(y3,mptr);
fclose(mptr);
}
if(m==4)
{
dptr=fopen("div.txt","a");
printf("ENETR FIRST NUMBER\r\n");
scanf("%f",&x4);
fflush(stdin);
fputc(x4,dptr);
printf("ENTER SECOND NUMBER\r\n");
scanf("%f",&y4);
fflush(stdin);
fputc(y4,dptr);
fclose(dptr);
}
if(m==5)
{
fgets(infx, 50 ,stdin);
infix_to_postfix(infx,pofx);
}
switch(m)

{

case 1: result1=(x1+y1);
printf("RESULT = %f\n",result1);
fflush(stdin);
aptr=fopen("add.txt","a");
fputc(result1,aptr);
fclose(aptr);
break;
case 2: result2=(x2-y2);
printf("RESULT = %f\n",result2);
fflush(stdin);
sptr=fopen("sub.txt","a");
fputc(result2,sptr);
fclose(sptr);
break;
case 3: result3=(x3*y3);
printf("RESULT = %f\n",result3);
fflush(stdin);
mptr=fopen("mul.txt","a");
fputc(result3,mptr);
fclose(mptr);
break;
case 4: result4=(x4/y4);
printf("RESULT = %f\n\n",result4);
fflush(stdin);
dptr=fopen("div.txt","a");
fputc(result4,dptr);
fclose(dptr);
break;
case 5: cprintf("ENTER THE EXPRESSION\r\n");
cprintf("\r\n");
fgets(infx, 50 ,stdin);
infix_to_postfix(infx,pofx);
/*printf("\n infix: %s postfix: %s",infx,pofx);    */
cprintf("\r\n RESULT: %d\n",eval_postfix(pofx));
break;

default:
cprintf("OPERATION DOES NOT EXIST\n");
break;
}
printf("\r\n");
printf("PRESS 1 CONTINUE AGAIN    \r\n");
printf("--------------------------\r\n");
printf("\r\n");
printf("PRESS 2 TO GO ON MAIN PAGE\r\n");
printf("--------------------------\r\n");
printf("\r\n");
printf("PRESS 3 FOR EXIT          \r\n");
printf("--------------------------\r\n");
printf("\r\n");
scanf("%d",&che);
clrscr();
}
}
while(che==1);
if(che==2)
{
main();
m++;
break;
}
else
exit(0);
}
break;

case 2:
{


printf("ENTER 1 FOR ADDITION                \r\n");
printf("------------------------------------\r\n");
printf("\r\n");
printf("ENTER 2 FOR SUBTRACTION             \r\n");
printf("------------------------------------\r\n");
printf("\r\n");
printf("ENTER 3 FOR MULTIPLICATION          \r\n");
printf("------------------------------------\r\n");
printf("\r\n");
printf("ENTER 4 FOR DIVISION                \r\n");
printf("------------------------------------\r\n");
printf("\r\n");
scanf("%d",&m1);
clrscr();
printf("ENTER IST NUMBER\n");
scanf("%f",&x5);
printf("ENTER 2ND NUMBER\n");
scanf("%f",&y5);
switch(m1)
{
case 1: result5=x5+y5;
printf("RESULT = %f",result5);
break;
case 2: result5=x5-y5;
printf("RESULT = %f",result5);
break;
case 3: result5=x5*y5;
printf("RESULT = %f",result5);
break;
case 4: result5=x5/y5;
printf("RESULT = %f",result5);
break;
default: printf("OPERATION NOT EXIST");
}
cprintf("\r\n");
cprintf("\nIF YOU WANT TO CONTINUE AGAIN THN PRESS Y/y\n");
fflush(stdin);
scanf("%c\n",&n1);
clrscr();
fflush(stdin);
if((n1=='Y')||(n1=='y'))
{
do{
fflush(stdin);
printf("ENTER OPERATOR\n");
scanf("%c",&ch1);
fflush(stdin);
printf("ENTER NUMBER\n");
scanf("%f",&z1);
switch(ch1)
{
case '+': result5=result5+z1;

printf("RESULT = %f",result5);
break;
case '-': result5=result5-z1;
printf("RESULT = %f",result5);
break;
case '*': result5=result5*z1;
printf("RESULT = %f",result5);
break;
case '/': result5=result5/z1;
printf("RESULT = %f",result5);
break;
default: printf("NOT EXIST");
break;
}printf("\nENTER Y/y TO CONTINUE AGAIN\n");
fflush(stdin);
scanf("%c",&che1);
   }while(che1=='y'||che1=='Y');
}
else
{
printf("WRONG CHOICE");
exit(1);

}






}
break;







case 3:

{
do
{
{

cprintf("ENTER 1 FOR SQUARE            \r\n");
cprintf("------------------------------\r\n");
cprintf("ENTER 2 FOR CUBE              \r\n");
cprintf("------------------------------\r\n");
cprintf("ENTER 3 FOR FACTORIAL         \r\n");
cprintf("------------------------------\r\n");
cprintf("ENTER 4 FOR SQUARE ROOT       \r\n");
cprintf("------------------------------\r\n");
cprintf("ENTER 5 FOR GETTING 1/x       \r\n");
cprintf("------------------------------\r\n");
cprintf("ENETR 6 FOR GETTING PERCENTAGE\r\n");
cprintf("------------------------------\r\n");
cprintf("ENTER 7 FOR POWER             \r\n");
cprintf("------------------------------\r\n");
scanf("%d",&o);
clrscr();
{

if(o<=6)
{
cprintf("ENTER THE NUMBER\r\n");
scanf("%f",&x);
}
else if(o==7)
{
{
cprintf("ENTER THE BASE\r\n");
scanf("%f",&x);
}
{
cprintf("ENTER THE EXPONENT\r\n");
scanf("%f",&y);
}
}
}
switch(o)

{

case 1: result=(x*x);
cprintf("RESULT=%f\r\n",result);
break;
case 2: result=(x*x*x);
cprintf("RESULT=%f\r\n",result);
break;
case 3:    result=1;
for(i=1;i<=x;i++)
{
result=(result*i);
}
cprintf("RESULT=%f\r\n",result);
break;
case 4:
result=sqrt(x);
cprintf("RESULT=%f\r\n",result);
break;
case 5:
result=(1/x);
cprintf("RESULT=%f\r\n",result);
break;
case 6:
result= (x/100);
cprintf("RESULT=%f\r\n",result);
break;
case 7:
{
if(y==0)
{
result=1;
cprintf("RESULT=%f\r\n",result);
}
else if(y<0)
{
cprintf("POWER DOSEN'T EXIST\n");
}
else if(y>0)
{
result=pow(x,y);
}
cprintf("RESULT=%f\r\n",result);
break;
}
default: cprintf("OPERATION DOES NOT EXIST\n");
break;
}

printf("\r\n");
printf("PRESS 1 CONTINUE AGAIN    \r\n");
printf("--------------------------\r\n");
printf("\r\n");
printf("PRESS 2 TO GO ON MAIN PAGE\r\n");
printf("--------------------------\r\n");
printf("\r\n");
printf("PRESS 3 FOR EXIT          \r\n");
printf("--------------------------\r\n");
printf("\r\n");
scanf("%d",&che);
clrscr();
}
}
while(che==1);
if(che==2)
{
main();
m++;
break;
}
else
exit(0);

}

break;
case 4:

{
do
{
{

cprintf("ENTER 1  FOR USING SINE FUNCTION     \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 2  FOR USING COSINE FUNCTION   \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 3  FOR USING TANGENT FUNCTION  \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 4  FOR USING SEC FUNCTION      \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 5  FOR USING COSEC FUNCTION    \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 6  FOR USING COT FUNCTION      \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 7  FOR USING LOGARITHM         \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 8  FOR USING EXPONENTIAL       \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 9  FOR USING SINE INVERSE      \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 10 FOR USING COS INVERSE       \r\n");
cprintf("-------------------------------------\r\n");
cprintf("ENTER 11 FOR USING TAN INVERSE       \r\n");
cprintf("-------------------------------------\r\n");

scanf("%d",&p);
clrscr();
cprintf("ENTER THE ANGLE OR NUMBER\r\n");
scanf("%f",&x);
switch(p)

{

case 1: result=sin(x*(3.14/180));
printf("RESULT = %f",result);
break;
case 2: result= cos(x*(3.14/180));
printf("RESULT = %f",result);
break;
case 3: result= tan(x*(3.14/180));
printf("RESULT = %f",result);
break;
case 4: result= cos(x*(3.14/180));
k=1/result;
printf("RESULT = %f",k);
break;
case 5: result= sin(x*(3.14/180));
k=1/result;
printf("RESULT = %f",k);
break;
case 6: result= tan(x*(3.14/180));
k=1/result;
printf("RESULT = %f",k);
break;
case 7: result=log10(x);
printf("RESULT = %f",result);
break;
case 8: result=exp(x);
printf("RESULT = %f",result);
break;
case 9: result=asin(x);
k=((result*180)/3.14);
printf("RESULT = %f",result);
break;
case 10: result=acos(x);
k=((result*180)/3.14);
printf("RESULT = %f",k);
break;
case 11: result=atan(x);
k=((result*180)/3.14);
printf("RESULT = %f",result);
break;
default:
cprintf("OPERATION DOES NOT EXIST\n");
break;

}
printf("\r\n");
printf("PRESS 1 CONTINUE AGAIN    \r\n");
printf("--------------------------\r\n");
printf("\r\n");
printf("PRESS 2 TO GO ON MAIN PAGE\r\n");
printf("--------------------------\r\n");
printf("\r\n");
printf("PRESS 3 FOR EXIT          \r\n");
printf("--------------------------\r\n");
printf("\r\n");
scanf("%d",&che);
clrscr();
}
}
while(che==1);
if(che==2)
{
main();
m++;
break;
}
else
exit(0);

}
break;



case 5:
{
do
{
{
cprintf("ENTER 1 FOR USING LENGTH      CONVERSION\r\n");
cprintf("----------------------------------------\r\n");
cprintf("ENTER 2 FOR USING AREA        CONVERSION\r\n");
cprintf("----------------------------------------\r\n");
cprintf("ENTER 3 FOR USING VOLUME      CONVERSION\r\n");
cprintf("----------------------------------------\r\n");
cprintf("ENTER 4 FOR USING SPEED       CONVERSION\r\n");
cprintf("----------------------------------------\r\n");
cprintf("ENTER 5 FOR USING WEIGHT      CONVERSION\r\n");
cprintf("----------------------------------------\r\n");
cprintf("ENTER 6 FOR USING TEMPERATURE CONVERSION\r\n");
cprintf("----------------------------------------\r\n");
scanf("%d",&r);
clrscr();
switch(r)

{

case 1:
cprintf("ENTER 1 FOR  CONVERT M TO KM     \r\n");
cprintf("---------------------------------\r\n");
cprintf("ENTER 2 FOR  CONVERT KM TO M     \r\n");
cprintf("---------------------------------\r\n");
cprintf("ENTER 3 FOR  CONVERT M TO CM     \r\n");
cprintf("---------------------------------\r\n");
cprintf("ENTER 4 FOR  CONVERT CM TO M     \r\n");
cprintf("---------------------------------\r\n");
cprintf("ENTER 5 FOR  CONVERT M TO DM     \r\n");
cprintf("---------------------------------\r\n");
cprintf("ENTER 6 FOR  CONVERT DM TO M     \r\n");
cprintf("---------------------------------\r\n");
cprintf("ENTER 7 FOR  CONVERT FOOT TO INCH\r\n");
cprintf("---------------------------------\r\n");
cprintf("ENTER 8 FOR  CONVERT INCH TO FOOT\r\n");
cprintf("---------------------------------\r\n");
cprintf("ENTER 9 FOR  CONVERT M TO FOOT   \r\n");
cprintf("---------------------------------\r\n");
cprintf("ENTER 10 FOR CONVERT FOOT TO M   \r\n");
cprintf("---------------------------------\r\n");
scanf("%d",&s);
clrscr();
cprintf("ENTER THE QUANITY\r\n");
scanf("%f",&x);
switch(s)

{

case 1: result=x/1000;
printf("%f M = %f KM\n",x,result);
break;
case 2: result=x*1000;
printf("%f KM = %f M\n",x,result);
break;
case 3: result=x*100;
printf("%f M = %f CM\n",x,result);
break;
case 4: result=x/100;
printf("%f CM = %f M\n",x,result);
break;
case 5: result=x*10;
printf("%f M = %f DM\n",x,result);
break;
case 6: result=x/10;
printf("%f DM = %f M\n",x,result);
break;
case 7: result=x*12;
printf("%f FOOT = %f INCH\n",x,result);
break;
case 8: result=x/12;
printf("%f INCH = %f FOOT\n",x,result);
break;
case 9: result=x*3.28;
printf("%f M = %f FOOT\n",x,result);
break;
case 10: result=x/3.28;
printf("%f FOOT = %f M\n",x,result);
break;
default:
cprintf("OPERATION DOES NOT EXIST\n");
break;

}

break;
case 2:
cprintf("ENTER 1 FOR  CONVERT M^2 TO KM^2      \r\n");
cprintf("------------------------------------\r\n");
cprintf("ENTER 2 FOR  CONVERT KM^2 TO M^2      \r\n");
cprintf("------------------------------------\r\n");
cprintf("ENTER 3 FOR  CONVERT YARD TO M^2     \r\n");
cprintf("------------------------------------\r\n");
cprintf("ENTER 4 FOR  CONVERT M^2 TO YARD     \r\n");
cprintf("------------------------------------\r\n");
cprintf("ENTER 5 FOR  CONVERT ACRE TO HECTARE\r\n");
cprintf("------------------------------------\r\n");
cprintf("ENTER 6 FOR  CONVERT HECTARE TO ACRE\r\n");
cprintf("------------------------------------\r\n");
cprintf("ENTER 7 FOR  CONVERT ACRE TO M^2     \r\n");
cprintf("------------------------------------\r\n");
cprintf("ENTER 8 FOR  CONVERT M^2 TO ACRE     \r\n");
cprintf("------------------------------------\r\n");
cprintf("ENTER 9 FOR  CONVERT FOOT TO ACRE^2  \r\n");
cprintf("------------------------------------\r\n");
cprintf("ENTER 10 FOR CONVERT ACRE^2 TO FOOT  \r\n");
cprintf("------------------------------------\r\n");
scanf("%d",&t);
clrscr();
cprintf("ENTER THE QUANTITY\r\n");
scanf("%f",&x);
switch(t)

{

case 1: result=x/1000000;
printf("%f",result);
break;
case 2: result=x*1000000;
printf("%f",result);
break;
case 3: result=x/1.1959;
printf("%f",result);
break;
case 4: result=x*1.1959;
printf("%f",result);
break;
case 5: result=x/2.471;
printf("%f",result);
break;
case 6: result=x*2.471;
printf("%f",result);
break;
case 7: result=x*4046.945;
printf("%f",result);
break;
case 8: result=x/4046.945;
printf("%f",result);
break;
case 9:     result= x/43560.95;
printf("%f",result);
break;
case 10:result=x*43560.95;
printf("%f",result);
break;
default:
cprintf("OPERATION DOES NOT EXIST\n");
break;

}

break;

case 3:
cprintf("ENTER 1 FOR  CONVERT LITRE TO ML         \r\n");
cprintf("-----------------------------------------\r\n");
cprintf("ENTER 2 FOR  CONVERT ML TO LITRE         \r\n");
cprintf("-----------------------------------------\r\n");
cprintf("ENTER 3 FOR  CONVERT LITRE TO CENTI LITRE\r\n");
cprintf("-----------------------------------------\r\n");
cprintf("ENTER 4 FOR  CONVERT CENTI LITRE TO LITRE\r\n");
cprintf("-----------------------------------------\r\n");
cprintf("ENTER 5 FOR  CONVERT LITRE TO DECILITRE  \r\n");
cprintf("-----------------------------------------\r\n");
cprintf("ENTER 6 FOR  CONVERT DECILITRE TO LITRE  \r\n");
cprintf("-----------------------------------------\r\n");
cprintf("ENTER 7 FOR  CONVERT LITRE TO US GALLON  \r\n");
cprintf("-----------------------------------------\r\n");
cprintf("ENTER 8 FOR  CONVERT US GALLON TO LITRE  \r\n");
cprintf("-----------------------------------------\r\n");
cprintf("ENTER 9 FOR  CONVERT LITRE TO HECTOLITRE \r\n");
cprintf("-----------------------------------------\r\n");
cprintf("ENTER 10 FOR CONVERT HECTOLITRE TO LITRE \r\n");
cprintf("-----------------------------------------\r\n");
scanf("%d",&e);
clrscr();
cprintf("ENTER THE QUANTITY\r\n");
scanf("%f",&x);
clrscr();
switch(e)

{

case 1: result=x*1000;
cprintf("%f",result);
break;
 case 2: result=x/1000;
cprintf("%f",result);
break;
 case 3: result=x*100;
cprintf("%f",result);
break;
 case 4: result=x/100;
cprintf("%f",result);
break;
 case 5: result=x*10;
cprintf("%f",result);
break;
 case 6: result=x/10;
cprintf("%f",result);
break;
 case 7: result=x*0.2641720;
cprintf("%f",result);
break;
 case 8: result=x/0.2641720;
cprintf("%f",result);
break;
 case 9: result=x/100;
cprintf("%f",result);
break;
 case 10: result=x*100;
cprintf("%f",result);
break;
default:
cprintf("OPERATION DOES NOT EXIST\n");
break;

}

break;

case 4:
cprintf("ENTER 1 TO  CONVERT KM/s TO KM/h          \r\n");
cprintf("------------------------------------------\r\n");
cprintf("ENTER 2 TO  CONVERT KM/h TO KM/s          \r\n");
cprintf("------------------------------------------\r\n");
cprintf("ENTER 3 TO  CONVERT KM/h TO MILE/h        \r\n");
cprintf("------------------------------------------\r\n");
cprintf("ENTER 4 TO  CONVERT MILE/h TO KM/h        \r\n");
cprintf("------------------------------------------\r\n");
cprintf("ENTER 5 TO  CONVERT KM/s TO M/s           \r\n");
cprintf("------------------------------------------\r\n");
cprintf("ENTER 6 TO  CONVERT M/s TO KM/s           \r\n");
cprintf("------------------------------------------\r\n");
cprintf("ENTER 7 TO  CONVERT SPEED OF LIGHT TO KM/s\r\n");
cprintf("------------------------------------------\r\n");
cprintf("ENTER 8 TO  CONVERT SPEED OF LIGHT TO KM/h\r\n");
cprintf("------------------------------------------\r\n");
cprintf("ENTER 9 TO  CONVERT M/s TO INCH/s         \r\n");
cprintf("------------------------------------------\r\n");
cprintf("ENTER 10 TO CONVERT INCH/s TO M/s         \r\n");
cprintf("------------------------------------------\r\n");
scanf("%d",&f);
clrscr();
cprintf("ENTER THE QUANTITY\r\n");
scanf("%f",&x);
clrscr();
switch(f)

{

case 1: result=x*3600;
cprintf("%f",result);
break;
case 2: result=x/3600;
cprintf("%f",result);
break;
case 3: result=x/1.6093;
cprintf("%f",result);
break;
case 4: result=x*1.6093;
cprintf("%f",result);
break;
case 5: result=x*1000;
cprintf("%f",result);
break;
case 6: result=x/1000;
cprintf("%f",result);
break;
case 7: result=x*299796.1386;
cprintf("%f",result);
break;
case 8: result=x*1079266099.05;
cprintf("%f",result);
break;
case 9: result=x*39.38;
cprintf("%f",result);
break;
case 10: result=x/39.38;
cprintf("%f",result);
break;
default:
cprintf("OPERATION DOES NOT EXIST\n");
break;

}

break;

case 5:
cprintf("ENTER 1 TO  CONVERT KG TO GRAM     \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 2 TO  CONVERT GRAM TO KG     \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 3 TO  CONVERT KG TO MG       \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 4 TO  CONVERT MG TO KG       \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 5 TO  CONVERT KG TO POUND    \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 6 TO  CONVERT POUND TO KG    \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 7 TO  CONVERT KG TO CARAT    \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 8 TO  CONVERT CARAT TO KG    \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 9 TO  CONVERT KG TO LONG TON \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 10 TO CONVERT LOG TON TO KG  \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 11 TO CONVERT KG TO QUINTAL  \r\n");
cprintf("-----------------------------------\r\n");
cprintf("ENTER 12 TO CONVERT QUINTAL TO KG  \r\n");
cprintf("-----------------------------------\r\n");
scanf("%d",&g);
clrscr();
cprintf("ENTER THE QUANTITY\r\n");
scanf("%f",&x);
clrscr();
switch(g)

{

case 1: result=x*1000;
cprintf("%f",result);
break;
 case 2: result=x/1000;
cprintf("%f",result);
break;
 case 3: result=x*1000000;
cprintf("%f",result);
break;
 case 4: result=x/1000000;
cprintf("%f",result);
break;
 case 5: result=x*2.2046;
cprintf("%f",result);
break;
 case 6: result=x/2.2046;
cprintf("%f",result);
break;
 case 7: result=x*5000;
cprintf("%f",result);
break;
 case 8: result=x/5000;
cprintf("%f",result);
break;
 case 9: result=x/1016.55;
cprintf("%f",result);
break;
 case 10: result=x*1016.53;
cprintf("%f",result);
break;
 case 11: result=x/100;
cprintf("%f",result);
break;
 case 12: result=x*100;
cprintf("%f",result);
break;

default:
cprintf("OPERATION DOES NOT EXIST\n");
break;

}

break;

case 6:
cprintf("ENTER 1 TO CONVERT CENTI GRADE TO FARENHITE \r\n");
cprintf("--------------------------------------------\r\n");
cprintf("ENTER 2 TO CONVERT FARENHITE TO CENTIGRADE  \r\n");
cprintf("--------------------------------------------\r\n");
cprintf("ENTER 3 TO CONVERT FARENHITE TO KELVIN      \r\n");
cprintf("--------------------------------------------\r\n");
cprintf("ENTER 4 TO CONVERT KELVIN TO FARENHITE      \r\n");
cprintf("--------------------------------------------\r\n");
cprintf("ENTER 5 TO CONVERT CENTI GRADE TO KELVIN    \r\n");
cprintf("--------------------------------------------\r\n");
cprintf("ENTER 6 TO CONVERT KELVIN TO CENTI GRADE    \r\n");
cprintf("--------------------------------------------\r\n");
scanf("%d",&g);
clrscr();
cprintf("ENTER THE QUANTITY\r\n");
scanf("%f",&x);
clrscr();
switch(g)

{

case 1: result= (1.8*x)+32;
printf("%f",result);
break;
case 2: result= (x-32)/1.8;
printf("%f",result);
break;
case 3: result=  (x-32)*5/9+273.15;
printf("%f",result);
break;
case 4: result=(x-273.15)*9/5+32;
printf("%f",result);
break;
case 5: result= x+273.15;
printf("%f",result);
break;
case 6: result=    x-273.15;
printf("%f\n",result);
break;

default:
cprintf("OPERATION DOES NOT EXIST\n");
break;

}
break;
default:
cprintf("OPERATION DOES NOT EXIST\n");
break;

}

printf("\r\n");
printf("\r\nPRESS 1 CONTINUE AGAIN    \r\n");
printf("------------------------------\r\n");
printf("\r\n");
printf("\r\nPRESS 2 TO GO ON MAIN PAGE\r\n");
printf("------------------------------\r\n");
printf("\r\n");
printf("\r\nPRESS 3 FOR EXIT          \r\n");
printf("------------------------------\r\n");
printf("\r\n");
scanf("%d",&che);
clrscr();
}
}
while(che==1);
if(che==2)
{
main();
m++;
break;
}
else
exit(0);

}

break;
case 6:
{
do
{
{
printf("ENTER 1 FOR CHECKING ADD RESULTS     \r\n");
printf("-------------------------------------\r\n");
printf("\r\n");
printf("ENTER 2 FOR CHECK SUBTRACTION RESULTS\r\n");
printf("-------------------------------------\r\n");
printf("\r\n");
printf("ENTER 3 FOR CHECK MULTIPLY RESULTS   \r\n");
printf("-------------------------------------\r\n");
printf("\r\n");
printf("ENTER 4 FOR CHECK DIVISON RESULTS    \r\n");
printf("-------------------------------------\r\n");
printf("\r\n");
scanf("%d",&br);
clrscr();
switch(br)
{
case 1:
aptr=fopen("add.txt","r");
while(!feof(aptr))
{
x1=fgetc(aptr);
y1=fgetc(aptr);
result1=fgetc(aptr);
fflush(stdin);
printf("%f + %f = %f\n",x1,y1,result1);
}
fclose(aptr);
break;
case 2:
sptr=fopen("sub.txt","r");
while(!feof(sptr))
{
x2=fgetc(sptr);
y2=fgetc(sptr);
result2=fgetc(sptr);
printf("%f - %f = %f\n",x2,y2,result2);
}
fclose(sptr);
break;
case 3:
mptr=fopen("mul.txt","r");
while(!feof(mptr))
{
x3=fgetc(mptr);
y3=fgetc(mptr);
result3=fgetc(mptr);
printf("%f * %f = %f\n",x3,y3,result3);
}
fclose(mptr);
break;
case 4:
dptr=fopen("div.txt","r");
while(!feof(dptr))
{
x4=fgetc(dptr);
y4=fgetc(dptr);
result4=fgetc(dptr);
printf("%f / %f = %f\n",x4,y4,result4);
}
fclose(dptr);
break;
default:
printf("OPERATION DOES NOT EXIST\r\n");
break;
}
printf("\r\n");
printf("PRESS 1 CONTINUE AGAIN    \r\n");
printf("--------------------------\r\n");
printf("\r\n");
printf("PRESS 2 TO GO ON MAIN PAGE\r\n");
printf("--------------------------\r\n");
printf("\r\n");
printf("PRESS 3 FOR EXIT          \r\n");
printf("--------------------------\r\n");
printf("\r\n");
scanf("%d",&che);
clrscr();
}
}
while(che==1);
if(che==2)
{
main();
m++;
break;
}
else
exit(0);
}
break;
case 7:
exit(0);
break;
default:
cprintf("OPERATION DOES NOT EXIST\r\n");
break;

}

}
getch();

}
