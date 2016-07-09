# dsec
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,num,a[10],temp;
  clrscr();
  scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
 }
 num=find(&a,n);
 printf("\n%d",num);
 getch();
}
int find(int *a,int n)
{
 int i,k;
 for(i=0;i<n;i++)
 {
  if(a[i]==i)
  {
   k=a[i];
  }
 }
 return k;
}
