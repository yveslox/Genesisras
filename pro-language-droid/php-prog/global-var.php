<?php

$a = 5;
$b = 10;

function myTest()
{
    global $a ,$b;
    $b = $a + $b;
}

myTest();
echo "$b \n";
?>
