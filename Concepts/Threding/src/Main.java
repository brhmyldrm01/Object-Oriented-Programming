public class Main {

    public static void main(String[] args) {
        /// Bu uygulamamızda thread ile 3 kronometre aynı anda çalışmış oldu
    Kronometre kronometre=new Kronometre("1");
        Kronometre kronometre0=new Kronometre("2");
        Kronometre kronometre1=new Kronometre("3");
    kronometre.start();
    kronometre0.start();
    kronometre1.start();
    }
}
