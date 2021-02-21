import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


@WebServlet("/review")
public class ReviewServlet extends HttpServlet {

	//<script>alert(\'Hello From XSS\')</script>
	//<script type="text/javascript">window.location.href = "http://localhost:8080/hackme"</script>

	public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {
		System.out.println("GET request received");
		List<Review> reviewList = fetchAllReviews();
		
		System.out.println("Size : " + reviewList.size());
		
		request.setAttribute("reviewList", reviewList);
		request.getRequestDispatcher("/ReviewPage.jsp").forward(request, response);
	}

	public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException {
		System.out.println("POST request received " + request.getParameter("review") + " " + request.getParameter("movie"));
		addReview(new Review(request.getParameter("review"),request.getParameter("movie")));
		response.sendRedirect("/Mini/review");
	}

//	public void init() {
//		// 1. Load JDBC driver
//		try {
//			Class.forName("com.mysql.cj.jdbc.Driver");
//		} catch (ClassNotFoundException e) {
//			e.printStackTrace();
//		}
//	}

	public void addReview(Review review) {
//		String timeZoneOption = "?useTimezone=true&serverTimezone=UTC";
		String url = "jdbc:mysql://localhost:3306/moviesdb";
		String dbUsername = "user";
		String dbPassword = "pass";
		String query = "INSERT INTO reviews(review,movie) VALUES ('" + review.getReview() + "', '"
				+ review.getMovieName() + "')";

		try {
			
			Class.forName("com.mysql.cj.jdbc.Driver");

			// 2. Create a connection
			Connection con = DriverManager.getConnection(url, dbUsername, dbPassword);

			// 3. Create a statement
			Statement st = con.createStatement();

			System.out.println(query);

			// 4. Execute Update
			st.executeUpdate(query);

			// 5. Close all connections
			st.close();
			con.close();
		} catch (SQLException e) {
			System.out.println(e.toString());
		} catch (Exception e) {
			System.out.println(e.toString());
		}

	}

	public List<Review> fetchAllReviews() {
//		String timeZoneOption = "?useTimezone=true&serverTimezone=UTC";
		String url = "jdbc:mysql://localhost:3306/moviesdb";
		String dbUsername = "user";
		String dbPassword = "pass";
		String query = "SELECT * FROM reviews";

		List<Review> reviewList = new ArrayList<Review>();

		try {

			Class.forName("com.mysql.cj.jdbc.Driver");
			// 2. Create a connection
			Connection con = DriverManager.getConnection(url, dbUsername, dbPassword);

			// 3. Create a statement
			Statement st = con.createStatement();

			// 4. Create a ResultSet
			ResultSet rs = st.executeQuery(query);

			System.out.println(query);

			while (rs.next()) {
				Review review = new Review(rs.getString(1), rs.getString(2));
				reviewList.add(review);
				System.out.println(rs.getString(1) + "  " + rs.getString(2));
			}

			// 5. Close all connections
			rs.close();
			st.close();
			con.close();
		} catch (SQLException e) {
			System.out.println(e.toString());
		} catch (Exception e) {
			System.out.println(e.toString());
		}

		return reviewList;
	}
}