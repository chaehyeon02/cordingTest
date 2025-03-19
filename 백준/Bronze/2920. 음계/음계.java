import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        int[] arr = new int[8];
        String result = "mixed";
        
        for(int i = 0; i < 8; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        boolean check = true;
        for(int i = 0; i < 7; i++) {
            if(arr[i] + 1 != arr[i + 1]) {
                check = false;
                break;
            }
        }
        if(check == true) 
            result = "ascending";

        check = true;
        for(int i = 0; i < 7; i++) {
            if(arr[i] - 1 != arr[i + 1]) {
                check = false;
                break;
            }
        }
        if(check == true) 
            result = "descending";
        
        System.out.print(result);
    }
}