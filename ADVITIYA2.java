import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        while (T-- > 0) {
            int[] responses = new int[5];
            for (int i = 0; i < 5; i++) {
                responses[i] = scanner.nextInt();
            }
            if (likedByAtLeastFourJudges(responses)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

    public static boolean likedByAtLeastFourJudges(int[] responses) {
        int count = 0;
        for (int response : responses) {
            if (response == 1) {
                count++;
            }
        }
        return count >= 4;
    }
}