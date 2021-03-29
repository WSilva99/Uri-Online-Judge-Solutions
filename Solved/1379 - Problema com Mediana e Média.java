import java.io.IOException;
import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int a, b;
    while(((a = s.nextInt()) != 0) && ((b = s.nextInt()) != 0)){
      int c = - a - b + 3 * a;
      System.out.println(c); 
    }
  }
}