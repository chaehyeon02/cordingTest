import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner in = new Scanner(System.in);
        boolean[] usedLetter = new boolean[26]; //알파벳 나왔는지
        int cnt = 0;

        int n = in.nextInt();
        for(int i = 0; i < n; i++) {
            Arrays.fill(usedLetter, false);
            String s = in.next();
            boolean ans = true;
            
            for(int j = 0; j < s.length(); j++) {
                int index = s.charAt(j) - 'a';
                if (usedLetter[index]) {
                    if(index == s.charAt(j - 1) - 'a') continue;
                    ans = false;
                    break;
                }
                usedLetter[index] = true;
            }
            
            if(ans) cnt++;
        }
        System.out.println(cnt);
    }
}