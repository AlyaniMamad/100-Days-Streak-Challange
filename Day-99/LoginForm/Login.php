<?php
   
        $username = $_POST['username'];
        $password = $_POST['password'];

        if($username == $password){
            echo "LOGIN SSUCESS";
        }else{
            echo "LOGIN FAILED";
        }
    
?>