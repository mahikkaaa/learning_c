#include<stdio.h>
float r;
main()
{  float area(float ra);
   float perimeter(float );
   float ans1,ans2;

   printf("enter radius ");
   scanf("%f",&r);
   ans1= area(r);//calling
   printf("Area of circle is %f \n\n",ans1);
    
   ans2=perimeter(r);
   printf("Perimeter of circle is %f \n\n",ans2);
}
float area(float ra)
{ float ar;

     ar=3.14*ra*ra;
     return(ar);
}
float perimeter(float ras)
{  float pr;

     pr=2*3.14*ras;
     return pr;
}


/**
cube with no return
#include<stdio.h>
main()
{  void cube(int n) ;
    int num,c;
    printf("enter a number ");
    scanf("%d",&num);

    cube(num);//calling or invoking with actual parameter or argument


}

void cube(int n) //definition receiving  formal argument
{
    int result;
    result=n*n*n;
    printf("%d",result);
    return;
}


**/



/**
cube with return 
#include<stdio.h>

main()
{int  cube(int a);//Declaration
   int num,ans;

   printf("Enter any number ");
   scanf("%d",&num);
   ans=cube(num);
   printf("\n Cube is %d",ans);
}

int cube(int a) //definition
{  int result;
   result=a*a*a;
   return result;
   //return(a*a*a);
}

**/


