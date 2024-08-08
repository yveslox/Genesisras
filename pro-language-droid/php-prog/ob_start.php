<?php 

function callback($buffer)
{
    return (strtoupper($buffer));
}

$result = ob_start("callback");
echo $result;
ob_end_flush();
?>