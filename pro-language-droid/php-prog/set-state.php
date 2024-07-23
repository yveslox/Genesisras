<?php

class dummy 
{
    private $value1_;
    private $value2_;

    function __construct()
    {
        $this->Value1_= 100;
        $this->Value2_= '100';
    }

    static function __set__state(array $varray)
    {
        foreach($array as $k => $v)
        {
            echo("$k ==> $v\n");
        }
    }
}

$aDummy = new Dummy();
var_export($aDummy);
eval(var_export($aDummy,true).';');
?>