
<!DOCTYPE html>
<html>
<head>
	<meta charset = "utf-8">
	<meta http-equiv="Cache-Control" content="no-cache">
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="expires" content="0">
	<title>회원가입</title>
	<script src="/site1/jquery.js"></script><!--jQuery 를 불러옴-->
	<script type="text/javascript"> 


		function formCheck() {

			var id = "#u_id"; //id 값을 초기화(초기선언) 
			var ptn = /^[_0-9a-zA-Z-]+(\.[_0-9a-zA-Z-]+)*@[0-9a-zA-Z-]+(\.[0-9a-zA-Z-]+)*$/; //ptn 값을 초기화(초기선언) 
			var msg = "이메일 값을 제대로 입력하십시오.";
			//msg 값을 초기화(초기선언) 
			if(!check_item(id, ptn, msg)){
				return false;
			}


			id = "#u_hp";
			ptn = /^([0-9]{2,3})(-|[[:space:]])?([0-9]{4})(-|[[:space:]])?([0-9]{4})$/; 
			msg = "핸드폰 번호를 제대로 입력하세요.";
			if(!check_item(id, ptn, msg)){
				return false;
			}
		
			return true;
		}


		function check_item(id,ptn,msg) {
			var val = $(id).val();
			if(!ptn.test(val)) {//비밀번호를 불러옴
			alert(msg);
			$(id).focus();
			return false;
			}
			return true;
		}
		//ajax.get 방식 
		function email_check() {
			var id = $("#u_id").val();
			$.get( "email_check.php?id=" + id, 
			function( data ) {
 			 alert(data);
			});
		}

	</script>
</head>
<body>
<form action="input_ok.php" method="post" onsubmit="return formCheck();">
<!--onsubmit ture:실행 , false:실행 x-->
<!--아이디 입력-->
<!--span class="required" 는 그값의 값을 입력 해야함  -->
	<div class="row">
		<label for="u_name"><span class="required">* </span>이름</label>
		<input type="text" id="u_name" name="u_name" value="" / >
	</div>

	<div class="row">
		<label for="u_id"><span class="required">* </span>이메일</label>
		<input type="text" id="u_id" name="u_id" value="" / >
		<input type="button" value="중복확인" onclick ="email_check();"/>
	</div>


	<!--휴대폰 입력-->
	<div class="row">
		<label for="u_hp"><span class="required">* </span>핸드폰</label>
		<input type="text" id="u_hp" name="u_hp" value="" />

	<!--컨트롤 입력-->
	<div class = "ctrl">
		<input type="submit" value="등록" />
	</div>
</form>
</body>
</html>