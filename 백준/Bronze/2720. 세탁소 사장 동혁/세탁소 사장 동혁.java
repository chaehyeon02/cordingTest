import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] ans = new int[4];
        int[] coins = {25, 10, 5, 1};
        int t = Integer.parseInt(br.readLine());
        
        for(int i = 0; i < t; i++) {
            Arrays.fill(ans, 0);
            int n = Integer.parseInt(br.readLine());
            for(int j = 0; n > 0; j++) {
                ans[j] = n / coins[j];
                n %= coins[j];
            }
            for(int j = 0; j < 4; j++) 
                System.out.print(ans[j] + " ");
            System.out.println();
        }
    }
}