#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define L 30
#define N 6
#define MAXSIZE 100
#define SIZE 40

char f[L]={0}, F[L]={0};
double P=0,g[L]={0};
int e, i=0;
float a,b,fa,fb,n,sum=0,suml=0,wi,w1,w2;
void valuable(char[L],int);
float eval(char[L],double[L],int,float);
double romberg(float , float , float, float);
double frobeniusNorm(double*, int, int);
double weddle(float, float);
float square_root(int);
float absolute(float);
float Y(float);

float Lagrange();
float Weddlesrull();
float Rombergs();
float FrobeniusNorm();
float Newtonsmethod();
//float Booles();

int main()
{
    char ch;
    printf("welcome to the program\nThis program allow you to find integration with diffrent methods \nAllow you to use Lagrange interpolating polynomial Norm 1\nAnd find root of function with Newton's method.");
    for(int Q=0;Q<2000000000;Q++);
    system("cls");
    printf("Soroush Pasandideh\nMohammad Nourbakhsh\nAlireza Izanlou\nMilad Peivasteh\nAkireza Jafari\nParsa Toserkani\n ");
    for(int Q=0;Q<2000000000;Q++);
    system("cls");
    printf("We do our best!\n");
    printf("Wait and Have fun!!");
    for(int Q=0;Q<2000000000;Q++);
    system("cls");
    printf("\nRomberg's method ?:(y/n) ");
    ch=getche();
    if(ch==121 ||ch==89){
        system("cls");
        printf("\nRomberg's method=%f",Rombergs());
        for(int Q=0;Q<100000000;Q++);
        printf("\nDo you want to continue? (y/n):");
        ch=getche();
        if(ch==110 ||ch==78){
            system("cls");
            printf("\n\n\t         *********free software free society***********");
            exit(1);
        }
    }
    printf("\nLagrange interpolating polynomial Norm 1 ?:(y/n) ");
    ch=getche();
    if(ch==121 ||ch==89){
        system("cls");
        printf("\nLargrange interpolating polyomial=%f",Lagrange());
        for(int Q=0;Q<100000000;Q++);
        printf("\nDo you want to continue? (y/n):");
        ch=getche();
        if(ch==110 ||ch==78){
            system("cls");
            printf("\n\n\t         *********free software free society***********");
            exit(1);
        }
    }
    printf("\nFrobenius Norm ?:(y/n) ");
    ch=getche();
    if(ch==121 ||ch==89){
        system("cls");
        printf("\nFrobenius Norm=%f",FrobeniusNorm());
        for(int Q=0;Q<100000000;Q++);
        printf("\nDo you want to continue? (y/n):");
        ch=getche();
        if(ch==110 ||ch==78){
            system("cls");
            printf("\n\n\t         *********free software free society***********");
            exit(1);
        }
    }


    printf("\nWeddlesrull's rull ?:(y/n) ");
    ch=getche();
    if(ch==121 ||ch==89){
        system("cls");
        printf("\nWeddlesrull's rule=%f",Weddlesrull());
        for(int Q=0;Q<100000000;Q++);
        printf("\nDo you want to continue? (y/n):");
        ch=getche();
        if(ch==110 ||ch==78){
            system("cls");
            printf("\n\n\t         *********free software free society***********");
            exit(1);
        }
    }
    printf("\nroot of the number using Newton-Raphson method ?(y/n) ");
    ch=getche();
    if(ch==121 ||ch==89){
        system("cls");
        printf("\nroot of the number using Newton-Raphson method= %f",Newtonsmethod());
        for(int Q=0;Q<100000000;Q++);
    }
        printf("\n\n\t         *********free software free society***********");

    return 0;
}







