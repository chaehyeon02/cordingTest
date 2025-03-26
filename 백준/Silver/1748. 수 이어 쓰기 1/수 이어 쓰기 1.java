import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int ans = 0;
        int digit = 1;
        int m = 10;

        for(int i = 1; i <= n; i++) {
            if(i % m == 0) {
                m *= 10;
                digit++;
            }
            ans += digit;
        }
        System.out.println(ans);
    }
}