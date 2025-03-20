import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] arr = new int[16];
        int n = Integer.parseInt(br.readLine());

        arr[0] = 2;
        for(int i = 1; i <= n; i++) {
            arr[i] = arr[i - 1] * 2 - 1;
        }
        System.out.print(arr[n] * arr[n]);
    }
}