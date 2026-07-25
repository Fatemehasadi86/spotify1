#include "PlaybackList.h"

PlaybackList::PlaybackList()
{
    currentSong = 0;

    player = new QMediaPlayer();

    audioOutput = new QAudioOutput();

    player->setAudioOutput(audioOutput);

    audioOutput->setVolume(0.7);
}


void PlaybackList::setSongs(std::vector<Song> songs)
{
    this->songs = songs;

    currentSong = 0;
}


void PlaybackList::play()
{
    if(songs.empty())
        return;

    QString path =
        QString::fromStdString(
            songs[currentSong].getFilePath());

    player->setSource(
        QUrl::fromLocalFile(path));

    player->play();
}

void PlaybackList::setCurrentSong(int index)
{
    currentSong = index;
}

void PlaybackList::pause()
{
    player->pause();
}

void PlaybackList::next()
{
    if(currentSong >= songs.size() - 1)
        return;

    currentSong++;

    play();
}

void PlaybackList::previous()
{
    if(currentSong == 0)
        return;

    currentSong--;

    play();
}