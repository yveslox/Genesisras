<?php

$str1 ="Welcome to GFG";
$str2 ="Welcome to Geeksforgeeks";
$str3 ="Welcome ";


echo strncmp($str1,$str3,7);
echo "\n";

echo strncmp($str2,$str1,14);
echo "\n";

echo strncmp($str3,$str2,10);
echo "\n";
?>
