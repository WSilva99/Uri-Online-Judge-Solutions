 #include <stdio.h>

 int main(){
     int m, d, meses[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     while(scanf("%d %d", &m, &d) != EOF){
        int dan = 0;
        if(m == 12){
            if(d > 25){
                printf("Ja passou!\n");
            }else if(d == 25){
                printf("E natal!\n");
            }else if(d == 24){
                printf("E vespera de natal!\n");
            }else{
                dan = 25 - d;
                printf("Faltam %d dias para o natal!\n", dan);
            }
        }else{
            dan = meses[m-1] - d;
            while(m < 11){
                dan += meses[m];
                m++;
            }
            dan += 25;
            printf("Faltam %d dias para o natal!\n", dan);
        }
     }
     return(0);
 }




