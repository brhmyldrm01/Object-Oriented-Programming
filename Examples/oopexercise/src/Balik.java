import java.util.Scanner;

public  class Balik {
    String renk;
    double kg;
    String tur;
    double ucret;


    public  double satis(){
        System.out.println();
        System.out.println(this.kg+" agirliginda "+ this.tur+" satisi.");
        System.out.println("ucret :"+this.kg*this.ucret+" tl'dir.");
        return ucret*kg;
    }

    public  double alis(){
        System.out.println(this.tur +" baligi alim işlemi için balığın ağırlıgını giriniz:");
        Scanner scanner=new Scanner(System.in);
       this.kg= scanner.nextDouble();
        System.out.println(this.kg+" agirligindaki "+this.tur+" alimi.");
        System.out.println("ucret "+this.kg*this.ucret+" tl'dir");
        return this.kg*this.ucret;
    }

}