float Lagrange(){
                       //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& THIS IS THE PATR OF PROGRAM TO GET THE POLYNOMILA AND EVALUATE THE FUNCTIONA AT THE POINT&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//
                                                            //P(x) = A0 + X(A1 + X(A2 + X(A3 + X(Q4 + X(...X(An-1 + XAn))))//

                                                            FILE *out;
int pow,l2,nuo,l1;
   int array[MAXSIZE];
      float x, sumVal;
           float  sumVal1[MAXSIZE];
                char repeat1;

          printf("\tThis part of the programm is desigend for getting the polynomial.\n\t\t            and evaluate the poits.\n\n ");
                    for(l1=0; l1<=1555000000; l1++);

         printf("Enter the order of your polynomial \n");

                scanf("%d", &nuo);

                                                            /*  Read the coefficients into an array */
         printf("Enter %d coefficients \n", nuo + 1);
               for (l2 = 0; l2 <= nuo; l2++)
               {

                    scanf("%d", &array[l2]);

                }


                                                                            // while loop for repaeating the process.

             while(repeat1!='c'){                                            // CALCULATING THE VALUE OF X

    sumVal = array[0];

                printf("Enter the value of x \n");

                       scanf("%f", &x);

               for (l2 = 1; l2 <= nuo; l2++)
     {
        sumVal = sumVal * x + array[l2];
     }
    pow = nuo;
                                                                                 // printing the polynomial
          printf("Given polynomial is:====> ");

                for (l2 = 0; l2 <= nuo; l2++)
    {
                      if (pow < 0)
        {
                            break;
        }
                                                            // printing proper polynomial function //
                            if (array[l2] > 0)

          printf(" + ");

                                else if (array[l2] < 0)
          printf(" - ");

                             else
          printf(" ");

          printf("%dx^%d  ", abs(array[l2]), pow--);
    }

          printf("\n Sum of the polynomial = %6.2f \n", sumVal);

          printf(" Please enter 'c'  to continue or any character to repeat the process.\n\n" );
                   repeat1=getch();
}


      //******************************************************IN THIS PART WE ARE GOING TO USE LAGRANGE INTERPOLATAION FORMULA//*****************************************************

           printf("\t  Okay now we have our data, So we can put it in:\n \t           <<Lagrange Interpolation Formula.>>\n\n");



        // Definig needed variable

	            int l3, l4, data ,repeat;
                     float dadex[SIZE], dadey[SIZE], coeff[SIZE], value, factor[SIZE];

	     printf("How many data are available? \n");
	           scanf("%d",&data);
        // getting the x

        printf("\nEnter the value of x whose value is to be calculated?");
	            scanf("%f",&value);
                                                       //putting  x and y in the arrays
	for(l3=0; l3<data ; l3++){

		 printf("\nEnter X[%d]",l3);
		        scanf("%f",&dadex[l3]);

		 printf("Enter Y[%d]",l3);
		        scanf("%f",&dadey[l3]);
	}
                                                        // calculating the lagrange co efficents here we cal them factors.
	for(l3=0; l3<data; l3++){

		factor[l3] = 1.0;
		              for(l4=0; l4<data; l4++){

			                                if(l3!=l4){

				                              factor[l3] = factor[l3] * (value - dadex[l4])/(dadex[l3]-dadex[l4]);
			}

		}
	}
	    printf("Coeff are: \n");

    for(l3=0;l3<data;l3++){

		printf("\n(Avamel lagrange)factor[%d] = %f",l3, factor[l3]);
		// The final result

		suml = suml + factor[l3] * dadey[l3];
	}
	    printf("\n The result is :========>> %f\n",sum);
         out=fopen("natayej.dat" , "w+t");
         fprintf(out,"Final result : %f" ,suml);
         fclose(out);

    //                                           printf("\n\n\t         *********free software free society***********");
    return suml;
}

