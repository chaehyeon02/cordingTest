import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        long ans = 0;

        for(int i = 1; i <= n; i++)
            ans += (n / i) * i;

        System.out.println(ans);
    }
}