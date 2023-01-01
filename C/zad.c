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




// if(c>t &&t>d&&d>p){
//     printf("cifre rastu");
// }
// else if(c<t &&t<d&&d<p) printf("cifre opadaju");
// else printf("cifre nemaju lep raspored");
// return 0;


//ako broj ima nule na kraju izbrisi ih
// int n;
// printf("unesi  broj");
// scanf("%d",&n);
// while(n%10==0){
//     n=n/10;
// }
// printf("%d",n);
// return 0;

//umesi broj i sve njegove parne cifre uvecaj za 1
//     int x,y=0,vr=1,cifra;
// printf("unesi broj:");
// scanf("%d",&x);
// while(x>0){
//     cifra=x%10;
//     if(cifra%2==0){
//         cifra++;
        
//     }
//     y=y+cifra*vr;
//     x=x/10;
//     vr=vr*10;
    
    
// }
// printf("%d",y);
// return 0;


// brisanje svakde druge cifre sa desna
// int x,y=0,vr=1,cifra,rbr=0;
// printf("unesi broj:");
// scanf("%d",&x);
// while(x>0){
//     cifra=x%10;
//     if(rbr%2==0){
//         y=y+vr*cifra;
//         vr=vr*10;
//     }
    
//     rbr++;
//     x=x/10;
    
    
    
// }
// printf("%d",y);
// return 0;

// }

//ako je zbir dve susedne cifre ta cifra ona se brise
// int n, novo_n;
// int stepen;
//  int cifra_levo , cifra_sredina , cifra_desno;
//  /* Ucitavanje broja. */
// printf("Unesite broj: ");
//  scanf("%d", &n);
//  if (n <= 0) {
// printf("Neispravan unos.\n");
//  return -1;
// }

// /* Stepen broja 10 sa kojim se mnoze cifre izdvojenog broja. */
//  stepen = 1;
//  /* Nova vrednost broja. */
// novo_n = 0;

// /* Provera da li u zapisu broja postoje barem tri cifre. */
//  while (n > 99) {
// /* Izdvaja se srednja cifra , cifra desno od nje i cifra levo od
//  nje: npr. za trojku 583 8 je srednja cifra , 3 je cifra
// desno , a 5 cifra levo. */
//  cifra_desno = n % 10;
// cifra_sredina = (n / 10) % 10;
//  cifra_levo = (n / 100) % 10;
//  /* U novi broj se smesta desna cifra. */
// novo_n += cifra_desno * stepen;

// // /* Azurira se vrednost stepena. */
// //  stepen = stepen * 10;
// //  /* Provera da li je srednja cifra jednaka zbiru leve i desne
// // cifre. */
// //  if (cifra_levo + cifra_desno == cifra_sredina) {
// //      /* Treba izbaciti srednju cifru , pa broj n se azurira tako
// // sto se podeli sa 100. */
// //  n = n / 100;} else {

// // /* Inace , zadrzava se srednja cifra i odbacuje se samo
// // 49 poslednja. */
// // n = n / 10;
// //  }
// // }

// // /* Na novi broj se dodaje preostali dvocifreni ili jednocifreni
// // 55 broj. */
// // novo_n = n * stepen + novo_n;

// // /* Ispisivanje rezultata. */
// //  printf("%d\n", novo_n);

// // return 0;

// //ispisuje se broj sa najvecom vodecom cifrom
// int n;
//  int x, x_kopija;
// int broj;
//  int vodeca_cifra , max_vodeca_cifra;
// int i;
// 
// /* Citamo vrednost sa ulaza */
//  printf("Unesite broj n: ");
// scanf("%d", &n);
// 
// /* Postavljamo maksimalnu vodecu cifru na 0 - cifre broja su vece
//  ili jednake od 0 pa je ova vrednost neutralna */
// max_vodeca_cifra = 0;

// /* Ucitavamo broj po broj */
//  printf("Unesite n brojeva: ");
// for (i = 0; i < n; i++) {
//  scanf("%d", &x);
//  /* Odredjujemo vodecu cifru broja */
// x_kopija = abs(x);
//  while (x_kopija > 10) {
// x_kopija = x_kopija / 10;
//  }
// vodeca_cifra = x_kopija;

