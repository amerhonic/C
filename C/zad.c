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

// int main() {
//     // Write C code here
//     int s=0,i,brojac;
    
//     for (i=100;i<=999;i++) {
        
//         if (i%64==0) {
//             s=s+i;
//             brojac++;
//         }
        
//     }
//     printf ("suma = %d\nbrojeva = %d",s,brojac);
// return 0;
// }



// main()
// {
//  int i=100,s=0,br=0;
//  do
//  {
// if(i%64==0)
//  {
//  s+=i;
//  br++;
//  }
//  i++;
//  }
//  while (i<=999);
//  printf("\n Suma= %d", s);
//  printf("\n Brojeva= %d", br);
//  return 0;

// }

// int main() {
//     int i,br=0,m,n=0,brojac=0;
   
    
//     do {
//         printf ("m = "); scanf ("%d" , &m);
//     }
//     while (m<=0 || m>=10);
    
//     do {
//         printf ("br = "); scanf ("%d" , &br);
//         if (br>9 && br<=99){
//             n=br/10;
//             if(n==m) brojac++;
//         }
//         else if (br>99 && br<=999 ) {
//             n=br/100;
//             if (n==m) brojac++;
//         } else if (br==m) ++;
//         }
       
      
  


//     while (br!=0);
  
//   printf ("%d ima pocetnu cifru %d" , brojac,m);
// return 0;
// }





// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int i;
//   while(1) {
//       printf ("\ni = "); scanf ("%d" , &i);
//       if (i<0) break;
//       printf ("i*i = %d" , i*i);
//   }
// return 0;
// }




// int main() {
//     int i,x;
//     printf ("unesite cele brojeve stop nek bude 0 :\n "); 
//   for (i=0;i<=100;i++) {
//       scanf ("%d" , &x);
//       if (x==STOP) break;
//       printf ("\n%d" , x);
//   }
// return 0;
// }

// int main() 
    
// {
// int i;
// for (i=1;i<500;i++) {
//     if (i%3==0 && i%4==0 && i%5==0 && i%7==0) {
//         printf ("%d" , i);
//         break;
//     }
// }
//  return 0;
// }





//  int n, i;
//  float s;
//  while(1)
//         {
//          printf(" n= ");  scanf("%d", &n);
                         
//     if(n <= 0) break;
//     s=0;
//     for(i=1; i<=n; i++)
//     s+=1./(i*i);
//     printf (" S= %.6f\n\n", s);
//  }

//  return 0;
// }




// #include <stdio.h>
// #define STOP 0
// int main() 
    
// {
// int i;
// for (i=1;i<=100;i++) {
//     if (i%2!=0 && i%3!=0 && i%4!=0 && i%5!=0 && i%6!=0 && i%7!=0 && i%8!=0 && i%9!=0 ||i==2 || i==3 || i==5 || i==7){
  
//     printf ("\n%d" ,i );
// }
 
// }
// return 0;
// }


// int main() 
//     {
// int n, i;
//  float s;
//  while(1)
//  {
//  printf ("\n n= ");
//  scanf("%d", &n);
//  if(n == 0) break;
//  if(n < 0) continue;
//  s=0;
//  for(i=1; i<=n; i++)
//  s+=1./(i*i);
//  printf (" s= %.6f\n", s);
//  } 
// return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  int x,y;
//     float p1,p2,p3,p;
//     printf ("unesi x i y "); scanf ("%d %d" , &x,&y);
//     p=fabs(1.0*(-1*(1-3)+3*(3-1)+2*(1-1))/2);
//     p1=fabs(1.0*(-1*(1-y)+3*(y-1)+x*(1-1))/2);
//     p2=fabs(1.0*(-1*(3-y)+2*(y-1)+x*(1-3))/2);
//     p3=fabs(1.0*(3*(3-y)+2*(y-1)+x*(1-3))/2);
//     if (p1+p2+p3==p) {
//         printf ("tacka se nalazi u trouglicu");
//     } else printf ("jbg");
//     return 0;
//    }




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// int x,x1,y,stepen=1,cifra,br=0,prva,zadnja;
// printf("unesi x:");
// scanf("%d",&x);

