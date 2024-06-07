<?php 

$obj=Array("Physics","Chemestry","Mathematics");
$var_int = 890;

if(is_object($obj))
echo "This; is object"."\n";
else 
echo "This is not object"."\n";

if(is_object($var_int))
echo "This is object"."\n";
else 
echo "This is not object"."\n";

?>