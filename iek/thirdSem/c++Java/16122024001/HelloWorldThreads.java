public class HelloWorldThreads implements Runnable {

    private String message;  // Το μήνυμα που θα τυπωθεί
    private int delay;       // Η καθυστέρηση σε milliseconds
    private static boolean isHelloTurn = true; // Ελέγχει ποιο thread έχει σειρά

    // Κατασκευαστής για την αρχικοποίηση του μηνύματος και της καθυστέρησης
    public HelloWorldThreads(String message, int delay) {
        this.message = message;
        this.delay = delay;
    }

    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            synchronized (HelloWorldThreads.class) {
                try {
                    // Περιμένει αν δεν είναι η σειρά του
                    while ((message.equals("Hello") && !isHelloTurn) || (message.equals("World") && isHelloTurn)) {
                        HelloWorldThreads.class.wait();
                    }

                    // Καθυστέρηση πριν την εκτύπωση
                    Thread.sleep(delay);
                    System.out.println(message); // Εκτύπωση του μηνύματος

                    // Εναλλαγή σειράς
                    isHelloTurn = !isHelloTurn;

                    // Ειδοποιεί το άλλο thread να εκτυπώσει
                    HelloWorldThreads.class.notify();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public static void main(String[] args) {
        // Δημιουργία και εκκίνηση του πρώτου thread με το μήνυμα "Hello"
        HelloWorldThreads helloTask = new HelloWorldThreads("Hello", 1000);
        Thread thread1 = new Thread(helloTask);

        // Δημιουργία και εκκίνηση του δεύτερου thread με το μήνυμα "World"
        HelloWorldThreads worldTask = new HelloWorldThreads("World", 500);
        Thread thread2 = new Thread(worldTask);

        // Εκκίνηση των threads
        thread1.start();
        thread2.start();
    }
}
