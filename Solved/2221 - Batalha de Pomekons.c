 #include <stdio.h>

 int main(){
     int c, b, a, d, l, vgd, vgg;
     scanf("%d", &c);
     while(c--){
        scanf("%d", &b);
        scanf("%d %d %d", &a, &d, &l);
        vgd = (a+d)/2;
        if(l%2 == 0)
            vgd += b;
        scanf("%d %d %d", &a, &d, &l);
        vgg = (a+d)/2;
        if(l%2 == 0)
            vgg += b;
        if(vgd > vgg){
            printf("Dabriel\n");
        }else if(vgd < vgg){
            printf("Guarte\n");
        }else{
            printf("Empate\n");
        }
     }
     return(0);
 }
