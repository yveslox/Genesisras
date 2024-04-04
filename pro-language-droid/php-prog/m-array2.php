<?php 
$marks = array(
    "merbin" => array(
        "physics" => 35,
        "maths" => 30,
        "chemestry" =>39,
    ),
    "stalin" => array(
        "physics" => 30,
        "maths" => 32,
        "chemestry" =>29,
    ),
    "angel" => array(
        "physics" => 31,
        "maths" => 22,
        "chemestry" =>39,
    ),
);

echo "Marks for merbin in physics : ";
echo $marks['merbin']['physics']."\n";

echo "Marks for stalin in physics : ";
echo $marks['stalin']['maths']."\n";

echo "Marks for angel in physics : ";
echo $marks['angel']['chemestry']."\n";
?>