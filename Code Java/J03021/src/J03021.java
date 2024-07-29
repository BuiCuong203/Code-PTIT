
import java.util.Scanner;

public class J03021 {
    public static boolean check(String s){
        StringBuilder sb = new StringBuilder(s);
        return s.equals(sb.reverse().toString());
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            String s = in.next();
            s = s.toUpperCase();
            String tmp = "";
            for(int i = 0; i < s.length(); i++){
                switch (s.charAt(i)) {
                    case 'A':
                    case 'B':
                    case 'C':
                        tmp += "2";
                        break;
                    case 'D':
                    case 'E':
                    case 'F':
                        tmp += "3";
                        break;
                    case 'G':
                    case 'H':
                    case 'I':
                        tmp += "4";
                        break;
                    case 'J':
                    case 'K':
                    case 'L':
                        tmp += "5";
                        break;
                    case 'M':
                    case 'N':
                    case 'O':
                        tmp += "6";
                        break;
                    case 'P':
                    case 'Q':
                    case 'R':
                    case 'S':
                        tmp += "7";
                        break;
                    case 'T':
                    case 'U':
                    case 'V':
                        tmp += "8";
                        break;
                    case 'W':
                    case 'X':
                    case 'Y':
                    case 'Z':
                        tmp += "9";
                        break;
                    default:
                        break;
                }
            }
            if(check(tmp)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
    
}