// /* Ako je izdvojena cifra veca od maksimalne vodece cifre */
//  if (vodeca_cifra > max_vodeca_cifra) {
// /* Cuvamo je */
//  max_vodeca_cifra = vodeca_cifra;
// /* I zbog ispisa , cuvamo i broj u kojem se ona pojavljuje */
//  /* Zbog ovoga smo morali i da racunamo vodecu cifru nad
// kopijom broja x kako ne bismo promenili njegovu vrednost */
//  broj = x;
// }
//  }
//  /* Ispisujemo rezultat */
// printf("%d\n", broj);

//dat je trocifren broj ispisi ga da bude najveci moguci
//npr 348 ->843 
// int n,x,y,z,p;
// printf("unesi n:");
// scanf("%d",&n);
// z=n%10;
// y=(n/10)%10;
// x=(n/100)%10;
// printf("%d",a);
// if(y>x){
//     p=x;
//     x=y;
//     y=p;
// }
// if(z>x){
//     p=x;
//     x=z;
//     z=p;
// }
// if(z>y){
//     p=y;
//     y=z;
//     z=p;
// }
// printf("%d%d%d",x,y,z);
// return 0;



// #include <stdio.h>
// int zbir(int a,int b) {
//     int rezultat;
//     rezultat=a+b;
//     return rezultat;
// }

// int main() {
//     // Write C code here
    
// int c;
// c=zbir(5,3);
// printf ("%d" , c);
//     return 0;
// }



// Online C compiler to run C program online
// #include <stdio.h>
// #define PI 3.14
// double povrisna (double r) {
    
//     return (4*r*r*PI);
// }
// double zapremina (double r) {
    
//     return (4./3*r*r*r*PI);
// }
// void ispis (double p,double v) {
//     double c,z;
//     printf ("povrsina je  %lf " ,p);
//     printf ("zapremina je %lf " ,v);
// }

// int main() {
//     // Write C code here
//    double r,p,v;
//    p=povrisna(r);
//    v=zapremina(r);
    
//     printf ("unesite r"); scanf ("%f" , &r);
    
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// int Suma(int a)
// {
//  int s=0;
//  while (a!=0)
//  { 
// s+=a%10;
//  a/=10;
//  }
//  return s;
// }
// main()
// {
//  int i, d, g;
//  printf(" Donja granica= ");
//  scanf("%d", &d);
//  printf(" Gornja granica= ");
//  scanf("%d", &g);
//  for(i=d; i<=g; i++)
//  printf("\n%4d\t%3d", i, Suma(i));
//  return 0;
// } 


// #include <stdio.h>

//   long nesto (int n) {
//       int f=1;
//       int i;
//       for (i=1;i<=n;i++) {
//          f=f*i; 
//       }
//       return f;
//   }
// int main()

// {
//     int n,i,c,s=0;
    
//     printf ("unesite n : "); scanf ("%d" , &n);
//     for (i=1;i<=n;i++) {
//         s+=nesto(i);
//     }
//     printf ("what is this : %d" , s);
//     return 0;
// }


// #include <stdio.h>
// unsigned nzd (unsigned a, unsigned b)
// {
//  unsigned c;
//  while(b != 0)
//  {
//  c=b;
//  b=a%b;
//  a=c;
//  }
//  return a;
// }
// unsigned nzs (unsigned a, unsigned b)
// {
//  return a*b/nzd(a,b);
// }
// main()
// {
//  unsigned a, b;
//  while(1)
//  {
//  printf ("\n a= "); scanf ("%u", &a);
//  printf (" b= "); scanf ("%u", &b);
//  if (a==0 || b==0) break;
//  printf (" nzd= %u", nzd(a,b));
//  printf ("\n nzs= %u", nzs(a,b));
//  printf ("\n\n");
//  }
//  getche();
//  return 0;
// }



