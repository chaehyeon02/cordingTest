import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            int m = Integer.parseInt(st.nextToken());
            if(m == 1) continue;
            
            for(int j = 2; j < m; j++) {
                if(m % j == 0) {
                    ans--;
                    break;
                }
            }
            ans++;
        }
        System.out.println(ans);
    }
}