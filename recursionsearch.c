#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[10],i,n,key;
int mid,beg,end,pos;
int bs(int key,int beg,int end,int a[]);
int startt,timeln,endt,timebn;


int ls(int key,int i)
{

if(a[i]==key)
{
printf("element found at positon %d",i);

}
else
{

return ls(key,i++);
}

}

void main()
{
int q;
printf("enter the size of the array = ");
scanf("%d",&n);
printf("enter the elements into the array = ");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter th element to be searched = ");
scanf("%d",&key);
printf("choice= ");
scanf("%d",&q);
if(q==0){
startt=clock();
ls(key,0);
endt=clock();
timeln=endt-startt;}
else{
startt=clock();
bs(key,0,n-1,a);
endt=clock();
timebs=endt-startt;
}
}

int bs(int key,int beg,int end,int a[])
{
mid=(beg+end)/2;
if(key==a[mid]){
printf("element found at position %d",mid);
exit(0);
}
else if(a[mid]>key)
{
end=mid-1;
return bs(key,beg,end,a);
}
else
{
beg=mid+1;
return bs(key,beg,end,a);

}
}
