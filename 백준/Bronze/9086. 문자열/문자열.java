import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n = in.nextInt();

		for(int i = 0; i < n; i++) {
			String s = in.next();
			System.out.print(s.charAt(0));
			System.out.println(s.charAt(s.length() - 1));
		}
	}
}