// #include <stdio.h>
// long fakt (int n) {
//     long i;
//     long f=1;
//     for (i=1;i<=n;i++) {
//         f*=i;
//     }
//     return f;
// }

// int main()
// {
//     int n,k;
//     int c;
//     printf("unesite n = "); scanf ("%d" , &n);
//     printf("unesite k = "); scanf ("%d" , &k);
//     c=fakt(n)/(fakt(k)*fakt(n-k));
// printf ("c = %d" , c);
//     return 0;
// }




// int cifre (int a ) {
//  int i;
//  int s;
//  s=0;
//  while (a!=0) {
//      s+=a%10;
//      a/=10;
//  }
//  return s;
    
// }




// int main() {
//     // Write C code here
//     int d,g,i,a;
//     printf ("unesite donju granicu : "); scanf ("%d" , &d);
//     printf ("unesite gornju granicu : "); scanf ("%d" , &g);
//     for (i=d;i<=g;i++) {
//         printf("\n%d\t%d" , i,cifre(i));
//     }
    // Online C compiler to run C program online
#include <stdio.h>
//svi trocifreni brojevi
//jednaki sumi faktorijala svojih cifara
//145 1!+4!+5!=1+24+120
// int fakt (int a) { 
//     int i;
//     int broj1,broj2,broj3,s=0,suma=0,u=0,j,x,m=0,y;
// long f=1,d=1,z=1;
//     while (i>=100 && i<=999) {
//         broj1=i%10;
//         for (j=1;j<=broj1;j++) {
//             f*=j;
            
//         }
//         s+=f;
//         broj2=(i/10)%10;
//         for (x=1;x<=broj2;i++) {
//           z*=x;  
//         }
//         u+=z;
//         broj3=i/100;
//         for (y=1;y<=broj3;i++) {
//             d*=y;
//         }
//         m+=d;
//         suma=s+u+m;
//         i++;
//     } return suma;
// }
// int main() {
//     int i ,x ,a,b,c;
    
//     for (i=100;i<=999;i++) {
//         if (fakt (a) == i ) {
//             printf ("%d" , i);
//         }
//     }
//     return 0;
// }(


// #include <stdio.h>
// #define MAX 100
// int main()
// {
//     int i, n, m, nizA[MAX], nizB[MAX], nizC[MAX];
//  printf(" Broj elemenata niza A: ");
//  scanf("%d", &n);
//  printf(" Elementi niza A: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizA[i]);
//  printf(" Broj elemenata niza B: ");
//  scanf("%d", &m);
//  printf(" Elementi niza B: ");
//  for(i=0; i<m; i++)
//  scanf("%d", &nizB[i]);
//  printf(" Elementi niza C: ");
//  for(i=0; i<(n+m); i++)
//  {
//  if (i<n) nizC[i]=nizA[i];
//  else nizC[i]=nizB[i-n];
//  printf("%d ",nizC[i]);
//  }

//  return 0;


// }


// main()
// {
//  int i, n, nizA[MAX], nizB[MAX], nizC[MAX];
//  printf(" Broj elemenata niza: ");
//  scanf("%d", &n);
//  printf(" Elementi niza A: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizA[i]);
//  printf(" Elementi niza B: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizB[i]);
//  printf(" Elementi niza C: ");
//  for(i=0; i<n; i++)
//  {
//  nizC[i]=nizA[i]+nizB[i];
//  printf("%d ",nizC[i]);
//  }
//  return 0;
// }





// #include <stdio.h>
// #define MAX 5
// main()
// {
//  float nizA[MAX], nizB[MAX], nizC[MAX];
//  int i;
//  printf (" Elementi niza A: ");
//  for(i=0; i<MAX; i++)
//  scanf ("%f", &nizA[i]);
//  printf (" Elementi niza B: ");
//  for(i=0; i<MAX; i++)
//  scanf ("%f", &nizB[i]);
//  printf ("\n Elementi niza C: ");
//  for(i=0; i<MAX; i++)
//  {
//  nizC[i]=pow(nizA[i],3)/3+2*nizA[i]*nizB[i];
//  printf ("%.2f ", nizC[i]);
//  }
//  return 0;
// }


