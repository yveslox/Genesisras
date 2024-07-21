<?php

class dog 
{
    public $Name;
    public $Dogtag;

    public function __get($var)
    {
        print "Attempted to retrieve $var and failed...";
    }
}

$poppy = new dog;
print $poppy->Age;

?>