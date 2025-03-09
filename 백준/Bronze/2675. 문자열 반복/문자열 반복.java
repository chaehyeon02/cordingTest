import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n = in.nextInt();

		for(int i = 0; i < n; i++) {
			int num = in.nextInt();
			String s = in.next();
			StringBuffer result = new StringBuffer();

			for(int j = 0; j < s.length(); j++) {
				for(int k = 0; k < num; k++)
					result.append(s.charAt(j));
			}
			System.out.println(result);
		}
	}
}