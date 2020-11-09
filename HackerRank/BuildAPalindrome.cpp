import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the buildPalindrome function below.
     */
   static String buildPalindrome(String a, String b) {
       class A{
    String[] arr(String a){
        int l1 = 2 * (int)Math.pow(10,5);  
        String a1[] = new String[l1];
        a1[0] = Character.toString(a.charAt(a.length()-1));
        int idx1 = 1;
        for(int i=1;i<=a.length();i++){
            for(int j=0;j<a.length()-1;j++){
                if(j+i>a.length()-1)
                    a1[idx1]=a.substring(j);
                else
                    a1[idx1] = a.substring(j,j+i);
                idx1++;
            }
        }
    
    Set<String> set = new HashSet<String>(Arrays.asList(a1));
    set.remove(null);
    a1 = set.toArray(new String[set.size()]);
     return a1;
    }} 
        A ob = new A();
      String a1[] = ob.arr(a);
      A ob2 = new A();
      String b1[] = ob2.arr(b);
      String p[] = new String[(int)Math.pow(10,5)];
         String s;
        int id = 0;
        int max=0;
         for(int i=a1.length-1;i>=0;i--){
            for(int j=b1.length-1;j>=0;j--){
                s = a1[i] + b1[j];
                StringBuffer rev = new StringBuffer(s);
                rev.reverse();
                String re = rev.toString();
                if(re.equals(s)){
                    System.out.println(rev+" ");
                    p[id] = s;
                    if(id==0)
                        max = s.length();
                    else if(max<s.length())
                        max = s.length();
                    else if(max>s.length())
                    break;
                    id++;
                 }
                
            }
        }
        int n=0,idx=0;
        if(max==0)
            return "-1";
        String f[] = new String[p.length];
        idx = 0;
        for(int i=0;i<id;i++){
            if(max == p[i].length()){
                f[idx] = p[i];
                idx++;
            }
        }
        Set<String> set = new HashSet<String>(Arrays.asList(f));
        set.remove(null);
        f = set.toArray(new String[set.size()]);
        Arrays.sort(f);
        
        return f[0];
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = Integer.parseInt(scanner.nextLine().trim());

        for (int tItr = 0; tItr < t; tItr++) {
            String a = scanner.nextLine();

            String b = scanner.nextLine();

            String result = buildPalindrome(a, b);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();
    }
}
