import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		String s = in.next();
		int time = 0;

		for(int i = 0; i < s.length(); i++) {
			int num = s.charAt(i) - 'A';
			if(num < 3) time += 3; //ABC
			else if (num < 6) time += 4; //DEF
			else if (num < 9) time += 5; //GHI
			else if (num < 12) time += 6; //JKL
			else if (num < 15) time += 7; //MNO
			else if (num < 19) time += 8; //PARS
			else if (num < 22) time += 9; //TUV
			else if (num < 26) time += 10;
		}
		System.out.println(time);
	}
}