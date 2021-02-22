public class Main {

    public static void main(String[] args) {

        Balikci balikci=new Balikci();
        balikci.satis(new Cipura(0.5));
        balikci.satis(new Levrek(0.5));
        balikci.satis(new DenizCipura(0.5));
        balikci.getKasa();
        balikci.alis(new DenizCipura());
        balikci.getKasa();



    }
}
