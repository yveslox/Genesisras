<?php 

$age = array("merbin"=>"23","stalin"=>"47","Kumar"=>"41");

arsort($age);

foreach($age as $x => $x_value)
{
    echo "key=".$x.", value=".$x_value;
    echo "\n";
}
?>