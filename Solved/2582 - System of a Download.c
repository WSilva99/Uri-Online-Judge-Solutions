#include <stdio.h>
#include <stdlib.h>

int main(){
    char musicas[11][14] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!",
    "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS" };
    int n, b1, b2;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &b1, &b2);
        printf("%s\n", musicas[b1+b2]);
    }
    return(0);
}



