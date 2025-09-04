import java.util.*;
public class Fact {
    public static void main(String args[]) {
        Scanner obj = new Scanner(System.in);
        int i=1, f=1;
        int n=obj.nextInt();
        System.out.println("Siddarth");
        while(i<=n) {
            f=f*i;
            i++;
        }
        System.out.println("factorial="+f);
    }
}
