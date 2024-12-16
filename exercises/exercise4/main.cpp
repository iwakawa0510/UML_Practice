#include <stdio.h>
#include <stdbool.h>

// センサーの状態を確認する関数
bool checkSensors() {
    // 簡易的な例として、エンジンオイル、バッテリー、燃料をチェック
    bool oilOk = true;
    bool batteryOk = true;
    bool fuelOk = true;

    if (oilOk && batteryOk && fuelOk) {
        return true;
    }
    return false;
}

// エンジンを始動する関数
void startEngine() {
    printf("Engine started successfully.\n");
}

// エラーを表示する関数
void showError() {
    printf("Error: Engine cannot start due to sensor failure.\n");
}

// メイン処理
void processEngineStart(bool startButtonPressed) {
    if (startButtonPressed) {
        printf("Start button pressed. Checking sensors...\n");
        if (checkSensors()) {
            startEngine();
        } else {
            showError();
        }
    } else {
        printf("Start button not pressed.\n");
    }
}

int main() {
    // ユーザーがスタートボタンを押した場合のシミュレーション
    bool startButtonPressed = true;

    processEngineStart(startButtonPressed);
    return 0;
}
