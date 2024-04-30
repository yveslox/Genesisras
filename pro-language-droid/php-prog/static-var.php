<?php


function fun_names()
{
    Static $count = 0;
    $count++;
    print $count;
    print "\n";
}

fun_names();
fun_names();
fun_names();

?>
