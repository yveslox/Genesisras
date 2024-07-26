<?php 

function _autoload($class_name)
{
    $class_name = strolower($class_name);
    include_once'./inc/'.$class_name.'.class.php';
}

?>