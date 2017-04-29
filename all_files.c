#include <stdio.h>

int factorial() {
int n;
          int i;
              int f = 1;
               

                 printf("enter the value of n\n");
                    

                  scanf("%d", &n);
                   

                     for(int i = 1;i<=n;i++) {
                           

                               f=f*i;
                                

                                  }
                       

                       printf("%d\n", f);

                          return 0;
}


int power () {
      

      int n;


      int x;


      int y = 1 ;


      printf("enter the number and its power \n");


      scanf("%d%d", &x,&n);
     while(n > 0)  {

        y = y * x;
           n--; 
      }

      printf("%d\n", y);
        

        return 0;
}


int even_odd() {
      

      int n;
       

         printf("enter the number \n");
             

         scanf("%d", &n);
           

           if (n%2==0)
                 

                 printf("even \n");
            

              else
                    

                    printf("odd \n");


}


int is_vowel() {
     

       char ch;
       
         printf("\nEnter a letter");
         scanf(" %c", &ch);

        if (ch =='a'||ch =='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
                printf("is vowel \n");
           

         else
                

              printf("not a vowel \n");

          return 0;
}



int odd_series() {
     

       int n;


          int i;


              printf("enter the value of n \n");


                  scanf("%d", &n);
                   

                     for(i=1; i <=n; i++) {
                           

                               if(i %2 != 0)
                                      

                                        printf("%d ",i);
                                  

                                }
                     printf("\n");
                       return 0;

}


int pyramid() {
      

      int i;
        

        int j;
          

          printf("enter the rows and cols \n");
           

            scanf("%d%d",&i,&j);
              

              for(int y = 0; y < i; y++) {
                    

                        for (int z= 0;z <j;z++) {
                                

                                    printf("%d ", i);
                                      

                                          }
                              

                          printf("\n");
                            

                            }


}



int sum_array() {
      

      int a[50];
         

       int n;
        int i;
          

         int sum = 0;
          

            printf("enter the siz of the array \n");
               

             scanf("%d",&n);
              

                printf("enter the elemnt fo the array \n");
                  

                  for (int i=0;i<n;i++) {
                       

                             scanf("%d", &a[i]);
                                

                              }
                    

                    for(i=0;i<n;i++) {
                         

                               sum = sum + a[i];
                                  

                                }
                      

                      printf("%d \n", sum);


                      return 0;
}


int reverse_array() {
     

     int a[50];
       

       int n;
         int i;
           

            printf("enter the size of the array \n");
              

             scanf("%d",&n);
               

               printf("enter the element fo the array \n");
                 

                 for (i=0;i<n;i++) {
                        

                          scanf("%d", &a[i]);


                 }


                 for(i=n -1;i>=0;i--) {

                        printf("%d ",a[i]);
                            


                 }
                 return 0;

}
