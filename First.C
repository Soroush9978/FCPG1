#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAXSIZE 100
#define SIZE 40


int main(){
                       //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& THIS IS THE PATR OF PROGRAM TO GET THE POLYNOMILA AND EVALUATE THE FUNCTIONA AT THE POINT&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//
                                                             //P(x) = A0 + X(A1 + X(A2 + X(A3 + X(Q4 + X(...X(An-1 + XAn))))//

int pow,i,nuo,j;
   int array[MAXSIZE];
      float x, sumVal;
           float  sumVal1[MAXSIZE];
                int number;

          printf("\tThis part of the programm is desigend for getting the polynomial.\n\t\t            and evaluate the poits.\n\n ");
                    for(int j=0; j<=1550000000; j++);

         printf("Enter the order of your polynomial \n");

                scanf("%d", &nuo);

                                                            /*  Read the coefficients into an array */
         printf("Enter %d coefficients \n", nuo + 1);
               for (i = 0; i <= nuo; i++)
               {

                    scanf("%d", &array[i]);

                }


                                                                            // while loop for repaeating the process.

              while(number!=0){                                            // CALCULATING THE VALUE OF X

    sumVal = array[0];

                printf("Enter the value of x \n");

                       scanf("%f", &x);

               for (i = 1; i <= nuo; i++)
     {
        sumVal = sumVal * x + array[i];
     }
    pow = nuo;
                                                                                 // printing the polynomial
          printf("Given polynomial is:====> ");

                for (i = 0; i <= nuo; i++)
    {
                      if (pow < 0)
        {
                            break;
        }
                                                            // printing proper polynomial function //
                            if (array[i] > 0)

          printf(" + ");

                                else if (array[i] < 0)
          printf(" - ");

                             else
          printf(" ");

          printf("%dx^%d  ", abs(array[i]), pow--);
    }

          printf("\n Sum of the polynomial = %6.2f \n", sumVal);

          printf(" Please enter 0  to continue or any number to repeat the process.\n\n" );
                 scanf("%d" , &number);
}


      //******************************************************IN THIS PART WE ARE GOING TO USE LAGRANGE INTERPOLATAION FORMULA//*****************************************************

           printf("\t  Okay now we have our data, So we can put it in:\n \t           <<Lagrange Interpolation Formula.>>\n\n");



        // Definig needed variable

	            int k, z, data ,repeat;
                     float dadex[SIZE], dadey[SIZE], coeff[SIZE], value, sum=0.0, factor[SIZE];

	     printf("How many data are available? \n");
	           scanf("%d",&data);
        // getting the x

        printf("\nEnter the value of x whose value is to be calculated?");
	            scanf("%f",&value);
                                                       //putting  x and y in the arrays
	for(k=0; k<data ; k++){

		 printf("\nEnter X[%d]",k);
		        scanf("%f",&dadex[k]);

		 printf("Enter Y[%d]",k);
		        scanf("%f",&dadey[k]);
	}
                                                        // calculating the lagrange co efficents here we cal them factors.
	for(k=0; k<data; k++){

		factor[k] = 1.0;
		              for(z=0; z<data; z++){

			                                if(k!=z){

				                              factor[k] = factor[k] * (value - dadex[z])/(dadex[k]-dadex[z]);
			}

		}
	}
	    printf("Coeff are: \n");

    for(k=0;k<data;k++){

		printf("\nfactor[%d] = %f",k, factor[k]);
		// The final result

		sum = sum + factor[k] * dadey[k];
	}
	    printf("\n%f\n",sum);


                                               printf("\n\n\t         *********free software free society***********");
}











