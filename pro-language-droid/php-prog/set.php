<?php

class dog 
{
    public $Name;
    
    public function __construct($Name)
    {
        $this -$Name = $Name;
    }

    public function __set($var,$val)
    {
        print "Method";
    }

    public $AdminEmail ='foo@bar.com';
}

$systemvars = new mytable("Systemvars");
$systemvars-> AdminEmail ='support@abc.com';

?>