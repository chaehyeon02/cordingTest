import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        boolean[][] paper = new boolean[100][100];
        for(boolean[] b : paper)
            Arrays.fill(b, false);

        int t = Integer.parseInt(br.readLine());
        for(int i = 0; i < t; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            for(int j = x; j < x + 10; j++) {
                for(int k = y; k < y + 10; k++)
                    paper[j][k] = true;
            }
        }

        int cnt = 0;
        for(int i = 0; i < 100; i++) {
            for(int j = 0; j < 100; j++) {
                if(paper[i][j] == true) cnt++;
            }
        }
        System.out.println(cnt);
    }
}