<?php 
$cars = array(
    array("Volvo",22,18),
    array("BMW",15,13),
    array("Saab",5,2),
    array("Land Rover",17,15),
);

foreach($cars as $values)
{
    echo $values[0][0].":In stock:".$values[0][1].",sold:".$values[0][2]."\n";
}
?>