import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		String s = in.next();
		int[] alphabet = new int[26];
		Arrays.fill(alphabet, -1);

		for(int i = 0; i < s.length(); i++) {
			if(alphabet[s.charAt(i) - 'a'] == -1)
				alphabet[s.charAt(i) - 'a'] = i;
		}

		for(int i : alphabet) System.out.print(i + " ");
	}
}