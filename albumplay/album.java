package albumplay;
import java.util.ArrayList;

public class album {
    private String name;
    private String artist;

    private ArrayList<Song> songs;

    public album(String name,String artist,ArrayList<Song> songs) {
        this.name = name;
        this.artist = artist;
        this.songs = new ArrayList<Song>();
    }

    

}    
