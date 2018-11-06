<?
	if(isset($_GET["id"])){
		$id = $_GET["id"];
		//디비연결
		// select count(*) as cnt from member where id= '$id'
		// if($row["cnt"]>0) 중복
		if($id!="" && strpos($id,"abc") === false){
			//strpos 는 id 안에 특정한문자가 잇는지 
			echo "중복 아님";
			exit(0);
		}
	}
	echo "중복";
?>