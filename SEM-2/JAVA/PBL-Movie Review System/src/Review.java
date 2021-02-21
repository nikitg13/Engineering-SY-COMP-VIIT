
public class Review {
	int id;
	String review;
	String movieName;

	public Review(String comment, String movieName) {
		super();
		this.review = comment;
		this.movieName = movieName;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getReview() {
		return review;
	}

	public void setReview(String review) {
		this.review = review;
	}

	public String getMovieName() {
		return movieName;
	}

	public void setMovieName(String movieName) {
		this.movieName = movieName;
	}

}
