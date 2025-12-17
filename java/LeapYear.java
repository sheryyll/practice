import java.util.Scanner;

public class LeapYear {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a year: ");
        int year = sc.nextInt();

        boolean isLeap;

        if (year % 400 == 0) {
            isLeap = true;
        } else if (year % 100 == 0) {
            isLeap = false;
        } else if (year % 4 == 0) {
            isLeap = true;
        } else {
            isLeap = false;
        }

        if (isLeap) {
            System.out.println(year + " is a Leap Year");
        } else {
            System.out.println(year + " is NOT a Leap Year");
        }

        sc.close();
    }
}
