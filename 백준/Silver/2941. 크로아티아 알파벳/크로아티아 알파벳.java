import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		String s = in.next();
		String[] croatia = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

		for(int i = 0; i < croatia.length; i++) {
			if(s.contains(croatia[i])) {
				s = s.replace(croatia[i], "*");
			}
		}
		System.out.println(s.length());

	}
}