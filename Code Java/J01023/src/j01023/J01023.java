
import java.util.Scanner;

public class J01023 {
    
    public static String s;
    public static boolean check;
    public static char[] dau = {'+', '-'};
    
    public static boolean isValid(){
        int a = Integer.parseInt(s.substring(0, 2));
        int b = Integer.parseInt(s.substring(5, 7));
        int c = Integer.parseInt(s.substring(10));
        if(a < 10 || b < 10 || c < 10) return false;
        if(s.charAt(3) == '+'){
            return a + b == c;
        }
        else return a - b == c;
    }
    
    public static String changeChar(String str, int index, char k){
        return str.substring(0, index) + k + str.substring(index + 1);
    }
    
    public static void Try(int index){
        if (check){
            return;
        }

        if(s.length() == index){
            if(isValid()){
                check = true;
                System.out.println(s);
            }
            return;
        }
        if(s.charAt(index) == '?'){
            if(index == 3){
                for(int i = 0; i < 2; i++){
                    s = changeChar(s, index, dau[i]);
                    Try(index + 1);
                }
            }
            else{
                for(int i = '0'; i <= '9'; i++){
                    s = changeChar(s, index, (char)(i));
                    Try(index + 1);
                }
            }
            s = changeChar(s, index, '?');
        }
        else{
            Try(index + 1);
        }
    }
    
    public static void test(){
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == '*' || s.charAt(i) == '/'){
                System.out.println("WRONG PROBLEM!");
                return;
            }
        }
        check = false;
        Try(0);
        if(!check){
            System.out.println("WRONG PROBLEM!");
        }
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while(t-->0){
            s = in.nextLine();
            test();
        }
    }
    
}
