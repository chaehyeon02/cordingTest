import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String s;
        while((s = br.readLine()) != null) {
            int n = Integer.parseInt(s);
            int cnt = 1;
            long oneNum = 1;
            while(true) {
                if(oneNum % n == 0) {
                    System.out.println(cnt);
                    break;
                }
                else {
                    cnt++;
                    oneNum = oneNum * 10 + 1;
                    oneNum %= n;
                };
            }
        }
    }
}