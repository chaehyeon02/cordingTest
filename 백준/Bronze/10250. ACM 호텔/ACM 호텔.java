import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int h, w, n, a, b;
        int t = Integer.parseInt(br.readLine());
        for(int i = 0; i < t; i++) {
            StringTokenizer input = new StringTokenizer(br.readLine());
            h = Integer.parseInt(input.nextToken());
            w = Integer.parseInt(input.nextToken());
            n = Integer.parseInt(input.nextToken());

            if(n % h == 0) {
                a = h * 100;
                b = n / h;
            }
            else {
                a = n % h * 100;
                b = n / h + 1;
            }
            
            System.out.println(a + b);
        }
    }
}