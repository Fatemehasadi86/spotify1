// #include "likedSongsRepository.h"
// #include <fstream>

// using namespace std;

// LikedSongsRepository::LikedSongsRepository()
// {

// }
// void LikedSongsRepository::loadFromFile()
// {
//     likedSongsList.clear();

//     ifstream file("likedSongs.txt");

//     if (!file.is_open())
//         return;

//     int listenerId;
//     int count;

//     while (file >> listenerId)
//     {
//         file >> count;

//         LikedSongs liked;
//         liked.listenerId = listenerId;

//         for (int i = 0; i < count; i++)
//         {
//             int songId;
//             file >> songId;

//             liked.songs.push_back(songId);
//         }

//         likedSongsList.push_back(liked);
//     }

//     file.close();
// }

// void LikedSongsRepository::saveToFile()
// {
//     ofstream file("likedSongs.txt");

//     for (int i = 0; i < likedSongsList.size(); i++)
//     {
//         file << likedSongsList[i].listenerId << endl;

//         file << likedSongsList[i].songs.size() << endl;

//         for (int j = 0; j < likedSongsList[i].songs.size(); j++)
//         {
//             file << likedSongsList[i].songs[j] << endl;
//         }
//     }

//     file.close();
// }

// void LikedSongsRepository::addSong(int listenerId, int songId)
// {
//     loadFromFile();

//     for (int i = 0; i < likedSongsList.size(); i++)
//     {
//         if (likedSongsList[i].listenerId == listenerId)
//         {
//             for (int j = 0; j < likedSongsList[i].songs.size(); j++)
//             {
//                 if (likedSongsList[i].songs[j] == songId)
//                     return;
//             }

//             likedSongsList[i].songs.push_back(songId);

//             saveToFile();

//             return;
//         }
//     }

//     LikedSongs liked;

//     liked.listenerId = listenerId;

//     liked.songs.push_back(songId);

//     likedSongsList.push_back(liked);

//     saveToFile();
// }

// void LikedSongsRepository::removeSong(int listenerId, int songId)
// {
//     loadFromFile();

//     for (int i = 0; i < likedSongsList.size(); i++)
//     {
//         if (likedSongsList[i].listenerId == listenerId)
//         {
//             for (int j = 0; j < likedSongsList[i].songs.size(); j++)
//             {
//                 if (likedSongsList[i].songs[j] == songId)
//                 {
//                     likedSongsList[i].songs.erase(
//                         likedSongsList[i].songs.begin() + j);

//                     saveToFile();

//                     return;
//                 }
//             }
//         }
//     }
// }

// bool LikedSongsRepository::isLiked(int listenerId, int songId)
// {
//     loadFromFile();

//     for (int i = 0; i < likedSongsList.size(); i++)
//     {
//         if (likedSongsList[i].listenerId == listenerId)
//         {
//             for (int j = 0; j < likedSongsList[i].songs.size(); j++)
//             {
//                 if (likedSongsList[i].songs[j] == songId)
//                     return true;
//             }
//         }
//     }

//     return false;
// }


// std::vector<int> LikedSongsRepository::getLikedSongs(int listenerId)
// {
//     loadFromFile();

//     for (int i = 0; i < likedSongsList.size(); i++)
//     {
//         if (likedSongsList[i].listenerId == listenerId)
//         {
//             return likedSongsList[i].songs;
//         }
//     }

//     return {};
// }