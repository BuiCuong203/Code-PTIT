#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct Movie {
    string genre_name;
    string release_date;
    string movie_name;
    int num_episodes;
};

int main() {
    int N, M;
    cin >> N >> M;

    map<string, string> genres;
    for (int i = 0; i < N; ++i) {
        string genre_id, genre_name;
        cin >> genre_id >> genre_name;
        genres[genre_id] = genre_name;
    }

    vector<Movie> movies;
    for (int i = 0; i < M; ++i) {
        string genre_id, release_date, movie_name;
        int num_episodes;
        cin >> genre_id >> release_date >> movie_name >> num_episodes;
        Movie movie;
        movie.genre_name = genres[genre_id];
        movie.release_date = release_date;
        movie.movie_name = movie_name;
        movie.num_episodes = num_episodes;
        movies.push_back(movie);
    }
    sort(movies.begin(), movies.end(), [](const Movie& a, const Movie& b) {
        if (a.release_date != b.release_date) {
            return a.release_date < b.release_date;
        }
        if (a.movie_name != b.movie_name) {
            return a.movie_name < b.movie_name;
        }
        return a.num_episodes > b.num_episodes;
    });

    // In danh sách các b? phim dã s?p x?p ra output
    for (const Movie& movie : movies) {
        cout << movie.genre_name << " " << movie.release_date << " "
             << movie.movie_name << " " << movie.num_episodes << endl;
    }

    return 0;
}
