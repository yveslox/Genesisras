<?php

class pub
{
    public $tag_line ="Old text";

    function display()
    {
        
        echo $this->tag_line;
    }

    
}


$obj = new pub;
$obj->display();

?>