#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<sys/time.h>
#define PI 3.14159265358979323846
#define KEY "Enter the calculator Operation you want to do:"
// Function prototype declaration
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void temperature();
int digital();
void calculator_operations();
void sct();
void scth();
void logarithm();
void exponent();
void india();
void UK();
void Newzealand();
void Russia();
void Dubai();
void America();
// Start of Main Program
int main()
{
int X=1;
char Calc_oprn;
// Function call
calculator_operations();
while(X)
{
printf("\n");
printf("%s : ", KEY);
Calc_oprn=getche();
switch(Calc_oprn)
{
case '+': addition();
break;
case '-': subtraction();
break;
case '*': multiplication();
break;
case '/': division();
break;
case '?': modulus();
break;
case '!': factorial();
break;
case '^': power();
break;
case 't': temperature();
break;
case 'd': digital();
break;
case 's': sct();
break;
case 'p': scth();
break;
case 'l': logarithm();
break;
case 'e': exponent();
break;
case 'y': india();
UK();
Russia();
Newzealand();
Dubai();
America();
break;
case 'H':
case 'h': calculator_operations();
break;
case 'Q':
case 'q': exit(0);
break;
case 'c':
case 'C': system("cls");
calculator_operations();
break;
default : system("cls");
printf("\n****You have entered unavailable option");
printf("*\n");
printf("\n***Please Enter any one of below available ");
printf("options**\n");
calculator_operations();
}
}
}
//Function Definitions
void calculator_operations()
{
//system("cls"); use system function to clear
//screen instead of clrscr();
printf("\n Welcome to C calculator \n\n");
printf("* Press 'Q' or 'q' to quit ");
printf("the program *\n");
printf("* Press 'H' or 'h' to display ");
printf("below options *\n\n");
printf("Enter 'C' or 'c' to clear the screen and");
printf(" display available option \n\n");
printf("Enter + symbol for Addition \n");
printf("Enter - symbol for Subtraction \n");
printf("Enter * symbol for Multiplication \n");
printf("Enter / symbol for Division \n");
printf("Enter ? symbol for Modulus\n");
printf("Enter ^ symbol for Power \n");
printf("Enter ! symbol for Factorial \n");
printf("Enter t for temperature conversion from degrees to fahrenheit and kelvin \n");
printf("Enter d for displaying digital clock timer \n");
printf("Enter s to find sine,cosine and tangent values \n");
printf("Enter p to find hyperbolic sine,cosine and tangent values \n");
printf("Enter l to find logarithmic values \n");
printf("Enter e to find exponent to xth power values \n");
printf("Enter y to see time in following countries:\nINDIA\nUK\nRUSSIA\nNEWZEALAND\nDUBAI\n\n");
}
void addition()
{
int n, total=0, k=0, number;
printf("\nEnter the number of elements you want to add:");
scanf("%d",&n);
printf("Please enter %d numbers one by one: \n",n);
while(k<n)
{
scanf("%d",&number);
total=total+number;
k=k+1;
}
printf("Sum of %d numbers = %d \n",n,total);
}
void subtraction()
{
int a, b, c = 0;
printf("\nPlease enter first number : ");
scanf("%d", &a);
printf("Please enter second number : ");
scanf("%d", &b);
c = a - b;
printf("\n%d - %d = %d\n", a, b, c);
}
void multiplication()
{
int a, b, mul=0;
printf("\nPlease enter first numb : ");
scanf("%d", &a);
printf("Please enter second number: ");
scanf("%d", &b);
mul=a*b;
printf("\nMultiplication of entered numbers = %d\n",mul);
}
void division()
{
float a, b, d=0;
printf("\nPlease enter first number : ");
scanf("%f", &a);
printf("Please enter second number : ");
scanf("%f", &b);
d=a/b;
printf("\nDivision of entered numbers=%f\n",d);
}
void modulus()
{
int a, b, d=0;
printf("\nPlease enter first number : ");
scanf("%d", &a);
printf("Please enter second number : ");
scanf("%d", &b);
d=a%b;
printf("\nModulus of entered numbers = %d\n",d);
}
void power()
{
double a,num, p;
printf("\nEnter two numbers to find the power \n");
printf("number: ");
scanf("%lf",&a);
printf("power : ");
scanf("%lf",&num);
p=pow(a,num);
printf("\n%lf to the power %lf = %lf \n",a,num,p);
}
int factorial()
{
int i,fact=1,num;
printf("\nEnter a number to find factorial : ");
scanf("%d",&num);
if (num<0)
{
printf("\nPlease enter a positive number to");
printf(" find factorial and try again. \n");
printf("\nFactorial can't be found for negative");
printf(" values. It can be only positive or 0 \n");
return 1;
}
for(i=1;i<=num;i++)
fact=fact*i;
printf("\n");
printf("Factorial of entered number %d is:%d\n",num,fact);
return 0;
}
void temperature()
{
float c,f,k;
printf("\nenter temperature in degree celcius");
scanf("%f",&c);
f=((9*c)/5)+32;
k=c+273.15;
printf("the temperature in degree fehrenheit is = %f",f);
printf("the temperature in kelvin is = %f",k);
}
int digital()
{
int hour, minute, second;
hour=minute=second=0;
while(1)
{
//clear output screen
system("cls");
//print time in HH : MM : SS format
printf("%02d : %02d : %02d ",hour,minute,second);
//clear output buffer in gcc
fflush(stdout);
//increase second
second++;
//update hour, minute and second
if(second==60){
minute+=1;
second=0;
}
if(minute==60){
hour+=1;
minute=0;
}
if(hour==24){
hour=0;
minute=0;
second=0;
}
Sleep(1000); //wait till 1 second
}
return 0;
}
void sct()
{
float i, sin_value,cos_value,tan_value;
printf("\nEnter the value of i in degrees for which you want to find sine(i),cosine(i),tangent(i) values\n");
scanf("%f",&i);
i=(i*(PI/180));
sin_value=sin(i);
cos_value=cos(i);
tan_value=tan(i);
printf("the value of sin(%f) : %f \n",i,sin_value);
printf("the value of cos(%f) : %f \n",i,cos_value);
printf("the value of tan(%f) : %f \n",i,tan_value);
}
void scth()
{
float i, sinh_value,cosh_value,tanh_value;
printf("\nEnter the value of i in degrees for which you want to find hyperbolic sineh(i),cosineh(i),tangenth(i) values\n");
scanf("%f",&i);
i=(i*(PI/180));
sinh_value=sinh(i);
cosh_value=cosh(i);
tanh_value=tanh(i);
printf("the value of sinh(%f) : %f \n",i,sinh_value);
printf("the value of cosh(%f) : %f \n",i,cosh_value);
printf("the value of tanh(%f) : %f \n",i,tanh_value);
}
void logarithm()
{
float k,log_value,log10_value;;
printf("\nEnter the value of k for which you want to find log and log to the base 10 (log10) values\n");
scanf("%f",&k);
log_value=log(k);
log10_value=log10(k);
printf("the value of log(%f) : %f \n",k,log_value);
printf("the value of log10(%f) : %f \n",k,log10_value);
}
void exponent()
{
float k,exp_value;
printf("\nEnter the value of k for which you need to find exponential to kth power value\n ");
scanf("%f",&k);
exp_value=exp(k);
printf("the value of exp(%f) : %f \n",k,exp_value);
}
void UK()
{
int day,min,hour,sec,month,year;
time_t t = time(NULL);
struct tm *local = localtime(&t);
hour=local->tm_hour;
min=local->tm_min;
sec=local->tm_sec;
day=local->tm_mday;
month=local->tm_mon+1;
year=local->tm_year+1900;
printf("current time in UK is :\n");
hour=hour-5;
min= min-30;
if(sec==60){
min+=1;
sec=0;
}
if(min==60){
hour+=1;
min=0;
}
if(hour==24){
hour=0;
min=0;
sec=0;
}
if(hour<0)
hour=hour+24;
if(min<0)
{
abs(hour-1);
min=min+60;
}
printf("now: %d:%d:%d\n", hour, min, sec);
}
void india()
{
int day,min,hour,sec,month,year;
time_t t = time(NULL);
struct tm *local = localtime(&t);
hour=local->tm_hour;
min=local->tm_min;
sec=local->tm_sec;
day=local->tm_mday;
month=local->tm_mon+1;
year=local->tm_year+1900;
printf("\ncurrent time in india is :\n");
if(sec==60){
min+=1;
sec=0;
}
if(min==60){
hour+=1;
min=0;
}
if(hour==24){
hour=0;
min=0;
sec=0;
}
printf("now: %d:%d:%d\n", hour, min, sec);
}
void Newzealand()
{
int day,min,hour,sec,month,year;
time_t t = time(NULL);
struct tm *local = localtime(&t);
hour=local->tm_hour;
min=local->tm_min;
sec=local->tm_sec;
day=local->tm_mday;
month=local->tm_mon+1;
year=local->tm_year+1900;
printf("current time in Newzealand is :\n");
hour=hour+7;
min=min+30;
if(sec==60){
min+=1;
sec=0;
}
if(min==60){
hour+=1;
min=0;
}
if(hour==24){
hour=0;
min=0;
sec=0;
}
if(hour>24)
{
hour=abs(hour-24);
}
if(min>60)
{
hour=hour+1;
min=abs(min-60);
}
printf("now: %d:%d:%d\n", hour, min, sec);
}
void Dubai()
{
int day,min,hour,sec,month,year;
time_t t = time(NULL);
struct tm *local = localtime(&t);
hour=local->tm_hour;
min=local->tm_min;
sec=local->tm_sec;
day=local->tm_mday;
month=local->tm_mon+1;
year=local->tm_year+1900;
printf("current time in Dubai is :\n");
hour= hour-1;
min=min-30;
if(sec==60){
min+=1;
sec=0;
}
if(min==60){
hour+=1;
min=0;
}
if(hour==24){
hour=0;
min=0;
sec=0;
}
if(min<0)
{
abs(hour-1);
min=min+60;
}
if(hour<=0){
hour=hour+24;
}
printf("now: %d:%d:%d\n",hour,min,sec);
}
void Russia()
{
int day,min,hour,sec,month,year;
time_t t = time(NULL);
struct tm *local = localtime(&t);
hour=local->tm_hour;
min=local->tm_min;
sec=local->tm_sec;
day=local->tm_mday;
month=local->tm_mon+1;
year=local->tm_year+1900;
printf("current time in Russia is :\n");
hour= hour-2;
min=min-30;
if(sec==60){
min+=1;
sec=0;
}
if(min==60){
hour+=1;
min=0;
}
if(hour==24){
hour=0;
min=0;
sec=0;
}
if(min<=0)
{
abs(hour-1);
min=min+60;
}
if(hour<0){
hour=hour+24;
}
if(hour==0){
hour=23;
}
printf("now: %d:%d:%d\n", hour, min, sec);
}
void America()
{
int day,min,hour,sec,month,year;
time_t t = time(NULL);
struct tm *local = localtime(&t);
hour=local->tm_hour;
min=local->tm_min;
sec=local->tm_sec;
day=local->tm_mday;
month=local->tm_mon+1;
year=local->tm_year+1900;
printf("current time in America is :\n");
hour= hour-10;
min=min-30;
if(sec==60){
min+=1;
sec=0;
}
if(min==60){
hour+=1;
min=0;
}
if(hour==24){
hour=0;
min=0;
sec=0;
}
if(min<=0)
{
abs(hour-1);
min=min+60;
}
if(hour<0){
hour=hour+24;
}
if(hour==0){
hour=23;
}
printf("now: %d:%d:%d\n", hour, min, sec);
}
