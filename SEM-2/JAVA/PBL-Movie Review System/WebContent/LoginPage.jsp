<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Login JSP Page</title>
</head>
<body>
	<div class="container">
		<h2>Login</h2>
		<br> <font color="red">${errorMessage}</font>
		<form action="/Mini/login" method="post">
			<div class="form-group">
				<label>UserName: </label> <input type="text" name="username"
					placeholder="Enter username" />
			</div>
			<div class="form-group">
				<label>Password: </label> <input type="password" name="password" placeholder="Enter password"/>
				<br><br>
				<button type="submit" class="btn btn-primary">Login</button>
			</div>
		</form>
	</div>

</body>
</html>