<?php

class cls1
{
    
    final function fun_name()
    {   
        echo "This is final function";
    }    
}

$obj = new cls1;
$obj->fun_name();

?>