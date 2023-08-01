<?php

    // $x = 28;
    function test(){
        echo "Inside Funtion : ";
        global $x,$y = 28,72;
        echo $x.$y;
        // echo "Hello, $x";
    }
    test();
    echo "<br>Outside Funtion : ";
    echo $x.$y;
    

?>