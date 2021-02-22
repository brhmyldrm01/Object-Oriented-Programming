import org.w3c.dom.ls.LSOutput;

public class Balikci {
       private double kasa=0;

    public void satis(Balik balik){
      kasa+=balik.satis();
    }

    public void alis(Balik balik){
        kasa-=balik.alis();
    }

    public void getKasa(){
        System.out.println("güncel kasa bakiyesi : "+kasa);
    }


}
