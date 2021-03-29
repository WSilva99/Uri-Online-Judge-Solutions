import java.io.IOException;
import java.util.*;

class Main {
  public static void main(String[] args)throws IOException {
    Scanner s = new Scanner(System.in);
    int c = s.nextInt();
    while(c > 0) {
      String senha;
      senha = s.next();
      int possibilidades = 1;
      for(int i = 0; i < senha.length(); i++) {
        if( senha.charAt(i) == 'A' ||
          senha.charAt(i) == 'E' ||
          senha.charAt(i) == 'I' ||
          senha.charAt(i) == 'O' ||
          senha.charAt(i) == 'S' ||
          senha.charAt(i) == 'a' ||
          senha.charAt(i) == 'e' ||
          senha.charAt(i) == 'i' ||
          senha.charAt(i) == 'o' ||
          senha.charAt(i) == 's' 
        ) {
          possibilidades *= 3;
        } else {
          possibilidades *= 2;
        }
      }
      System.out.println(possibilidades);
      c--;
    }
  }
}