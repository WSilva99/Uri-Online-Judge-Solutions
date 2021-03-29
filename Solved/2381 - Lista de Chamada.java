import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int n, k, i = 0;
        n = s.nextInt();
        k = s.nextInt();
        String[] lista = new String[n];
        while(i < n) {
          lista[i] = s.next();
          i++;
        }
        Arrays.sort(lista);
        System.out.println(lista[k-1]);
    }
}