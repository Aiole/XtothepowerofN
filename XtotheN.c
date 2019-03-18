#include <stdio.h>
#include <math.h>

//Jack Hershey
int main(void){

  int d,orin,newy,z,newn, i, negative;
  double x,n,otherx,p,l,y,t,xx,decimals,root,estdec,v,nn,test;
 printf("Enter the numbers: ");
 scanf("%lf" "%lf", &x, &n);

 test=1;
 negative=0;
 
 printf("n: %lf\n", n);

 if(n<0){
   n=n*-1;
   negative=1;
 }
  z=n;
  nn=n;
  
 if(n!=z){
   
   printf("non integer\n");
   root = sqrt(x); 
   estdec = .5;
  decimals=n-z;
  printf("actual decimal value: %lf\n", decimals);

  for(i=0; i<100000; i=i+1){
    
   if(decimals<estdec){
     root = sqrt(root);
     estdec = (estdec / 2); 
    }
   else{
     root= sqrt(root*(root*root));
     estdec = (estdec + (2*estdec)) / 2;
   }
   
   if((decimals - estdec) > 0 && (decimals - estdec) < .0001){
     break;
   }
    if((decimals - estdec) < 0 && (decimals - estdec) > -.0001){
     break;
   }

   printf("estdec: %lf\n", estdec);
  }
  
  }

  printf("final estdec: %lf\n", estdec);
  

   
 
 v=x;
 p=1;

 
while(n != 0){
   newy=fmod(n,2);
     if(newy == 1){
       p = p * v;
     }
     
	 v=v*v;
      n=floor(n/2);
 }
 

  printf("root: %lf\n", root);
   printf("nn: %lf\n", nn);
     printf("p: %lf\n", p);
 
 if((test-root)==test){
 printf("final answer:  %lf\n", p);
 }
 if (negative==1){
     printf("final answer:  %lf\n", 1/(p * root));
   }
 else{
    printf("final answer:  %lf\n", p * root);
 }
  
 if(negative==1){
   printf("check= %lf\n", pow(x,-nn));
 } else{
 printf("check= %lf\n", pow(x,nn));
}

}

