<?php 

class callableclass
{
    public function __invoke($x)
    {
        var_dump($x);
    }
}

$obj = new callableClass;
$obj(5);
var_dump(is_callable($obj));

?>