///////////// 10.15




// #include <stdio.h>
// #define MAX 5
// main()
// {
//  int nizA[MAX], nizB[MAX], nizC[MAX], i;
//  printf (" Elementi niza A: ");
//  for(i=0; i<MAX; i++)
//  scanf ("%d", &nizA[i]);
//  printf (" Elementi niza B: ");
//  for(i=0; i<MAX; i++)
//  scanf ("%d", &nizB[i]);
//  printf (" Elementi niza C: ");
//  for(i=0; i<MAX; i++)
//  {
//  nizC[i]=nizA[i]+nizB[MAX-1-i];
//  printf ("%d ", nizC[i]);
//  }
//  return 0;
// } 


//////// 10.15



// #include <stdio.h>
// #define MAX 100
// main()
// {
//  int i, n, m, k=0, nizA[MAX], nizB[MAX], nizC[MAX];
//  printf(" Broj elemenata niza A: ");
//  scanf("%d", &n);
//  printf(" Elementi niza A: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizA[i]);
//  printf(" Broj elemenata niza B: ");
//  scanf("%d", &m);
//  printf(" Elementi niza B: ");
//  for(i=0; i<m; i++)
//  scanf("%d", &nizB[i]);
//  printf("\n Elementi niza C: ");
//  for(i=0; i<n; i++)
//  if(nizA[i]%2==0)
// {
//  nizC[k]=nizA[i];
//  k++;
//  }
//  for(i=0; i<m; i++)
//  if(nizB[i]%2==0)
//  {
//  nizC[k]=nizB[i];
//  k++;
//  }
//  for(i=0; i<k; i++)
//  printf("%d ",nizC[i]);
//  getche();
//  return 0;
// } 

/////////// 10.16

// #include <stdio.h>
// #define MAX 100
// main()
// {
//  int i, n, nizA[MAX], nizB[MAX], nizC[MAX];
//  printf(" Broj elemenata niza: ");
//  scanf("%d", &n);
//  printf(" Elementi niza A: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizA[i]);
//  printf(" Elementi niza B: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizB[i]);
//  printf("\n Elementi niza C: ");
//  for(i=0; i<n; i++)
//  {
//  if (nizA[i]<nizB[i]) nizC[i]=nizA[i];
//  else if(nizA[i]>nizB[i]) nizC[i]=nizB[i];
//  else nizC[i]=0;
//  printf("%d ",nizC[i]);
//  }
 
//  return 0;
// }
//




//////////////// 10.17


// main()
// {
//  int nizA[MAX], nizB[MAX], nizC[MAX];
//  int n, i, j=0 ,k=0;
//  printf(" Broj elemenata niza A: ");
//  scanf("%d", &n);
//  printf(" Elemneti A: ");
//  for(i=0; i<n; i++)
//  scanf ("%d", &nizA[i]);
//  for(i=0; i<n; i++)
//  {
//  if (nizA[i]<0)
//  {
//  nizB[j]=nizA[i];
//  j++;
//  }
//  else
//  {
//  nizC[k]=nizA[i];
//  k++;
//  }
//  }
//  printf("\n Elementi B: ");
//  for(i=0; i<j; i++)
//  printf ("%d ", nizB[i]);
//  printf("\n Elementi C: ");
//  for(i=0; i<k; i++)
//  printf ("%d ", nizC[i]);
//  return 0;
// } 


// int nesto (int x,int y) {
// int s=0;
// int i;
// for (i=x;i<=y;i++) {
//     if (i%2==0) {
//      s+=i*i;   
//     }
  
// } return s;
// }




// //само непарних за унете границе интервала. Користити функције за израчунавање збира квадрата. 
// int nesto (int x,int y) {
// int s=0;
// int i;
// for (i=x;i<=y;i++) {
//     if (i%2==0) {
//      s+=i*i;   
//     }
  
// } return s;
// }





