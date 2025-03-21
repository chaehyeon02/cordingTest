import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int maxNum = 0, minNum = 1000000;
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());

        for(int i = 0; i < n; i++) {
            int m = Integer.parseInt(st.nextToken());
            if(m > maxNum) maxNum = m;
            if(m < minNum) minNum = m;
        }
        System.out.println(maxNum * minNum);
    }
}