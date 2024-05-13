<?php


function substring($str)
{
    $len  = strlen($str);
    echo substr($str,8)."\n";
    echo substr($str,5,$len)."\n";
    echo substr($str,-5,10)."\n";
}

$str="HTML code play";
substring($str);
?>