import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner s = new Scanner(System.in);
    int n, k, v;
    n = s.nextInt();
    while(n > 0) {
      k = s.nextInt();
      ArrayList<String> p = new ArrayList<String>();
      int i = 0;
      while(i < k) {
        p.add(s.next());
        i++;
      }
      i = 1;
      v = 0;
      while(i < k) {
        if(!p.get(i-1).equals(p.get(i))) {
          v = -1;
        }
        i++;
      }
      if(v == 0) {
        System.out.println(p.get(0));
      } else {
        System.out.println("ingles");
      }
      n--;
    }
  }
}