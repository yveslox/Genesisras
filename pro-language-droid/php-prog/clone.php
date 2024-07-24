<?php

class SubObject 
{
    static $instances = 0;
    public $instance;

    public function __construct()
    {
        $this->instance= ++self::$instances;
    }
    
    public function __clone()
    {
        $this->instance= ++self::$instances;
    }
}
    class Mycloneable
    {
        public $object1;
        public $object2;

        function __clone()
        {
          $this->object =clone $this->object;
        }
    }
    

$objt = new Mycloneable();

$obj->object1 = new SubOject();
$obj->object2 = new SubOject();

$obj2 =clone $obj;

print("Original Object");
print_r($obj);

print("cloned Object");
print_r($obj2);

?>