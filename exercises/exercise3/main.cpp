#include <iostream>
#include <vector>
#include <string>

class MediaPlayer {
public:
    void playTrack(const std::string& track) {
        std::cout << "Playing: " << track << std::endl;
    }
};

class InfotainmentSystem {
public:
    std::string findTrack(const std::string& trackName) {
        if (trackName == "Favorite Song") {
            return trackName;
        }
        return "";
    }

    void processRequest(const std::string& request, MediaPlayer& player) {
        std::string track = findTrack(request);
        if (!track.empty()) {
            player.playTrack(track);
        } else {
            std::cout << "Track not found: " << request << std::endl;
        }
    }
};

int main() {
    MediaPlayer player;
    InfotainmentSystem system;

    std::vector<std::string> requests = {"Favorite Song", "Unknown Song"};
    for (const auto& request : requests) {
        std::cout << "Request: " << request << std::endl;
        system.processRequest(request, player);
    }

    return 0;
}
