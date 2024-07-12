<?php 

$numbers =array("30","71","5","17");
rsort($numbers);

$arrlength = count($numbers);
for($x = 0;$x <$arrlength;$x++)
{
    echo $numbers[$x];
    echo "\n";
}
?>