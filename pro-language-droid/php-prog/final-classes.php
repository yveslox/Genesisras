<?php

final class cls1
{
    
     function show($x,$y)
    {   
        $sum = $x + $y;
        echo "Sum=".$sum;
    }    
}

$obj = new cls1;
$obj->Show(100,100);
    
?>