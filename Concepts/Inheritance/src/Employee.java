public class Employee extends Person {
    double salary;
    public void drink(){
        System.out.println("drink");
    }

    ////Poymorphism = Cok cesitlilik
    ///Overloading ve Overriding polymorphism elemanlarıdır.

    @Override
    public void eat(){
        super.eat();///Bununla birlikte super class daki eat fonksiyonu da çalısmıs olur
        System.out.println("eat-emp");
    }

    //Overloading
    public void eat(String food){
        System.out.println("eat: "+food);
    }







}
