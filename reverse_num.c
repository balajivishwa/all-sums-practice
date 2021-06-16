#include<stdio.h>
#include<math.h>


int recerse(int a ){
int reminder,rev=0;
while (a!=0)
{
    reminder=a%10;
    rev=rev*10+reminder;
    a=a/10;
}
printf("the reversed number is : %d",rev);



}
int main(){
    int a;
    printf("enter a number for reversing : ");
    scanf("%d",&a);
    recerse(a);


}
