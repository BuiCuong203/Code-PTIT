
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07001 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DATA.txt"));
        while(in.hasNext()){
            System.out.println(in.nextLine());
        }
    }
    
}
