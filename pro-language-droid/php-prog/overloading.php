<?php 

class shape{
    function __call($name_of_function,$argument)
    {
        if($name_of_function == 'area')
        {
            switch(count($argument))
            {
                case 1 :
                    return 3.14 * arguments[0];
                case 2 :
                    return $arguments[0]*$arguments[1];
                        
        }
    }
}
}

$s= new shape;

echo($s->area(2));
echo "";

echo($s->area(4,2));

?>