// int main()
// {
//     int d,g,z;
//     printf("unesite donju granicu : "); scanf ("%d" ,&d);
//     printf ("unesite gornju granicu : "); scanf ("%d" , &g);
//     z=nesto(d,g);
//     printf("haj ti : %d",z);

//     return 0;
// }



// int fakt (int x) {
//     int i;
//     int f=1;
//     for (i=1;i<=x;i++) {
//         f*=i;
//     } return f;
// }




// int main()
// {
//     int n,k,d,z,y;
//     printf("unesite n : "); scanf("%d" ,&n);
//     printf ("\nunesite k : "); scanf ("%d" ,&k);
//     z=fakt(n);
//     d=fakt(k)*(fakt(n-k));
    
//     printf ("treba mi %d" , z/d);
//     return 0;
// }


// #include <stdio.h>

// int fakt (int x) {
//     int i;
//     int f=1;
//     for (i=1;i<=x;i++) {
//         f*=i;
//     } return f;
// }




// int main()
// {
//     int n,k,d,z,y,s=0,i;
//     printf("unesite n : "); scanf("%d" ,&n);    
//     for(i=1;i<=n;i++) {
//         z=fakt(i);
//         s+=z;
//     }
//    printf ("%d" , s);
//     return 0;
// }



// #include <stdio.h>

// int fakt (int x) {
//     int i;
//     int f=1;
//     for (i=1;i<=x;i++) {
//         f*=i;
//     } return f;
// }




// int main()
// {
 
//   int n,k,d,z,y,s=0,i;
//   int a,b,c;
//   int broj;







//     for (i=100;i<=999;i++) {
//     broj=i;
//     c=broj%10;
//     b=(broj/10)%10;
//     a=broj/100;
//     z=fakt(a)+fakt(b)+fakt(c);
//         if (i==z) printf ("%d" , i);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// float fakt(int x , int y) {
//     float s;
//     s=pow(x,y);
//  return s;
// }




// int main()
// {
//  float o,s;
//  float z;
//  printf ("unesite osnovu : "); scanf ("%f" , &o);
//  printf ("unesite stepen : "); scanf ("%f" ,&s);
 
//  printf ("osnova : %f\nstepen : %f \n rezultat : %f" , o,s,fakt(o,s));
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// float majka (float k,float x) {
//     float s;
   
//     s=pow(1+k,x);
//     return s;
// }
// int main()
// {
//     int p,m;
//     float k,r;
    
//    printf ("unesite pare : "); scanf ("%d" , &p);
//    printf ("unesite mesecnu kamatu :"); scanf ("%f" , &k);
//    printf ("unesite broj meseci "); scanf("%d" , &m);
//    r=((majka(k,m))*p*k)/(majka(k,m)-1);
//    printf ("postovanje : %.2f" ,r );
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>
// int prost (int x) {
//     int i;
//     int j;
//     int brojac=0;
//     for (j=x;j>=1;j--) {
//         if (x%j==0) {
//             brojac++;
            
//             }
//         }
//         if (brojac==2) return x;
//         }
    

// int main()
// {
//     int z;
//     int i;
//     for (i=1;i<=500;i++) {
//         z=prost(i);
//        if (i==1) printf ("%d " , i); 
//        if(z!=0) printf ("  %d  " ,z);
        
//     }


//     return 0;
// }




// #include <stdio.h>
// #include <math.h>
// int kub (int x) {
//     int broj,a,b,c,s=0;
//     broj=x;
//     a=broj/100;
//     b=(broj/10)%10;
//     c=broj%10;
//     s=pow(a,3)+pow(b,3)+pow(c,3);
//     return s;
// }

// int arm (int y) {
//     int z;
//     z=(kub(y));
//     if (z==y) return 1;
//     else return 0;
  
// }
// int main()
// {
//   int i,br,z;
//     for (i=100;i<=999;i++) {
//         z=arm(i);
//         if (z==1) printf (" %d " , i);
//         else continue;
//     }
    
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>
// int suma(int x) {
//     int a,b,c,broj,s=0;
//     broj=x;
//     a=broj/100;
//     b=(broj/10)%10;
//     c=broj%10;
//     s=a+b+c;
//     return s;
    
