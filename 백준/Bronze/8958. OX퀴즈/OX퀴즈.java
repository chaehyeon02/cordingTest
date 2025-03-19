import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        for(int i = 0; i < t; i++) {
            String s = br.readLine();
            int cnt = 0, score = 0;
            for(int j = 0; j < s.length(); j++) {
                if(s.charAt(j) == 'O') cnt++;
                else cnt = 0;
                score += cnt;
            }
            System.out.println(score);
        }
    }
}