float Rombergs()                  //Romberg's method
{
    for(int Q=0;Q<80000000;Q++);
    FILE *f_out;
    printf("enter the function:\n ");

    gets(f);
        i=strlen(f);
    printf("Input the first endpoint of interval: ");
    scanf("%f",&a);

    printf("Input the second endpoint of interval: ");
    scanf("%f",&b);

    valuable(f,i);

    fa=eval(f,g,i,a);
    valuable(f,i);

    fb=eval(f,g,i,b);
    valuable(f,i);

    f_out=fopen("Result.dat","w+t");
    fprintf(f_out,"The final answer is : %f" ,romberg(fa,fb,a,b));
    system("cls");
    for(int i1=0;i1<100000000;i1++);
//    printf("Your integration answer in (%.1f,%.1f) is %f.",a,b,romberg(fa,fb,a,b));
//   getch();
   fclose(f_out);
    return romberg(fa,fb,a,b);
}
void valuable(char f[L],int i){
    for(int i1=0;i1<=i;i1++)    //har bar meghdar g[] ra sefr mikonad
        g[i1]=0;

    for(int i2=0;i2<i;i2++){    //a'dad string f[] ro nazir be nazir mirize to g[]
        e=strcmp(&f[i2],"0");   //f[]: string, g[]: float
        if(e>0)
            g[i2]=atof(&f[i2]);
    }

    for(int i3=0;i3<i;i3++){    //a'dad chand raghami ro kenar ham mizare
        if((g[i3]!=0 || f[i3]==48) && (g[i3+1]!=0 || f[i3+1]==48))
            g[i3+1]=g[i3];
    }
}
float eval(char f[L],double g[L],int i,float n){
    for (int i1=0;i1<i;i1++){          //mohassebe ye TAVAN
            if(f[i1]==94){
                if(g[i1-1]==0 && g[i1+1]!=0){
                    if(f[i1-1]!=48){
                        P=pow(n,g[i1+1]);
                    }
                    else
                        P=0;
                }
                else if(g[i1-1]!=0 && g[i1+1]==0){
                    if(f[i1+1]!=48)
                        P=pow(g[i1-1],n);
                    else
                        P=1;
                }
                else if(g[i1-1]==0 && g[i1+1]==0){
                    if(f[i1-1]==48 && f[i1+1]!=48)
                        P=0;
                    else if(f[i1-1]!=48 && f[i1+1]==48)
                        P=1;
                    else if(f[i1-1]==48 && f[i1+1]==48){
                        printf("Error!!!");
                        exit(1);
                    }
                    }
                else if(f[i1-1]!=48 && f[i1+1]!=48)
                        P=pow(g[i1-1],g[i1+1]);

            int i11=0;
                while (f[i1+i11]!=47 && f[i1+i11]!=43 && f[i1+i11]!=45 && f[i1+i11]!=42 && f[i1+i11]!=0){
                    g[i1+i11]=P;
                    i11++;
                }
                i11=-1;
                while (f[i1+i11]!=47 && f[i1+i11]!=43 && f[i1+i11]!=45 && f[i1+i11]!=42 && f[i1+i11]!=0){
                    g[i1+i11]=P;
                    i11--;
                }
            g[i]=P;
            }
        }
    for (int i2=0;i2<i;i2++){    //mohasebe ye taghsim
            if(f[i2]==47){
                if(g[i2-1]==0 && g[i2+1]!=0){
                    if(f[i2-1]!=48)
                        P=n/g[i2+1];
                    else
                        P=0;
                }
                else if(g[i2-1]!=0 && g[i2+1]==0){
                    if(f[i2+1]!=48)
                        P=g[i2-1]/n;
                    else{
                        printf("Infinity!!!!");
                        exit(1);
                    }
                }
                else if(g[i2-1]!=0 && g[i2+1]!=0)
                    P=g[i2-1]/g[i2+1];

                else if(g[i2-1]==0 && g[i2+1]==0){
                    if(f[i2-1]==48)
                        P=0;

                    else if(f[i2+1]==48){
                        printf("Error!!!");
                        exit(1);
                    }
                    else
                        P=1;
                }
                int i22=0;
                while (f[i2+i22]!=43 && f[i2+i22]!=45 && f[i2+i22]!=42 && f[i2+i22]!=0){
                    g[i2+i22]=P;
                    i22++;
                }
                i22=-1;
                while (f[i2+i22]!=43 && f[i2+i22]!=45 && f[i2+i22]!=42 && f[i2+i22]!=0){
                    g[i2+i22]=P;
                    i22--;
                }
                g[i]=P;
            }
        }

    for (int i3=0;i3<i;i3++){      //mohasebe ye zarb
            if(f[i3]==42){
                if(g[i3-1]==0 && g[i3+1]!=0){
                    if(f[i3-1]!=48)
                        P=n*g[i3+1];
                    else
                        P=0;
                }
                else if(g[i3-1]!=0 && g[i3+1]==0){
                    if(f[i3+1]!=48)
                        P=g[i3-1]*n;
                    else
                        P=0;
                }
                else if(g[i3-1]==0 && g[i3+1]==0){
                    if(f[i3-1]==48||f[i3+1]==48)
                        P=0;
                    else
                        P=n*n;
                }
                else if(g[i3-1]!=0 && g[i3+1]!=0){
                    P=g[i3-1]*g[i3+1];
                }
                int i33=0;
                while (f[i3+i33]!=43 && f[i3+i33]!=45 && f[i3+i33]!=0){
                    g[i3+i33]=P;
                    i33++;
                }
                i33=-1;
                while (f[i3+i33]!=43 && f[i3+i33]!=45 && f[i3+i33]!=0){
                    g[i3+i33]=P;
                    i33--;
                }
                g[i]=P;
            }
        }
    for (int i4=0;i4<i;i4++){      //mohasebe ye tafrigh
            if(f[i4]==45){
                if(g[i4-1]==0 && g[i4+1]!=0){
                    if(f[i4-1]!=48)
                        P=n-g[i4+1];
                    else
                        P=-g[i4+1];
                }
                else if(g[i4-1]!=0 && g[i4+1]==0){
                    if(f[i4+1]!=48)
                        P=g[i4-1]-n;
                    else
                        P=g[i4-1];
                }
                else if(g[i4-1]==0 && g[i4+1]==0)
                    P=0;
                else if(g[i4-1]!=0 && g[i4+1]!=0)
                    P=g[i4-1]-g[i4+1];
                int i44=0;
                while (f[i4+i44]!=43 && f[i4+i44]!=0){
                    g[i4+i44]=P;
                    i44++;
                }
                i44=-1;
                while (f[i4+i44]!=45 && f[i4+i44]!=0){
                    g[i4+i44]=P;
                    i44--;
                }
                g[i]=P;
            }
        }

    for (int i5=0;i5<i;i5++){    //mohasebe ye jam'
            if(f[i5]==43){
                if(g[i5-1]==0 && g[i5+1]!=0){
                    if(f[i5-1]!=48)
                        P=n+g[i5+1];
                    else
                        P=g[i5+1];
                }
                else if(g[i5-1]!=0 && g[i5+1]==0){
                    if(f[i5+1]!=48)
                        P=g[i5-1]+n;
                    else
                        P=g[i5-1];
                }
                else if(g[i5-1]==0 && g[i5+1]==0)
                    P=0;
                else if(g[i5-1]!=0 && g[i5+1]!=0)
                    P=g[i5-1]+g[i5+1];
                int i55=0;
                while (f[i5+i55]!=0){
                    g[i5+i55]=P;
                    i55++;
                }
                i55=-1;
                while (f[i5+i55]!=0){
                    g[i5+i55]=P;
                    i55--;
                }
                g[i]=P;
            }
        }
    return P;
}
double romberg(float fa,float fb,float a,float b){
    float h, R[N][N];
    h=(b-a)/2;
    for(int i1=0;i1<N;i1++){
        for(int i2=0;i2<=i1;i2++){
            if(i1==0 && i2==0)
                R[0][0]=h*(fa+fb);
            else if(i1>0 && i2==0){
                sum=0;
                for(int i3=1;i3<=pow(2,i1-1);i3++){
                    sum+=eval(f,g,i,a+(2*i3-1)*(b-a)/pow(2,i1));
                    valuable(f,i);
                }
                R[i1][0]=(R[i1-1][0])/2+(b-a)/(pow(2,i1))*sum;
            }
            else if(i1>=i2 && i2>=1){
                R[i1][i2]=R[i1][i2-1]+1/(pow(4,i2)-1)*(R[i1][i2-1]-R[i1-1][i2-1]);
            }
    //        printf("R(%d,%d)=%f\t",i1,i2,R[i1][i2]);  //chap marahele antegal ramberg
        }
    //    printf("\n");


    }
    return R[N-1][N-1];
}


