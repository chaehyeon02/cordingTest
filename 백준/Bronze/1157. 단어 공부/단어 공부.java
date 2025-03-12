import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int[] alphabet = new int[26];
		Arrays.fill(alphabet, 0);
		String s = in.next();

		s = s.toUpperCase();
		for(int i = 0; i < s.length(); i++) {
			alphabet[s.charAt(i) - 'A']++;
		}

		int maxCnt = 0;
		char result = '?';
		for(int i = 0; i < 26; i++) { //최댓값 찾기
			if(alphabet[i] > maxCnt) {
				maxCnt = alphabet[i];
				result = (char)(i + 65);
			}
		}
		
		for(int i = 0; i < 26; i++) {
			if(i == result - 'A') continue;
			if(alphabet[i] == maxCnt) {
				result = '?';
				break;
			}

		}
		System.out.println(result);
	}
}