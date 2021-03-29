import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner s = new Scanner(System.in);
    int n, l, i, j, sum;
    String in;
    n = s.nextInt();
    while(n > 0) {
      l = s.nextInt();
      i = 0;
      sum = 0;
      while(i < l) {
        in = s.next();
        for(j = 0; j < in.length(); j++) {
          sum += ((int) in.charAt(j) - 65) + i + j;
        }
        i++;
      }
      System.out.println(sum);
      n--;
    }
  }
}