
import java.util.HashSet;
import java.util.Scanner;

public class J03009 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while(t-->0){
            String[] a = in.nextLine().split("\\s+");
            String b = in.nextLine();
            HashSet<String> c = new HashSet<>();
            for(String i : a){
                if(!b.contains(i)){
                    c.add(i);
                }
            }
            for(String i : c){
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
    
}
