
#include <stdio.h>
#include <string.h>

int main ()
{

printf("\n  ▄████████  ▄█          ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████    ▄████████ ");
printf("\n  ███    ███ ███         ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███   ███    ███ ");
printf("\n  ███    █▀  ███         ███    ███ ███   ███   ███   ███    █▀    ███    █▀  ");
printf("\n ▄███▄▄▄     ███         ███    ███ ███   ███   ███  ▄███▄▄▄       ███        ");
 printf("\n▀▀███▀▀▀     ███       ▀███████████ ███   ███   ███ ▀▀███▀▀▀     ▀███████████ ");
  printf("\n  ███        ███         ███    ███ ███   ███   ███   ███    █▄           ███ ");
  printf("\n  ███        ███▌    ▄   ███    ███ ███   ███   ███   ███    ███    ▄█    ███ ");
  printf("\n  ███        █████▄▄██   ███    █▀   ▀█   ███   █▀    ██████████  ▄████████▀  ");
  printf("\n             ▀                                                                ");

  printf("\n[+]═══════════════════════[  Author : @suriya   ]══════════════════════════[+]");
  printf("\n[+]════════════════[ Website: www.github.com/hackersuriya ]════════════════[+]");
  printf("\n      [+]═══════════════════[ ... Flames Game ... ] ══════════════════[+] ");

   char a[50];
   char b[50];
   int n;
   int m;

   int i, j, k, l = 1, sc = 0, tc, rc = 0, fc = 5;
   char q[25] , w[25], c;
   char f[] = "flames";
   printf("\n\n\n╔══════════════════════════════════════════════════════════════════════════════╗");
   printf("\n║                                                                              ║");
   printf("\n\n\tEnter The Firsr Person Name       :  ");
   scanf("%s",&a);
   printf("\n\tEntet The Second Person Name      :  ");
   scanf("%s",&b);
   n = strlen(a);
   m = strlen(b);
   tc =n+m;
   printf("\n\tFLAMES Count                      :  %d",tc);
   printf("\n║                                                                              ║");
   printf("\n╚══════════════════════════════════════════════════════════════════════════════╝");
   strcpy(q,a);
   strcpy(w,b);


   for (i = 0; i < n; i++)
   {
     c = a[i];
     for (j = 0; j < m; j++)
     {
       if (c == b[j])
       {
         a[i] = -1;
         b[j] = -1;
         sc = sc + 2;
         break;
       }

     }
   }


   rc = tc - sc;

    for (i = 0;; i++) {
        if (l == (rc)) {
            for (k = i; f[k] != '\0'; k++) {
                f[k] = f[k + 1];
            }
            f[k + 1] = '\0';
            fc = fc - 1;
            i = i - 1;
            l = 0;
        }
        if (i == fc) {
            i = -1;
        }
        if (fc == 0) {
            break;
        }
        l++;
    }

printf("\n\n\n[+]═════════════════════════════[ Relationship ]═════════════════════════════[+]");
 if (f[0] == 'e')
 {
printf("\n\n\n\t███████╗███╗░░██╗███████╗███╗░░░███╗██╗░░░██╗");
printf("\n\t██╔════╝████╗░██║██╔════╝████╗░████║╚██╗░██╔╝");
printf("\n\t█████╗░░██╔██╗██║█████╗░░██╔████╔██║░╚████╔╝░");
printf("\n\t██╔══╝░░██║╚████║██╔══╝░░██║╚██╔╝██║░░╚██╔╝░░");
printf("\n\t███████╗██║░╚███║███████╗██║░╚═╝░██║░░░██║░░░");
printf("\n\t╚══════╝╚═╝░░╚══╝╚══════╝╚═╝░░░░░╚═╝░░░╚═╝░░░");
printf("\n\n\t                     [ Result : Enemy ]      ");
 }
 else if (f[0] == 'f')
 {

printf("\n\n\n\t███████╗██████╗░██╗███████╗███╗░░██╗██████╗░");
printf("\n\t██╔════╝██╔══██╗██║██╔════╝████╗░██║██╔══██╗");
printf("\n\t█████╗░░██████╔╝██║█████╗░░██╔██╗██║██║░░██║");
printf("\n\t██╔══╝░░██╔══██╗██║██╔══╝░░██║╚████║██║░░██║");
printf("\n\t██║░░░░░██║░░██║██║███████╗██║░╚███║██████╔╝");
printf("\n\t╚═╝░░░░░╚═╝░░╚═╝╚═╝╚══════╝╚═╝░░╚══╝╚═════╝░");
printf("\n\n\t                     [ Result : Friend ]      ");
 }
 else if (f[0] == 'm')
 {

printf("\n\n\n\t███╗░░░███╗░█████╗░██████╗░██████╗░██╗░░░██╗");
printf("\n\t████╗░████║██╔══██╗██╔══██╗██╔══██╗╚██╗░██╔╝");
printf("\n\t██╔████╔██║███████║██████╔╝██████╔╝░╚████╔╝░");
printf("\n\t██║╚██╔╝██║██╔══██║██╔══██╗██╔══██╗░░╚██╔╝░░");
printf("\n\t██║░╚═╝░██║██║░░██║██║░░██║██║░░██║░░░██║░░░");
printf("\n\t╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░");
printf("\n\n\t                     [ Result : Marry ]      ");
 }
 else if (f[0] == 'l')
 {

printf("\n\n\n\t██╗░░░░░░█████╗░██╗░░░██╗███████╗");
printf("\n\t██║░░░░░██╔══██╗██║░░░██║██╔════╝");
printf("\n\t██║░░░░░██║░░██║╚██╗░██╔╝█████╗░░");
printf("\n\t██║░░░░░██║░░██║░╚████╔╝░██╔══╝░░");
printf("\n\t███████╗╚█████╔╝░░╚██╔╝░░███████╗");
printf("\n\t╚══════╝░╚════╝░░░░╚═╝░░░╚══════╝");

printf("\n\n\t                     [ Result : Love ]      ");

printf("\n\n\n         LoveLoveLov                eLoveLoveLo");
printf("\n     veLoveLoveLoveLove          LoveLoveLoveLoveLo");
printf("\n  veLoveLoveLoveLoveLoveL      oveLoveLoveLoveLoveLove");
printf("\n LoveLoveLoveLoveLoveLoveL    oveLoveLoveLoveLoveLoveLo");
printf("\nveLoveLoveLoveLoveLoveLoveL  oveLoveLoveLoveLoveLoveLove");
printf("\nLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLove");
printf("\nLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLove");
printf("\n LoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLo");
printf("\n veLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLove");
printf("\n   LoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLo");
printf("\n     veLoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLove");
printf("\n       LoveLoveLoveLoveLoveLoveLoveLoveLoveLoveLo");
printf("\n         veLoveLoveLoveLoveLoveLoveLoveLoveLove");
printf("\n           LoveLoveLoveLoveLoveLoveLoveLoveLo");
printf("\n             veLoveLoveLoveLoveLoveLoveLove");
printf("\n               LoveLoveLoveLoveLoveLoveLo");
printf("\n                  veLoveLoveLoveLoveLov");
printf("\n                      veLoveLoveLo");
printf("\n                           ve");
 }
 else if (f[0] == 'a')
 {
printf("\n\n\n\t░█████╗░███████╗███████╗███████╗░█████╗░████████╗██╗░█████╗░███╗░░██╗");
printf("\n\t██╔══██╗██╔════╝██╔════╝██╔════╝██╔══██╗╚══██╔══╝██║██╔══██╗████╗░██║");
printf("\n\t███████║█████╗░░█████╗░░█████╗░░██║░░╚═╝░░░██║░░░██║██║░░██║██╔██╗██║");
printf("\n\t██╔══██║██╔══╝░░██╔══╝░░██╔══╝░░██║░░██╗░░░██║░░░██║██║░░██║██║╚████║");
printf("\n\t██║░░██║██║░░░░░██║░░░░░███████╗╚█████╔╝░░░██║░░░██║╚█████╔╝██║░╚███║");
printf("\n\t╚═╝░░╚═╝╚═╝░░░░░╚═╝░░░░░╚══════╝░╚════╝░░░░╚═╝░░░╚═╝░╚════╝░╚═╝░░╚══╝");
printf("\n\n\t                     [ Result : Affection ]      ");
 }
 else
 {

printf("\n\n\n\t░██████╗██╗░██████╗████████╗███████╗██████╗░░██████╗░░░░██╗██████╗░██████╗░░█████╗░████████╗██╗░░██╗███████╗██████╗░░██████╗");
printf("\n\t██╔════╝██║██╔════╝╚══██╔══╝██╔════╝██╔══██╗██╔════╝░░░██╔╝██╔══██╗██╔══██╗██╔══██╗╚══██╔══╝██║░░██║██╔════╝██╔══██╗██╔════╝");
printf("\n\t╚█████╗░██║╚█████╗░░░░██║░░░█████╗░░██████╔╝╚█████╗░░░██╔╝░██████╦╝██████╔╝██║░░██║░░░██║░░░███████║█████╗░░██████╔╝╚█████╗░");
printf("\n\t░╚═══██╗██║░╚═══██╗░░░██║░░░██╔══╝░░██╔══██╗░╚═══██╗░██╔╝░░██╔══██╗██╔══██╗██║░░██║░░░██║░░░██╔══██║██╔══╝░░██╔══██╗░╚═══██╗");
printf("\n\t██████╔╝██║██████╔╝░░░██║░░░███████╗██║░░██║██████╔╝██╔╝░░░██████╦╝██║░░██║╚█████╔╝░░░██║░░░██║░░██║███████╗██║░░██║██████╔╝");
printf("\n\t╚═════╝░╚═╝╚═════╝░░░░╚═╝░░░╚══════╝╚═╝░░╚═╝╚═════╝░╚═╝░░░░╚═════╝░╚═╝░░╚═╝░╚════╝░░░░╚═╝░░░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═════╝░");
 }
printf("\n\n╘══════════════════════════════════════════════════════════════════════════════╛");

}

