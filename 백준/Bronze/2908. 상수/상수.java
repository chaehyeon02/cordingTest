import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		String s1 = in.next();
		String s2 = in.next();

		int n1 = 0, n2 = 0;
		for(int i = 0, digit = 1; i < 3; i++, digit *= 10) {
			n1 += Integer.parseInt(s1.substring(i, i + 1)) * digit;
			n2 += Integer.parseInt(s2.substring(i, i + 1)) * digit;
		}

		if (n1 > n2) System.out.println(n1);
		else System.out.println(n2);
	}
}