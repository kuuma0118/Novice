#include <Novice.h>
#include"Player.h"
#include"Prodigy.h"
#include <stdio.h>
#include <iostream>
#include <cmath>

const char kWindowTitle[] = "学籍番号";


//class Enemy {
//private:
//    int positionX;
//    int positionY;
//    int velocity;
//
//
//public:
//    Enemy(int initialPositionX, int initialPositionY, int initialVelocity)
//        : positionX(initialPositionX), positionY(initialPositionY), velocity(initialVelocity){}
//
//    void updatePosition() {
//   
//        // 相手の予測位置に向かって移動
//        positionX += velocity ;
//        positionY += velocity ;
//    }
//
//    int getPositionX() const {
//        return positionX;
//    }
//
//    int getPositionY() const {
//        return positionY;
//    }
//};


// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	Player* player = new Player(0, 10, 5, 50);


	Prodigy* prodigy = new Prodigy(0, 10, 5, 5, 40,false);

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		if (player->GetposX() >= 340) 
		{
			prodigy->Flag();
		}
		
		player->Update(keys);
		prodigy->Update(keys);

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///
		player->Draw();
		prodigy->Draw();
		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
