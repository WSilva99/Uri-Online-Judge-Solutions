import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner s = new Scanner(System.in);
    int c, b, e;
    c = s.nextInt();
    while(c > 0) {
      StringBuilder aux, str = new StringBuilder();
      b = s.nextInt();
      e = s.nextInt();
      int i;
      i = b;
      while(i <= e) {
        str.append(i);
        i++;
      }
      System.out.printf("%s", str);System.out.println(str.reverse());
      c--;
    }
  }
}