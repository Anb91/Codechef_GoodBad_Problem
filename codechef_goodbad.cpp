#include<stdio.h>
int main()
 {
 	
 int t,n,k,i,s,c;
 int anirban=0;
 scanf("%d",&t);
 int result[t];
 while(t-- >0)
 {
 s=0;
 c=0;
 scanf("%d",&n);
 
 scanf("%d",&k);
 
 char b[n];
 
 scanf("%s",b);
 
 for(i=0;b[i]!='\0';i++)
 {
 
 if(b[i]>='a'&&b[i]<='z'){
 
 s++;
}
 else 
 
 c++;
 
}

 
 if (c>k&&s<=k){
 result[anirban]=1;
 anirban++;
 }
 if (c<=k&&s>k){
 result[anirban]=2;
 anirban++;
 }
 if (c<=k&&s<=k){
 result[anirban]=3;
 anirban++;
 }
 if (c>k&&s>k){
 result[anirban]=4;
 anirban++;	
 	
 }
 
 
 
}

for( int p=0;p<anirban;p++){

if(result[p]==1)
printf("brother\n");
if(result[p]==2)
printf("chef\n");
if(result[p]==3)
printf("both\n");
if(result[p]==4)
printf("none\n");

}
return 0;
}