// br=log10(x);
// prva=x/pow(10,br);
// zadnja=x%10;
// y=x-zadnja-prva*pow(10,br)+zadnja*pow(10,br)+prva;
// if(zadnja==0){
//     zadnja=(x/10)%10;
//    y=x-zadnja-prva*pow(10,br)+zadnja*pow(10,br)+prva;
// }
// printf(" %d",br);
// return 0;



//123 mora biti deljiv sa 1!,2!,3! tj 1 ,2,6

// int a,b,c,broj,counter,fakt,d;
// printf ("unesite broj"); scanf ("%d" , &broj);
// x=broj;
// d=broj;
// while (i>0){
//     broj/=10;
//     i++;
//     counter++;
// }
// for (i=1;i<counter;i++) {
//     d=x%10;
//     x/10;

//     for (i=1;i<=d;i++) {
//         fakt*=i;
//     }
// }




// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int a,b,c,broj,counter,fakt,d,i,x;
// printf ("unesite broj"); scanf ("%d" , &broj);
// x=broj;
// d=broj;
// while (broj>0){
//     broj/=10;
    
//     counter++;
    

// for (i=1;i<counter;i++) {
//     d=x%10;
//     x/10;

//     for (i=1;i<=d;i++) {
//         fakt*=i;
//         if (x%fakt==0) {
//             printf ("more\n");
//         }else {
//             printf ("ne more\n");
//         }
//     }
// }
// i++;
// }
//     return 0;
// }




// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     // Write C code here
//     printf("Hello world");
//         int n,broj,i,counter,cifra,fakt=1,c;
//        printf ("unesite broj n= "); scanf ("%d" , &n);
//         broj=n;
//         broj=c;
//        while (broj>0) {
//            fakt=1;
//            cifra=broj%10;
           
             
//            for (i=1;i<=cifra;i++) {
//                fakt*=i;      
//                if (c%fakt==0) {
//                    printf ("moze");
//                }else ("ne moze"); 
               
//            }
//            broj/=10;
           
//        } 
        
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//  int n,broj,cifre,fakt=1,i,s=0,bikica=0,brojac=0;
//  printf("unesi broj:");
//  scanf("%d",&broj);
//  n=broj;
//  while(broj>0){
//      cifre=broj%10;
//      brojac++;
//        broj/=10; 
//         printf("\ncifre su:%d",cifre);
//         for(i=1;i<=cifre;i++){
//             fakt*=i;
//         }
//         printf("fakt je: %d",fakt);
//          s+=fakt;
//          if(n%fakt==0){
//      bikica++;
//  }
//         fakt=1;
        
 
//  } printf("\nsuma je %d",s);
//  if (bikica==brojac) {
//      printf("\nmoze");
//  }else printf ("\nne moze");
//     return 0;
// }






/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,a,b,c,d,broj,suma,suma1;
    printf("unesi sumu");
    scanf("%d",&suma);
    while(1){
        printf("unesi broj");
        scanf("%d",&broj);
        
        a=broj%10;
        b=(broj/10)%10;
        c=(broj/100)%10;
        d=(broj/1000)%10;
    
        if () {
            suma1=suma1+broj;
                
        }
        if(suma1>suma) {
            break;
        }
        


    }
    printf ("suma = %d" ,suma1);
    return 0;
}

// int i=1;
// while(i<=10){
    
//     printf("%d",i);
//     i+=2;
// }
// return 0;


// int i=10;
// while(i>=1){
//     printf("%d",i);
//     i--;

// }
// return 0;


//5.3

// int i=1,n;
// int suma=0;
// printf("unesi n:");
// scanf("%d",&n);
// while(i<=n){
//     suma=suma+i;
//     i++;
// }
// printf("%d",suma);
// return 0;

//5.4
// int i=1,n;
// int suma=0;
// printf("unesi n:");
// scanf("%d",&n);
// while(i<=n){
//     suma=suma+i;
//     i+=3;
// }
// printf("%d",suma);
// return 0;


//5.5
// int i=1,n;
// float suma=0;
// printf("unesi n:");
// scanf("%d",&n);
// while(i<=n){
//     suma=suma+1.0/pow(2*i+1,2);
//     i++;
// }
// printf("%.3f",suma);
// return 0;


