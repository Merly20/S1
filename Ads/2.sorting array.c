#include<stdio.h>
int main(){
    int n;
    int temp;
    int a[100];
    printf("Enter the number of items:");
    scanf("%d",&n);
printf("Enter the items:");
for (int i = 0; i < n; i++)
{
  scanf("%d",&a[i]);  
}

for (int j = 0; j < n; j++)
{
for (int i = 0; i < n; i++)
{
  if(a[i]>a[i+1])
  
  {

temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;


  }


}}

for (int i = 0; i <n; i++)
{
printf("%d",a[i]);
}

}
    
