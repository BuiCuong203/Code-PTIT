
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07002 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DATA.in"));
        long tong = 0;
        while(in.hasNext()){
            try{
                int x = Integer.parseInt(in.next());
                tong += x;
            }
            catch(Exception e){
                
            }
        }
        System.out.println(tong);
    }
    
}
