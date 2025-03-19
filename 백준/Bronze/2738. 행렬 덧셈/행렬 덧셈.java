import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer input = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(input.nextToken());
        int m = Integer.parseInt(input.nextToken());
        int[][] matrix = new int[n][m];

        for(int i = 0; i < n; i++) {
            input = new StringTokenizer(br.readLine());
            for(int j = 0; j < m; j++) {
                matrix[i][j] += Integer.parseInt(input.nextToken());
            }
        }
        for(int i = 0; i < n; i++) {
            input = new StringTokenizer(br.readLine());
            for(int j = 0; j < m; j++) {
                matrix[i][j] += Integer.parseInt(input.nextToken());
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) 
                System.out.print(matrix[i][j] + " ");
            System.out.println();
        }
        
        System.out.println();
    }
}