float FrobeniusNorm()        //Frobenius Norm
{
    for(int Q=0;Q<80000000;Q++);
	int f1,f2,n,m,a[10][10],sumf=0;
	double norm;

	printf("\n Enter the dimensions: ");
	scanf("%d%d",&n,&m);

	printf("\n Enter the elements of the matrix:\n");
	for(f1=0;f1<n;f1++)
		for(f2=0;f2<m;f2++)
		scanf("%d",&a[f1][f2]);

	printf("\n Originial Matrix is:");
	for(f1=0;f1<n;f1++){
		printf("\n");
		for(f2=0;f2<n;f2++)
		printf("\t%d",a[f1][f2]);
	}

	for(f1=0;f1<n;f1++)
		for(f2=0;f2<m;f2++){
			sumf+=(a[f1][f2]*a[f1][f2]);
		}

	norm=sqrt((double)sumf);
	return norm;
//	printf("\n Norm=%1f",norm);
}

double frobeniusNorm(double* matrix, int size1,int size2)
{
	int f3,f4;
	double result=0.0;
	for(f3=0;f3<size1;++f3)
	{
		for(f4=0;f4<size2;++f4)
		{
			double value=*(matrix+(f3*size2)+f4);
			result+=value*value;
		}

	}
	return sqrt(result);
}

