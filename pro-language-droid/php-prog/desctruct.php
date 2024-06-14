<?php

class cls1
{
    function cls1($x,$y)
    {
        $sum = $x + $y;
        echo "sum= ".$sum;
    }

    function __desctrut()
    {
      echo "Function called and Destroying"."\n";
    }
}


$obj = new cls1(100,60);


?>