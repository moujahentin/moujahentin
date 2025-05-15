/*1. Άσκηση
Πρόβλημα: Θέλετε να παρακολουθείτε την πρόοδο δύο threads που κατεβάζουν αρχεία
από το διαδίκτυο. Ένα daemon thread παρακολουθεί συνεχώς τα κατεβάσματα και
καταγράφει ποιο αρχείο έχει ολοκληρωθεί.
Οδηγίες:
1. Δημιουργήστε δύο threads που αναπαριστούν κατεβάσματα αρχείων.
2. Το κάθε thread εκτυπώνει την πρόοδό του ανά 10% μέχρι να ολοκληρώσει το
κατέβασμα.
3. Το daemon thread καταγράφει την κατάσταση των threads κάθε 1 δευτερόλεπτο.*/


public class DownloadMonitor {

    public static void main(String[] args) {
        // Δημιουργία δύο threads για κατεβάσματα αρχείων
        DownloadTask file1 = new DownloadTask("File1");
        DownloadTask file2 = new DownloadTask("File2");

        Thread downloadThread1 = new Thread(file1);
        Thread downloadThread2 = new Thread(file2);

        // Δημιουργία και εκκίνηση του daemon thread
        Thread monitorThread = new Thread(new MonitorTask(file1, file2));
        monitorThread.setDaemon(true);

        // Εκκίνηση των threadsf
        downloadThread1.start();
        downloadThread2.start();
        monitorThread.start();
    }
}

// Κλάση για την αναπαράσταση ενός download task
class DownloadTask implements Runnable {
    private String fileName;
    private int progress = 0;

    public DownloadTask(String fileName) {
        this.fileName = fileName;
    }

    public int getProgress() {
        return progress;
    }

    @Override
    public void run() {
        while (progress < 100) {
            try {
                Thread.sleep(500); // Προσομοίωση καθυστέρησης
                progress += 10; // Αύξηση της προόδου κατά 10%
                System.out.println(fileName + " progress: " + progress + "%");
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        System.out.println(fileName + " download completed.");
    }
}

// Κλάση για την αναπαράσταση του monitor task
class MonitorTask implements Runnable {
    private DownloadTask file1;
    private DownloadTask file2;

    public MonitorTask(DownloadTask file1, DownloadTask file2) {
        this.file1 = file1;
        this.file2 = file2;
    }

    @Override
    public void run() {
        while (true) {
            try {
                Thread.sleep(1000); // Ελέγχει κάθε 1 δευτερόλεπτο
                System.out.println("Monitor: " + file1.getProgress() + "% - " + file2.getProgress() + "%");
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

/*Επεξήγηση:

    Κλάση DownloadTask:
        Υλοποιεί τη διεπαφή Runnable και αναπαριστά το κατέβασμα ενός αρχείου.
        Το ποσοστό προόδου αυξάνεται κατά 10% κάθε 500ms.
        Όταν η πρόοδος φτάσει το 100%, το κατέβασμα ολοκληρώνεται.

    Κλάση MonitorTask:
        Υλοποιεί επίσης τη διεπαφή Runnable.
        Είναι ένα daemon thread που παρακολουθεί την πρόοδο των δύο download threads.
        Καταγράφει την πρόοδο κάθε 1 δευτερόλεπτο.

    Κύρια Μέθοδος (main):
        Δημιουργεί δύο download threads (DownloadTask) και ένα monitor thread (MonitorTask).
        Το monitorThread ορίζεται ως daemon με την κλήση setDaemon(true).
        Ξεκινά όλα τα threads.*/
        
