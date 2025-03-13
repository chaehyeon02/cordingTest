import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner in = new Scanner(System.in);

        double sum = 0;
        int totalTime = 0;

        for(int i = 0; i < 20; i++) {
            String name = in.next();
            double time = in.nextDouble();
            String score = in.next();

            if(score.equals("P")) continue;

            sum += time * calScore(score);
            totalTime += time;
        }
        System.out.println(sum / totalTime);
    }

    public static double calScore(String score) {
        switch (score) {
            case "A+" : return 4.5;
            case "A0" : return 4.0;
            case "B+" : return 3.5;
            case "B0" : return 3.0;
            case "C+" : return 2.5;
            case "C0" : return 2.0;
            case "D+" : return 1.5;
            case "D0" : return 1.0;
            case "F" : return 0.0;
        }
        return 0;
    }
}