<?php 

class A 
{
    public function foo()
    {
        echo "foo";
    }

public function bar()
{
    if(method_exists($this,'foo'))
    {
        echo "method exits\n";
    }
    else 
    {
        echo"method does not exist\n";
    }
}
}

$obj = new A;
$obj->bar();

?>