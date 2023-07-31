<?php
    $num1 = $_POST['num1'];
    $num2 = $_POST['num2'];
    $op = $_POST['op'];


    switch($op){
        case 'sum' :
            $result = $num1+$num2;
            echo "Sum = $result";
            break;
        case 'sub' :
            $result = $num1-$num2;
            echo "sub = $result";
            break;
        case 'multi' :
            echo "Multi = $num1*$num2";
            break;
        case 'div' :
            echo "Division : $num1/$num2";
            break;
        default :
            echo "Invalid Operator";
            break;
    }
?>