#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "all_files.c"
int maths_cal();
int loops();
int if_else();
int arrays();

void menu() {
    int i;
    printf("1.maths_cal \n 2. if_else \n 3. loops \n 4. arrays \n");
    printf("enter your choice \n");
    scanf("%d", &i);

    switch (i) {

        case 1:   maths_cal();
                  break;

        case 2:   if_else();
                  break;

        case 3:   loops();
                  break;

        case 4 :  arrays();
                  break;

        default :
                  printf ("please check the menu \n");

    }//switch ending

}//menu ending

    int main(int argc, char* argv[]) {

        if (argc != 2) {
            printf("invalid credetials \n");
             
        } else {
            if (strcmp(argv[1], "maths_cal") == 0 ) {

                 maths_cal(); 
                  
            } else if (strcmp(argv[1],"if_else") == 0) {
                 
                if_else();
                 
            } else if (strcmp(argv[1],"loops") == 0) {
                 
                loops();

                 } else if (strcmp(argv[1],"array") == 0) {
                      
                     arrays();

                      } else {
                           
                          printf("please check the read only file and try again \n");

                           } 
       }//else ending
    
    return 0;
}
     
    int maths_cal() {
         
        char k;
         
        int i;

         printf("1. factorial \n 2. power \n");
          
         printf("enter your choice \n");

          scanf("%d", &i);

           switch (i) {
                
               case 1:
                    
                   factorial();

                    break;
                     
               case 2:
                     
                    power();
                     
                    break;
                     
               default :
                     printf("check the option");

                      }
            
           printf("do you want to continue or exit \n if continue then press y \n c for change of option\n for exit enter n\n");

           scanf(" %c",&k);

            if (k == 'y')   {
                 
                 maths_cal();

            }  else if (k == 'c')  {
                 
                 menu();

            }     else  {
                 exit(0); 
            }
             return 0;
              
    }
     
    int loops() {

         int i;
          
         char k;

          printf("1. odd_series \n 2. pyramid \n");

           printf("enter your choice \n");
            
           scanf("%d", &i);

            switch (i) {
                 
                case 1:

                    odd_series();

                    break;

                case 2:

                     pyramid();
                      
                     break;
                      
                default :
                      printf("check the option");

                       }
             
            printf("Do you want to continue or exit \n if continue then press y \n c for change of option\n for exit enter n\n");
             scanf(" %c",&k);
             if (k == 'y') {

                  loops();

             } if (k == 'c')
                   
                   menu();
               
              if (k == 'n')

                   exit (0);
               
              return 0;
               
    }
     
    int if_else() {
         
         int i;
          
         char k;
          
         printf("1. even_odd \n 2. is_vowel\n");

          printf("enter your choice \n");

           scanf("%d", &i);
            
           switch (i) {

                case 1:

                    even_odd();

                    break;

                case 2:

                     is_vowel();
                      
                     break;

                      default :
                      printf("check the option");
                       
           }
            
            
            printf("do you want to continue or exit \n if continue then press y \n c for chnge of option\n for exit enter n\n");
             scanf(" %c",&k);
            if (k == 'y') 

                if_else();  

            if (k == 'c')

                 menu();

             if (k == 'n')

                  exit (0);
              
             return 0;
              
    }
     
int arrays() {
         
        int i;

         char k;

          printf("1.sum_array \n 2.reverse_array \n");

           printf("enter your choice \n");
            
           scanf("%d", &i);

            switch (i) {
                 
                case 1:

                    sum_array();

                    break;

                case 2:
                     
                    reverse_array();
                     
                    break;

                     default :
                     printf("check the option");
                      
            }//i ending
             
             

             printf("do you want to continue or exit \n if continue then press y \n c for chnge of option\n for exit enter n\n");
              scanf(" %c",&k);
              if (k == 'y') 

                   arrays();

               if (k == 'c')
                    
                    menu();

                if (k == 'n')

                     exit (0);
        return 0; 
}    
           
