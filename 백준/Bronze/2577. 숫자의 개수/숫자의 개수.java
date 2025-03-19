import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] arr = new int[10];
        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        int c = Integer.parseInt(br.readLine());

        String s = Integer.toString(a * b * c);

        for(int i = 0; i < s.length(); i++) {
            arr[(int)s.charAt(i) - 48]++;      
        }

        for(int i = 0; i < 10; i++) 
            System.out.println(arr[i]);
    }
}