public class Main {

    public static void main(String[] args) {



        ///Polymorphism için Emoployee ye git.
        Customer customer=new Customer();
        Employee employee=new Employee();
        ///iki class da person classını extend eder
        /// extend durumunda is - a mantığı vardır :

        customer.eat();
        employee.eat();
        employee.eat("elma");




    }
}
