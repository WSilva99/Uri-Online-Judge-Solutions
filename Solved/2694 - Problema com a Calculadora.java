import java.io.IOException;
import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int n = s.nextInt();
    while(n > 0){
      String entrada = s.next();
      int res = 0, st = 0, end;
      for(int i = 0; i < entrada.length(); i++){
        if(entrada.charAt(i) > 47 && entrada.charAt(i) < 58){
          if(st == 0)
            st = i;
          if(i+1 == entrada.length() || !(entrada.charAt(i+1) > 47 && entrada.charAt(i+1) < 58)){
            end = i+1;
            res += Integer.parseInt(entrada.substring(st,end));
            st = 0;
          }
        }
      }
      System.out.println(res);
      n--;
    }
  }
}