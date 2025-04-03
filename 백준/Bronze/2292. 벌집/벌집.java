import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int result = 1, range = 1;
        
        if(n == 1) {
            System.out.println(result);
            return;
        }
        
        while(true) {
            range += result * 6;
            if(n <= range) break;
            result++;
        }
        
        System.out.println(result + 1);
    }
}