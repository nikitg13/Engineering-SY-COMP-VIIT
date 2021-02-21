<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>

<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Comment JSP Page</title>
</head>
<body>
	<div class="container">
		<div align="right"><a href="/Mini/search">Goto Movie Search</a></div>
		<div align="right"><a href="/Mini/login">Logout</a> <br></div>
		<h2>All Reviews</h2>
		<c:if test="${not empty reviewList}">
		
			<table class="table table-bordered">
				<tr>
					<th>Review</th>
					<th>Name</th>
				</tr>
				<c:forEach items="${reviewList}" var="review">
					<tr>
						<td>${review.getReview()}</td>
						<td>${review.getMovieName()}</td>
					</tr>
				</c:forEach>
			</table>
		</c:if>
	
		<br>
		<form action="/Mini/review" method="post">
			<h2>New Review</h2>
			<input type="text" name="review" />
			<h2>movie</h2>
			<input type="text" name="movie" />
			 <br><br> 
			 <input type="submit" />
		</form>
	</div>


</body>
</html>