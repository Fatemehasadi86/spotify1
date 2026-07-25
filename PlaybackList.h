#include <QMediaPlayer>
#include <QAudioOutput>
#include <vector>
#include "Song.h"

class PlaybackList
{
public:
    PlaybackList();

    void setSongs(std::vector<Song> songs);

    void setCurrentSong(int index);

    void play();

    void pause();

    void next();

    void previous();

private:
    std::vector<Song> songs;

    int currentSong;

    QMediaPlayer *player;

    QAudioOutput *audioOutput;
};