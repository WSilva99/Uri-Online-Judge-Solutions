import java.util.Scanner;
import java.lang.Math;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int a, b, c, v , l;
    while(((a = s.nextInt()) != 0) && ((b = s.nextInt()) != 0) && ((c = s.nextInt()) != 0)){
      v = a * b * c;
      l = (int) Math.cbrt(v);
      System.out.println(l); 
    }
  }
}