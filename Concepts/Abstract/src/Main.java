public class Main {

    public static void main(String[] args) {
        GameCalculator gameCalculator=new WomanGameCalculator();
        GameCalculator gameCalculator1=new ManGameCalculator();
        gameCalculator.hesapla();
        gameCalculator1.hesapla();


    }
}
