import java.io.IOException;
import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    String cipher;
    String message;
    Scanner scan = new Scanner(System.in);
    cipher = scan.next();
    message = scan.next();
    StringBuffer text = new StringBuffer();
    for(int i = 0; i < message.length(); i++){
      char x;
      x = (char) (97 + cipher.indexOf(message.charAt(i)));
      text.append(x);
    }
    System.out.println(text);
  }
}