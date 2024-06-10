<?php

class cls1
{
    function callme($par)
    {
    echo "I am called"."\n";
    }
}
$obj = new cls1;
$obj->callme(1);
?>