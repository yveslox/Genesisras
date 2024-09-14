<?php 

$dbhost ='localhost:3306';
$dbuser ='admin';
$dbpass ='password';

$conn = mysqli_connect($dbhost,$dbuser,$dbpass);

if(!$conn)
{
die("Could not connect:".mysqli_error());
}
else{
    echo 'onnected successfully';
}
mysqli_close($conn);

?>