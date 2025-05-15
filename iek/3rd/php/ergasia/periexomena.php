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
echo "<center><br><a href='index.html'><button>Επιστροφή στην Αρχική</button></a><br></center><br><br>";
$sql = "SELECT * FROM MyGames";
$result = mysqli_query($conn, $sql);
if ($result && mysqli_num_rows($result) > 0) {
    echo "<table border='1' cellpadding='10' cellspacing='0' style='margin: auto;'>";
    echo "<tr><th>ID</th><th>Όνομα Παιχνιδιού</th><th>Εκδότης</th><th>Ημερομηνία Έκδοσης</th><th>Multiplayer</th></tr>";
    while ($row = mysqli_fetch_assoc($result)) {
        echo "<tr>";
        echo "<td>" . htmlspecialchars($row['id']) . "</td>";
        echo "<td>" . htmlspecialchars($row['name']) . "</td>";
        echo "<td>" . htmlspecialchars($row['publisher']) . "</td>";
        echo "<td>" . htmlspecialchars($row['year']) . "</td>";
        echo "<td>" . ($row['multiplayer'] ? 'Yes' : 'No') . "</td>";
        echo "</tr>";
    }
    echo "</table>";
} else {
    echo "<p style='text-align: center;'>Δεν βρέθηκαν παιχνίδια στην βάση δεδομένων.</p>";
}
mysqli_close($conn);
echo "</center></body>";
?>
