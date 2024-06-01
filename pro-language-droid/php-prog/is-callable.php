<?php 

function foo()
{
}

if(is_callable('foo'))
echo "This is callable function"."\n";
else 
echo "This is not callable function"."\n";

if(is_callable('bar'))
echo "This is callable function"."\n";
else 
echo "This is not callable function"."\n";

?>