// }

// int nivenov(int y) {
//  int s,i,k;
//  k=suma(y);
//  if (y%k==0) {
//      return 1;
//  }
//  else return 0;
// }
// int main()
// {
//   int i,br,z;
// for (i=100;i<=200;i++) {
//     z=nivenov(i);
//     if (z==1) {
//         printf (" %d ", i );
//     }
//     else continue;
// }
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>
// int dupli(int n) {
//     int p=1;
//     while (n>=2) {
//         p*=n;
//         n=n-2;
//     } return p;
  
    
// }

// int main()
// {   
//     float e;
//     int i=2;
//     int znak=1;
//     float s=1;
//     float c=1;
//         printf ("eps : "); scanf("%f" , &e);
//         while (fabs(c)>=e) {
//             c=(float)znak/dupli(i);
//             s+=c;
//             i++;
//             znak=-znak;
//         }
//         printf ("postovanje : %.3f " ,s);
//     return 0;
// }



// #include <stdio.h>
// #define MAX 100
// int main()
// {
//     int n,i,niz[MAX];
//     printf("unesite broj clanova niza : "); scanf("%d" , &n);
//     printf ("unesite %d elemenata" ,n );
//     for (i=0;i<n;i++) {
//        scanf("%d",&niz[i]);
//     }
//     printf ("uneti elementi niza : ");
//     for (i=0;i<n;i++) {
//         printf("  %d  " , niz[i]);
//     }
//     return 0;
// }



// #include <stdio.h>
// #define MAX 100
// int main()
// {
//    int n,i,niz[MAX];
//    printf ("unesite n : "); scanf ("%d" , &n);
   
//    printf ("unesite %d elemenata" , n);
//    for (i=0;i<n;i++) {
//        scanf("%d" ,&niz[i]);
       
//    }
//    printf ("obrnuto : ");
//    for (i=n-1;i>=0;i--) {
//        printf (" %d " , niz[i]);
//    }
//     return 0; 
// }


// #include <stdio.h>
// #define MAX 100
// #include <math.h>
//  int main()
// {
//  int i, n,niz[MAX],s=0;
//     printf ("unesite n : ");
//     scanf ("%d" , &n);
//     printf ("\nunesite %d elemenata : " , n);
//     printf ("\nuneti elementi niza su : ");
//     for (i=0;i<n;i++) {
//         scanf ("%d" , &niz[i]);
//     }
//     for (i=0;i<n;i++) {
//         s+=niz[i];
//     }
//     printf ("ar sredina  = %.2f" , (float)s/(float)n);
//  return 0;
// }



// #include <stdio.h>
// #define MAX 100
// #include <math.h>
//  int main()
// {
//  int i, n,niz[MAX],s=0,br=0;
//     printf ("unesite n : ");
//     scanf ("%d" , &n);
//     printf ("\nunesite %d elemenata : " , n);
//     printf ("\nuneti elementi niza su : ");
//     for (i=0;i<n;i++) {
//         scanf ("%d" , &niz[i]);
//     }
//     for (i=0;i<n;i++) {
//         if (niz[i]%3==0) {
//         s+=niz[i];
//         br++;
//         }
//     }
//     printf ("ar sredina  = %.2f" , (float)s/(float)br);
//  return 0;
// }



// #include <stdio.h>
// #define MAX 100
// #include <math.h>
//  int main()
// {
//  int i,s1=0, n,niz[MAX],s=0,br=0;
//     printf ("unesite n : ");
//     scanf ("%d" , &n);
//     printf ("\nunesite %d elemenata : " , n);
//     printf ("\nuneti elementi niza su : ");
//     for (i=0;i<n;i++) {
//         scanf ("%d" , &niz[i]);
//     }
//     for (i=0;i<n;i++) {
//         if (niz[i]%2==0) {
//         s+=niz[i];
        
//         } else s1+=niz[i];
       
//     }
    
//     printf ("\nsuma parnih  = %d" , s);
//     printf ("\nsuma neparnih  = %d" , s1);
//  return 0;
// }