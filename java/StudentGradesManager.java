import java.util.Scanner;
import java.util.Arrays;

public class StudentGradesManager {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of students: ");
        int n = sc.nextInt();

        int[] marks = new int[n];
        String[] names = new String[n];

        for (int i = 0; i < n; i++) {
            System.out.print("Enter name of student " + (i + 1) + ": ");
            names[i] = sc.next();
            System.out.print("Enter marks of " + names[i] + ": ");
            marks[i] = sc.nextInt();
        }

        int total = 0;
        int highest = marks[0];
        int lowest = marks[0];

        for (int mark : marks) {
            total += mark;
            if (mark > highest) highest = mark;
            if (mark < lowest) lowest = mark;
        }

        double average = (double) total / n;

        System.out.println("\n===== REPORT =====");
        System.out.println("Total marks: " + total);
        System.out.println("Average marks: " + average);
        System.out.println("Highest marks: " + highest);
        System.out.println("Lowest marks: " + lowest);

        Arrays.sort(marks);
        System.out.println("Marks in ascending order: " + Arrays.toString(marks));

        System.out.print("\nEnter the name of the student to search marks: ");
        String searchName = sc.next();
        boolean found = false;
        for (int i = 0; i < n; i++) {
            if (names[i].equalsIgnoreCase(searchName)) {
                System.out.println(searchName + "'s marks: " + marks[i]);
                found = true;
                break;
            }
        }
        if (!found) System.out.println("Student not found!");

        sc.close();
    }
}
