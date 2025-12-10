import java.util.Scanner;

public class OddNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter N: ");
        int n = sc.nextInt();

        System.out.println("Odd numbers from 1 to " + n + ":");

        for (int i = 1; i <= n; i += 2) {
            System.out.print(i + " ");
        }
    }
}
