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
echo "<center><br><a href='index.html'><button>Επιστροφή στην Αρχική</button></a><br><br></center>";
$name1=$_POST["name"];
$publisher1=$_POST["publisher"];
$year1=$_POST["year"];
$multiplayer1=isset($_POST["multiplayer"]) ? 1 : 0;
$sql = "INSERT INTO MyGames (name, publisher, year, multiplayer)
VALUES ('$name1', '$publisher1','$year1','$multiplayer1')";
if (mysqli_query($conn, $sql)) {
echo "<center>Δημιουργήθηκε νέα εγγραφή.</center>";
} else {
echo "<center>Error: " . $sql . "</center><br>" . mysqli_error($conn);
}
mysqli_close($conn);
?>
