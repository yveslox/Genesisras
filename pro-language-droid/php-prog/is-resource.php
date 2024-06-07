<?php 

$fh=fopen("demo.txt","r");

if(is_resource($fh))
{
  echo "File is open successfully...";
}
else 
echo "Wrong way to open a file";
echo "\n";


?>