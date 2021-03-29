import java.io.IOException;
import java.util.*;

class Main {
  public static void sort2DArray(int arr[][], int col) { 
    Arrays.sort(arr, new Comparator<int[]>() {       
      @Override     
      public int compare(final int[] entry1, final int[] entry2) { 
        if (entry1[col] > entry2[col])
          return 1; 
        else
          return -1; 
        } 
    });   
  }

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int n, m, i = 0, j = 0, aux;
    n = s.nextInt();
    m = s.nextInt();
    int[][] tempo = new int[n][2];
    while(i < n){
      aux = 0;
      j = 0;
      while(j < m){
        aux += s.nextInt();
        j++;
      }
      tempo[i][0] = i+1;
      tempo[i][1] = aux;
      i++;
    }
    //Arrays.sort(tempo);
    sort2DArray(tempo, 1);
    for (i = 0; i < 3; i++){ 
      System.out.println(tempo[i][0]); 
    }
  }
}