 #include <stdio.h>
 #include <math.h>

 int main(){
     char romanos[][5] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII",
      "IX", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC", "C",
       "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
     int numeroscon[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50,
     60, 70, 80, 90, 100, 200, 300, 400, 500, 600, 700, 800, 900};
     int n;
     scanf("%d", &n);
     //Contar digitos
     int n1 = n, cont = 0;
     while(n1 != 0){
        n1 /= 10;
        cont++;
     }
     //Separar digitos
     int digitos[cont], i = 1;
     while(n != 0){
        digitos[cont-i] = n % 10;
        n /= 10;
        i++;
     }
     //Separar valores
     i = 0;
     while(i < cont){
        digitos[i] = digitos[i] * pow(10, (cont-1)-i);
        i++;
     }

     //Imprimir
     i = 0;
     int j, f;
     while(i < cont){
        if(digitos[i] < 10){
            j = 0;
            f = 9;
        }else if(digitos[i] >= 10 && digitos[i] < 100){
            j = 9;
            f = 18;
        }else{
            j = 18;
            f = 27;
        }
        for(j; j < f; j++){
            if(digitos[i] == numeroscon[j])
                printf("%s", romanos[j]);
        }
        i++;
     }
     printf("\n");
     return(0);
 }



