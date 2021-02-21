

import java.io.IOException;
import java.sql.*;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class LoginServlet
 */
@WebServlet("/login")

public class LoginServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public LoginServlet() {
        super();
        
        System.out.println("Login Servlet");
        
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		System.out.println("Get request received ");
		request.getRequestDispatcher("/LoginPage.jsp").forward(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		System.out.println("POST request received " + request.getParameter("username") + request.getParameter("password"));
		
		System.out.println("post req made");
		User user = new User(request.getParameter("username"), request.getParameter("password"));
		
		if (authenticate(user)) {
			System.out.println("Aunthenticated");
			request.getRequestDispatcher("/SearchPage.jsp").forward(request, response);
		} else {
			request.setAttribute("errorMessage", "Invalid Credentials");
			request.getRequestDispatcher("/LoginPage.jsp").forward(request, response);
		}
	}
	
	public boolean authenticate(User user) {

		String url = "jdbc:mysql://localhost:3306/moviesdb";
		String dbUsername = "user";
		String dbPassword = "pass";
		String query = "SELECT * FROM users WHERE username = '" + user.getUsername() + "' AND password='"
						+ user.getPassword() + "'";

		// pass' OR '1' = '1
		
		try {
			
			Class.forName("com.mysql.cj.jdbc.Driver");
			
			// 2. Create a connection
			Connection con =  DriverManager.getConnection(url, dbUsername, dbPassword);
			System.out.println("Database connected");
			// 3. Create a statement
			Statement st = con.createStatement();

			// 4. Create a ResultSet
			ResultSet rs = st.executeQuery(query);

			System.out.println(query);

			if (rs.next()) {
				// 5. Close all connections
				rs.close();
				st.close();
				con.close();

				return true;
			}

			// 5. Close all connections
			rs.close();
			st.close();
			con.close();

			return false;
		} catch (SQLException e) {
			System.out.println(e.toString());
		} catch (Exception e) {
			System.out.println(e.toString());
		}
		return false;
	}
}