//5.6
// int i,n,m,suma=0;
// printf("unesi n:");
// scanf("%d",&n);
// printf("unesi m:");
// scanf("%d",&m);
// i=n;
// while(i<=m){
//     if(i%2==0){
//         suma+=pow(i,2);
//     }
//     else suma+=pow(i,3);
//     i++;
// }
// printf("suma je %d:",suma);
// return 0;

//5.7 a)
// int i=3,n,fpp=1,fp=1,fn;
// printf("unesi n:");
// scanf("%d",&n);
// printf("f1=1\n");
// printf("f2=1\n");
// while(i<=n){
//     fn=fp+fpp;
//     fpp=fp;
//     fp=fn;
//     printf("f%d=%d\n",i,fn);
//     i++;
// }

// return 0;

//5.7 b)
// int i=3,n,fpp=1,fp=1,fn,suma =2;
// printf("unesi n:");
// scanf("%d",&n);
// while(i<=n){
//     fn=fp+fpp;
//     fpp=fp;
//     fp=fn;
//     suma =suma+fn;
//     i++;
// }
// printf("suma je %d",suma);

// return 0;



// int brojac=0,suma=0;
// const float stop=0; 
// int realanbr=-1;
// float as;
// while(realanbr !=stop){
//     printf("unesi realan broj:");
//     scanf("%d",&realanbr);
//     if(realanbr>=2 &&realanbr<=6){
//         suma+=realanbr;
//         brojac++;
//     }
// }
// as=suma/(brojac);
// printf("resenje je%f",as);
// return 0;

//
// int i=1,n,m=0,f=1,gore=1,levo=1,desno=1;
// float rezultat;
// while(m<1||n<1||n>m){
//     printf("unesi m:");
// scanf("%d",&m);
// printf("unesi n:");
// scanf("%d",&n);
// }
// for(i=1;i<=m;i++){
//     gore*=i;
// }
// for(i=1;i<=n;i++){
//     levo*=i;

// }
// for(i=1;i<=(m-n);i++){
//     desno*=i;

// }
// rezultat=gore*1.0/(levo*desno);
// printf("koeficijent je %.2f",rezultat);
// return 0;


//
// int i,m,n,pomocna;
//     float koren,suma=0;
//     printf("unesi m i n");
//     while(m<1||n<1){
//         scanf("%d %d",&m,&n);
//     }
//     if(m>n){
//         pomocna=n;
//         n=m;
//         m=pomocna;
        
//     }
//     if(m%2==0)m++;
//     for(i=m;i<=n;i=i+2){
//         koren=sqrt(i);
//         suma+=koren;
//     }
//     printf("suma korena je %.3f",suma);
//     return 0;

//
// int i,n,znak=1;
// float suma=0;
//     printf("unesi n:");
//     scanf("%d",&n);
//     i=1;
//     while(i<=n){
//         suma=suma+znak*1.0/i;
//         znak=-znak;
//         i++;
//     }
//     printf("suma je %.3f",suma);


//
// int a,b;
// printf("unesi a:");
// scanf("%d",&a);
// printf("unesi b:");
// scanf("%d",&b);
// while(a!=b){
//     if(a>b){
//         a=a+b;
//     }
//     else{
//         b=b-a;
//     }
// }
// printf("nzd je %d",a);
// return 0;

//
// int n, pom,suma=0,zadnjaCifra;
// printf("unesi n:");
// scanf("%d",&n);
// pom=n;
// while(pom>0){
//     zadnjaCifra=pom%10;
//     suma=suma+zadnjaCifra;
//     pom=pom/10;
// }
// if(n%suma==0){
//     printf("broj je nivenov");

// }
// else printf("nije");
// return 0;


// int n,obrnut=0;
// printf("unesi n:");
// scanf("%d",&n);
// while(n>0){
//     obrnut=obrnut*10+n%10;
//     n=n/10;
// }
// printf("obrnut je %d",obrnut);
// return 0;


// 28 =2*2*7
// int n,k,m;
// printf("unesi n:");
// scanf("%d",&n);
// m=n/2;
// for(k=2;k<=(n/2);k++){
//     while(n%k==0){
//         printf("%d\n",k);
//         n=n/k;
//     }
// }
// return 0