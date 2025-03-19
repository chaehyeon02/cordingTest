import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        char[][] words = new char[5][15];
        int lenMax = 0;

        for(int i = 0; i < 5; i++) {
            String s = br.readLine();
            for(int j = 0; j < s.length(); j++) {
                words[i][j] = s.charAt(j);
            }
            if(s.length() > lenMax) lenMax = s.length();
        }

        for(int i = 0; i < lenMax; i++) {
            for(int j = 0; j < 5; j++) {
                if(words[j][i] == '\0') continue;
                System.out.print(words[j][i]);
            }
        }
    }
}