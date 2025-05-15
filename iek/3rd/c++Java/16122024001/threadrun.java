public class threadrun extends Thread {
  public static void main(String[] args) {
    threadrun thread = new threadrun();
    thread.start();
  }
  public void run() {
	  try {
           for (int i = 0; i < 10; i++) {               
               Thread.sleep(1000);
               System.out.println(i);
               }
           }
      catch (Exception e) {
               System.out.println(e);
           }
  }
}
