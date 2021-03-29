 #include <stdio.h>

 int main(){
    int n, m, i, j, ii, jj, cont = 0, x = 0, y = 0;
    scanf("%d %d", &n, &m);
    int leitura[n][m];
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &leitura[i][j]);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(leitura[i][j] == 42){
                for(ii = i-1; ii <= i+1; ii++){
                    for(jj = j-1; jj <= j+1; jj++){
                        if(ii != i || jj != j){
                            if(leitura[ii][jj] == 7){
                                cont++;
                            }
                        }
                    }
                }
                if(cont == 8){
                    x = i+1;
                    y = j+1;
                    printf("%d %d\n", x, y);
                    return (0);
                }
                cont = 0;
            }
        }
    }
    printf("0 0\n");

    return(0);
 }

