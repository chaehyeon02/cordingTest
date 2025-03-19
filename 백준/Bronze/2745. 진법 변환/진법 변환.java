import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        String s = st.nextToken();
        int n = Integer.parseInt(st.nextToken());
        int ans = 0;

        for(int i = s.length() - 1, j = 1; i >= 0; i--, j *= n) {
            int a;
            if((int)s.charAt(i) <= '9') {
                a = (int)s.charAt(i) - '1' + 1;
            }
            else {
                a = (int)s.charAt(i) - 'A' + 10;
            }
            ans += a * j;
        }
        System.out.println(ans);
    }
}