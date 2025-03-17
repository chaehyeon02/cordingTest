import java.util.*;
import java.lang.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        int maxLen = 1;
        int inc = 1, dec = 1;

        StringTokenizer input = new StringTokenizer(br.readLine());

        for(int i = 0; i < n; i++) 
            arr[i] = Integer.parseInt(input.nextToken());

        for(int i = 0; i < n - 1; i++) {
            if(arr[i] <= arr[i + 1])
                inc++;
            else inc = 1;

            if(arr[i] >= arr[i + 1]) 
                dec++;
            else dec = 1;

            maxLen = Math.max(maxLen, Math.max(inc, dec));
        }
        
        System.out.print(maxLen);
    }
}