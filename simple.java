import java.io.*;
class simple {
    public static void main(String args[]) {
        int attendance;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter age:");
        attendance = sc.nextInt();
        System.out.println(attendance <= 75 ? "No bunk Go for attendane" : "Bunk unclocked...Enjoy the day..!!");
    }
}