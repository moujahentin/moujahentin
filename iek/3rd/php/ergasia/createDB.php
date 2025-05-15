<?php
$servername = "localhost";
$username = "root";
$password = "";
$conn = mysqli_connect($servername, $username, $password);
if (!$conn) {
die("Αποτυχία Σύνδεσης: " . mysqli_connect_error());
}
echo "<body bgcolor='#d3d3d3'>";
echo "<center><br><a href='index.html'><button>Επιστροφή στην Αρχική</button></a><br></center>";
$sql = "CREATE DATABASE games";
if (mysqli_query($conn, $sql)) {
echo "<br><center>Επιτυχής Δημιουργία Βάση Δεδομένων games</center>";
} else {
echo "<center>Σφάλμα κατα την Δημιουργία Βάσης Δεδομένων : </center>" . mysqli_error($conn);
}
echo "<br>";
mysqli_close($conn);
$servername = "localhost"; $username = "moujahentin";$password = "97721499";$dbname = "games";
$conn = mysqli_connect($servername, $username, $password, $dbname);
if (!$conn) {
die("Αποτυχία Σύνδεσης: " . mysqli_connect_error());
}
$sql = "CREATE TABLE MyGames (
id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
name VARCHAR(30) NOT NULL,
publisher VARCHAR(30) NOT NULL,
year DATE,
multiplayer BOOL
)";
if (mysqli_query($conn, $sql)) {
echo "<center>Επιτυχής Δημιουργία Πίνακα MyGames</center>";
} else {
echo "<center>Σφάλμα κατα την Δημιουργία Πίνακα : </center>" . mysqli_error($conn);
}
mysqli_close($conn);
?>
