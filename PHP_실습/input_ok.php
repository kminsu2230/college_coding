<?

function p($v)
{
	if(isset($_POST["$v"])){
	$ret = $_POST["$v"];
}
	else{
	$ret  = "값이 없음";
}
	return $ret;
}


$u_name = p("u_name");
 echo "이름 : $u_name<br/>";

$u_email = p("u_id");
echo "이메일 : $u_email<br/>";

$u_hp = p("u_hp");
echo "핸드폰 : $u_hp<br/>";


$conn=mysqli_connect("localhost","exam","exam","exam");
	mysqli_query($conn, "set names utf8");
	$sql="INSERT INTO input_test";  
	$sql.="(u_name,u_email,u_hp)";
	$sql.="VALUES";  
	$sql.= "('$u_name','$u_email','$u_hp')";
	$result=mysqli_query($conn, $sql);
	if ($result) {echo "$u_name"."님"." 등록해주셔서 감사합니다..";}
	else { echo "등록실패...";}
	mysqli_close($conn);


?>