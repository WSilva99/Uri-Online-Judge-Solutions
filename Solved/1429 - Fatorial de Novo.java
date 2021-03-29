import java.io.IOException;
import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    String acm;
    while(!(acm = s.next()).equals("0")){
      int valor = 0;
      int k = acm.length();
      for(int i = 0; i < k; i++){
        int z = (int) (acm.charAt(i) - 48);
        valor += z * factorial(k-i);
      }
      System.out.println(valor);
    }
  }

  public static int factorial(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
      fact *= i;
    }
    return fact;
  }
}