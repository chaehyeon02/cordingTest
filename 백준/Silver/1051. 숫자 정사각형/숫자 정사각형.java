import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        char[][] square = new char[n][m];
        int len = Math.min(n, m) - 1;
        
        for(int i = 0; i < n; i++) {
            String s = br.readLine();
            for(int j = 0; j < m; j++)
                square[i][j] = s.charAt(j);
        }
        
        for(int i = len; i > 0; i--) {
            for(int a = 0; a + len < n; a++) {
                for(int b = 0; b + len < m; b++) {
                    if(square[a][b] == square[a+len][b] && square[a][b] == square[a][b+len] && square[a][b] == square[a+len][b+len]){
                        System.out.print((len+1) * (len+1));
                        return;
                       }
                }
            }
            len--;
        }
        System.out.print(1);
    }
}