import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        //Vector<Integer> v = new Vector<>(Arrays.asList(0, 0, 1, 2, 7));
        int[] arr = new int[12];

        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 4;

        for(int i = 4; i < 12; i++) {
            arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
        }

        int t = Integer.parseInt(br.readLine());
        for(int i = 0; i < t; i++) {
            int n = Integer.parseInt(br.readLine());
            System.out.println(arr[n]);
        }
    }
}