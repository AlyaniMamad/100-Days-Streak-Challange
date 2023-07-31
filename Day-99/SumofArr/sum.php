<?php
    $arr1 = array($_POST['no1'],$_POST['no2'],$_POST['no3'],$_POST['no4'],$_POST['no5']);
    $arr2 = array($_POST['no6'],$_POST['no7'],$_POST['no8'],$_POST['no9'],$_POST['no10']);

    $sum = array();

    for($i=0;$i<count($arr1);$i++){
        $sum[] = $arr1[$i]+$arr2[$i];
    }

    echo "Array-1 : ".$arr1;
    echo "Array-2 : ".$arr2;

    print_r($sum);
?>