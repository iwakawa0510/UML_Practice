#include <iostream>
#include <string>

// MediaPlayerクラス
class MediaPlayer {
public:
    void startPlayback() {
        std::cout << "MediaPlayer: Starting playback..." << std::endl;
    }

    void sendConfirmation() {
        std::cout << "MediaPlayer: Playback started confirmation sent." << std::endl;
    }
};

// InfotainmentSystemクラス
class InfotainmentSystem {
private:
    MediaPlayer mediaPlayer;

public:
    void playRequest() {
        std::cout << "InfotainmentSystem: Received play request from user." << std::endl;
        mediaPlayer.startPlayback();
        mediaPlayer.sendConfirmation();
        sendPlaybackStarted();
    }

    void sendPlaybackStarted() {
        std::cout << "InfotainmentSystem: Notifying user that playback has started." << std::endl;
    }
};

// メイン関数
int main() {
    InfotainmentSystem infotainmentSystem;

    // ユーザーが再生要求を送信
    std::cout << "User: Requesting to play music." << std::endl;
    infotainmentSystem.playRequest();

    return 0;
}
