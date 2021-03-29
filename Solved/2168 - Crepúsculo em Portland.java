import java.io.IOException;
import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    
    int n, i ,j;
    n = s.nextInt();
    int[][] ruas = new int[n+1][n+1];

    for(i = 0; i < n+1; i++) {
      for(j = 0; j < n+1; j++) {
        ruas[i][j] = s.nextInt();
      }
    }

    for(i = 0; i < n; i++) {
      for(j = 0; j < n; j++) {
        int v = 0;
        if(ruas[i][j] == 1)
          v++;
        if(ruas[i+1][j] == 1)
          v++;
        if(ruas[i][j+1] == 1)
          v++;
        if(ruas[i+1][j+1] == 1)
          v++;

        if(v > 1) {
          System.out.print("S");
        } else {
          System.out.print("U");
        }
      }
      System.out.println();
    }
    
  }
}