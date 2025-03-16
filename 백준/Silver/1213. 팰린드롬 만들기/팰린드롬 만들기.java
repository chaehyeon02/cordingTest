import java.util.*;
import java.lang.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] alphabet = new int[26];
        String word = br.readLine();
        int oddIdx = -1;

        for(int i = 0; i < word.length(); i++) { 
            alphabet[word.charAt(i) - 'A']++;
        }

        for(int i = 0; i < 26; i++) {
            if(alphabet[i] % 2 == 1) {
                if(oddIdx > -1) { 
                    System.out.print("I'm Sorry Hansoo");
                    return;
                }
                oddIdx = i;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(alphabet[i] > 0) {
                for(int j = 0; j < alphabet[i] / 2; j++)
                    System.out.print((char)(i + 'A'));
            }
        }

        if(oddIdx > -1) 
            System.out.print((char)(oddIdx + 'A'));

        for(int i = 25; i >= 0; i--) {
            if(alphabet[i] > 0) {
                for(int j = 0; j < alphabet[i] / 2; j++)
                    System.out.print((char)(i + 'A'));
            }
        }
    }
}