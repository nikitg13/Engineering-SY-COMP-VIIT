<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Search JSP Page</title>

</head>
<body>
	<div class="container">
		<div align="right"><a href="/Mini/review">Goto Reviews</a></div>
		<div align="right"><a href="/Mini/login">Logout</a> <br></div>
		<h2>Movie Search Results</h2>
		<c:if test="${not empty movieList}">

			<table class="table table-bordered">
				<tr>
					<th>Id</th>
					<th>Name</th>
					<th>Director</th>
				</tr>
				<c:forEach items="${movieList}" var="movie">
					<tr>
						<td>${movie.getId()}</td>
						<td>${movie.getName()}</td>
						<td>${movie.getDirector()}</td>
					</tr>
				</c:forEach>
			</table>
		</c:if>
		<br>
		<h2>Search for a Movie</h2>
		<form action="/Mini/search" method="get">
			<input type="text" name="movieName" /> <br>
			<br> <input type="submit" />
		</form>
	</div>
</body>
</html>