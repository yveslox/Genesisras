<?php

class Person
{
    function fun_name1()
    {
    echo "Fun_name1 called"."\n";
    }
}

class Employee extends Person
{
    function fun_name2()
    {
    echo "Fun_name1 called"."\n";
    }
}

$obj = new Employee;
$obj->fun_name1();
$obj->fun_name2();

?>