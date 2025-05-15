<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "games";
$conn = mysqli_connect($servername, $username, $password, $dbname);
if (!$conn) {
    die("Αποτυχία Σύνδεσης: " . mysqli_connect_error());
}
echo "<body bgcolor='#d3d3d3'>";
echo "<center><br><a href='index.html'><button>Επιστροφή στην Αρχική</button></a><br></center>";
if (isset($_POST['id'])) {
    $id = intval($_POST['id']);
    $sql = "DELETE FROM MyGames WHERE id = ?";
    $stmt = mysqli_prepare($conn, $sql);
    if ($stmt) {
          mysqli_stmt_bind_param($stmt, "i", $id);
        if (mysqli_stmt_execute($stmt)) {
            echo "<br><br><center>Η Εγγραφή με ID $id διαγράφηκε επιτυχώς.</center>";
        } else {
            echo "<br><br><center>Σφάλμα κατά την διαγραφή εγγραφής: </center>" . mysqli_stmt_error($stmt);
        }
        mysqli_stmt_close($stmt);
    } else {
        echo "<br><br><center>Σφάλμα στην προετοιμασία του αιτήματος:  </center>" . mysqli_error($conn);
    }
} else {
    echo "<br><br><center>Δεν δόθηκε ID για διαγραφή.</center>";
}
mysqli_close($conn);
?>
