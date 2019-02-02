import java.io.PrintWriter;
import java.io.File;
class Generate{
    public static void main(String[] args) {
        //File file = new File("J:\\vih\\file.txt");
       /* try {
            PrintWriter writer = new PrintWriter("J:\\vih\\file.txt", "UTF-8");
            long epoch = System.currentTimeMillis()/1000;
        System.out.println(epoch);
        for(long i=0;i<=epoch;i++)
        {
            writer.println(i+", ");
        }
        writer.close();
        } catch (Exception e) {
            System.out.println(e);
        }*/
    //    PrintWriter writer = new PrintWriter("file.txt", "UTF-8");
    String a="you, are, star";
    String ab[]=a.split(",");
    System.out.print(ab);
        
    }
}