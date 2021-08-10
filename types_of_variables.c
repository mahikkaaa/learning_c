//types of variable : local,global

   #include<stdio.h>
   int p=20; //global
   main()
   {
       int x=10; //local
       printf("local variable x is %d",x);
       printf("\nGlobal variable p inside main function is %d",p);
       fun();
   }


   void fun()
   { static  int a=10;  //static
       a++;
       printf("\n\n\ninside function fun");
       printf("\n variable a is %d",a);
       printf("\nGlobal variable p inside function is %d\n\n",p);

   }