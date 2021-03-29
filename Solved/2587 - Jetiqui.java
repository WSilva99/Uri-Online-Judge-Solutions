import java.io.IOException;
import java.util.*;

class Main {
  public static void main(String[] args)throws IOException {
    Scanner s = new Scanner(System.in);
    int c = s.nextInt();
    while(c > 0) {
      String possivel1, possivel2, incompleta;
      possivel1 = s.next();
      possivel2 = s.next();
      incompleta = s.next();
      
      int primeira = incompleta.indexOf("_");
      
      int segunda = incompleta.substring(1).indexOf("_") + primeira + 1;

      if(possivel1.charAt(primeira) == possivel2.charAt(segunda)) {
        System.out.println("Y");
      } else if(possivel2.charAt(primeira) == possivel1.charAt(segunda)) {
        System.out.println("Y");
      } else {
        System.out.println("N");
      }
      c--;
    }
  }
}