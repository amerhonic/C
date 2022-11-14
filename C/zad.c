// #include <stdio.h>
// main()
// {
//  int m=0, n, i, brojilac=1, imenilac=1;
//  while(m<1 || n<1 || n>m)
//  {
//  printf("\n Unesite m i n: ");
//  scanf("%d%d",&m,&n);
//  }
//  for(i=m;i>m-n;i--)
//  brojilac=brojilac*i;
//  for(i=1;i<=n;i++)
//  imenilac=imenilac*i;
//  brojilac=brojilac/imenilac;
//  printf("\n Binomni koeficijent b= %d \n ", brojilac); 
// }

// int main() {
//     int i,n,m,pomoc;
//     float suma,koren ;
//    printf ("unesite m i n : "); scanf ("%d%d",&n,&m);
//    while (n<1 || m<1) {
//        printf ("unosi to jbt : ");
//        scanf ("%d%d" ,&m,&n);
//    }
//    if (n<m) {
//         m=pomoc;
//         n=m;
     
//    }
//    if (i%2==0) i++;
//    for (i=m;i<=n;i=i+2) {
//        koren=sqrt(i);
//        suma+=koren;
//    }
//    printf ("suma je : %f ",suma);
//     return 0;
// }

// int main() {
//     int i,n,znak=1;
//     float s=0;
//     printf ("unesite n : "); scanf ("%d" , &n);
//     for (i=1;i<=n;i++) {
//         s=s+(float)znak/(float)i;
//         znak=-znak;
//     }
//     printf ("suma je : %f",s);
//     return 0;
// }

// int main() {
//     int a,b,nzd;
//     printf ("unesite a = "); scanf ("%d",&a);
//     printf ("unesite b = "); scanf ("%d",&b);
//     if (a==b) {
//         printf ("NZD = %d" , a);
//     }
//     while (a!=b) {
//         if (a>b) {
//             a=a-b;
//         }else b=b-a;
//     }
//     printf ("nzd je : %d " , a);
    
//     return 0;
// }


// int main() {
//     int n,k,s=0;
//     printf ("unesite n : "); scanf ("%d" , &n);
//     n=k;
//     while (k>0) {
//         s=s+k%10;
//         k=k/10;
//     }
//     if (s%n==0) {
//         printf ("jes");
//     } else {
//         printf ("nije");
//     }
    
//     return 0;
// }



// int main() {
//     int o=0,n;
    
//     printf ("unesite n = "); scanf ("%d" ,&n);
//     while (n>0) {
//         o=o*10+n%10;
//         n=n/10;
//     }
//     printf ("%d" , o);
//     return 0;
// }


// int main() {
//    int m, n, k;
//  printf(" n= "); 
//     scanf("%d",&n);
//  printf("\n\n Prosti faktori:");

//  for (k=2;k<=n;k++)
//  {
//  while(n%k==0)
//  {
//   n=n/k;
//   printf ("\n%d" , k);
//  }
//  } 

//          return 0;
//     }


// int main() {
// int a, b, c, zbir;
//  printf(" Pitagorini brojevi:\n");
//  for(a=1;a<=20;a++)
//  {
//  for(b=1;b<=20;b++)
//  {
//  zbir=a*a+b*b;
//  c=1;
//  while(c*c<=zbir)
//  {
//  if(c*c==zbir)
//  printf(" a=%2d b=%2d c=%2d\n", a,b,c);
//  c++;
//  }
//  }
//  } 

// int main() {
//     int n,gr;
//   printf ("unesite granicu"); scanf ("%d",&gr);
//   n=1;
//   do {
//       printf ("%d\n",n);
//       n=n*2;
//   }
//   while (n<=gr);
//     return 0;
// }

// main()
// {
//  int n;
//  do
//  {
//  printf(" n= ");
//  scanf("%d", &n);
//  }
//  while(n*n<=0 || n*n>100);
//  printf("\n Kvadrat broja %d [%d] pripada prvoj stotini.\n", n, n*n);
//   return 0; 
// }



// main()
// {
//  int i;
//  i=2;
//  do
//  {
//  printf("%d\n", i);
//  i+=2;
//  }
//  while(i<=10);

//  return 0;
// }



// main()
// {
//  int i;
//  i=1;
//  do
//  {
//  printf("%d\n", i);
//  i++;
//  }
//  while(i<=10);
 
//  return 0;
// }




// main()
// {
//  int i;
//  i=1;
//  do
//  {
//  printf("Pozdrav svima!\n");
//  i++;
//  }
//  while(i<=5);
//  return 0;
// }


// int main() {
//     float znak=-1.0,clan=1.0,suma=1.0,eps;
//     int i=1;
//     printf ("eps = "); scanf ("%f" ,&eps);
//     do
//     {
//         clan=(float)znak/(2*i+1);
//         suma=suma+clan;
//         znak=-znak;
//         i++;
//     }
//     while (fabs(clan)>eps);
//     printf ("\n Pi=%f",4*suma);





// int main() {
//    float a,i=0,s=0;
//    printf ("unesite broj a = "); scanf ("%f" ,&a);
//    do 
//    {
//        i++;
//        s=s+1/i;
//    }
//    while (s<a);
//    printf ("s = %f" , s);
//     return 0;
// }

