

<?php
	session_start();
	$_SESSION["bmp"] = 0;
	//set_time_limit(120);
	$port = fopen('COM3', 'w+');
	sleep(1);
	$v1 = fgets($port);
	$inteiro = (int)$v1;
	$_SESSION["bmp"]=$inteiro;
	fclose($port);
	//sleep(1);
	echo "<meta HTTP-EQUIV='refresh' CONTENT='1;URL=sensor.php'>";
?>



	