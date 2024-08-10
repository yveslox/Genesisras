<?php 

if(class_exists('Demo'))
{
    $demo = new Demo();
    echo "Our class!";
}
else{
    echo "Class does not exist";
}

?>