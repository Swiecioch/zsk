<?php
  // wersja PHP 7.4.9
  echo PHP_VERSION,'<br>';
  // echo phpinfo();

  // echo 'a','b','c';
  // echo 'a'.'b'.'c';

  $potega = 2 ** 10;
  echo "$potega<br>"; // 1024

  // operatory bitowe
  // and &, or |, not ~, xor ^, <<, >>

  $x =  0b1010;
  echo "$x<br>"; // 10

  $x = $x << 1;
  echo "$x<br>"; // 10100 => 20

  $x = $x >> 3;
  echo "$x<br>"; // 10 => 2

  // porównanie
  $x = -10;
  $y = 1;
  echo $x <=> $y;
  $result = $x <=> $y;
  echo $result;

 ?>
