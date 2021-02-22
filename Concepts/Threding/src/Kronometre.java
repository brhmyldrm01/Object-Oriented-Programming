public class Kronometre implements Runnable {
    private Thread t;

    private String  threadName;
    public Kronometre(String threadName){
    this.threadName=threadName;

    }


    @Override
    public void run() {

            /// sleep metodu işlemin bekleme süresini veerir
            try {
                for (int i = 0;i<10;i++){
                    System.out.println(threadName+":"+i);
                Thread.sleep(1000);
                }
            } catch (InterruptedException e) {
                e.printStackTrace();
                System.out.println("Kesildi"+threadName);
        }
    }

    public void start(){
        if(t==null){
            t=new Thread(this,threadName);
            t.start();
        }
        }


}
