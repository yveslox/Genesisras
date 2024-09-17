<?php 

$servername ='localhost';
$username ='username';
$password ='password';

$conn = new mysqli($servername,$username,$password);

if($conn->connect_error)
{
die("Connect failed:".$conn->connect_error);
}
$sql="CREATE DATABASE mydb";
if($conn->query($sql)===TRUE)
{
    echo "Database created successfully";
}
else{
    echo "Error creating database:".$conn->error;
}
$conn->close();

?>