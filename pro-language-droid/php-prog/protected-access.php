<?php

class pro
{
    protected $a = 120;
    protected $b = 180;
    
    function sum()
    {   
        $sum = $this->a +$this->b;
        echo $sum;
    }    
}

$obj = new pro;
$obj->sum();

?>