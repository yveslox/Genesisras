<?php 

$var_name1=122.0050;
$var_name2=122.00;
$var_name3=122.50;

$var_name4=122.50;
$var_name5=12250;
$var_name6=0.50;
$var_name7=0.50;

$var_name8=-122.50;
$var_name9=-122.50;
$var_name10=-12250;


echo floatval(122.00,50)."\n";
echo floatval(122.00)."\n";
echo floatval(122.50)."\n";

echo floatval(122,50)."\n";
echo floatval(12250)."\n";
echo floatval(0,50)."\n";
echo floatval(0.50)."\n";

echo floatval(-122.50)."\n";
echo floatval(-122,50)."\n";
echo floatval($var_name10)."\n";

?>