float Newtonsmethod()             //Newton's method
{
    for(int Q=0;Q<80000000;Q++);
    int numn;
    float root;
    printf("Enter a number: ");
    scanf("%i", &numn);
    root = square_root(numn);
//    printf("The square root of %i is: %f", number, root);
    return root;
}

float square_root(int x)
{
    const float difference = 0.00001;
    float guess = 1.0;
    while(absolute(guess * guess - x) >= difference){
        guess = (x/guess + guess)/2.0;
    }
    return guess;
}

float absolute(float num)
{
    if(num < 0){
        num = -num;
    }
    return num;
}
// Function to calculate square root of the number using Newton-Raphson method



// main function begins program execution
float Weddlesrull(){
      float b1,b2,hw,s1=0,s2=0,s=0;
      int b3,n,m;
      printf("Enter the value of upper limit= ");
      scanf("%f",&b2);
       printf("Enter the value of lower limit= ");
      scanf("%f",&b1);
       printf("Enter the value of n=");
      scanf("%d",&n);
      hw=(b2-b1)/n;
//      printf("h= %f",hw);
      m=n/6;
      s=0;
      if(n%6==0)
   {
      for(b3=1;b3<=m;b3++)
      {
          s=s+((3*hw/10)*(Y(b1)+Y(b1+2*hw)+5*Y(b1+hw)+6*Y(b1+3*hw)+Y(b1+4*hw)+5*Y(b1+5*hw)+Y(b1+6*hw)));
          b1=b1+6*hw;
          }
//          printf("Result is : %f",s);
   }
          else
          {
//              printf("Weddle's rule is not applicable");
              }
//              getch();
    return s;
}

 float Y(float x)
  {
        float y;
        y=1/(1+x*x);
        return(y);
}
