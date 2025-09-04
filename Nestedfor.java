import java.util.*;
public class Nestedfor {
    public static void main(String args[]){
        int i,j;
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter n values:");
        int n=obj.nextInt();
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                System.out.println(i);
            }
        }
    }
}