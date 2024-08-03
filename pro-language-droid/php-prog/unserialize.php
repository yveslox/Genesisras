<?php 

$serialized_data = serialize(array('Math','Language','Science'));
echo $serialized_data."\n";

$var1 = unserialize($serialized_data);

var_dump($var1);
?>