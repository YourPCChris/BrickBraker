/*
 * Christopher Bennett
 * 29/07.2024
 * Classic Brick Braker Game
*/

#include <iostream>
#include <raylib.h>


using namespace std;




class Brick
{
	public:
		float
			x = index * width,
			y = 60,
			width = GetScreenWidth() / 21,
			height = 40;
		int 	index;
		
		void hit()
		{
			//destroy brick	
		}

		void Initiate()
		{
			DrawRectangle(x, y, width, height, RED);
		}

};

class Player
{
	public:
		float
			x,
			y,
			width,
			height;
	private:
		void Inititate()
		{
			//Draws Slider in middle bottom of screen
		}

		void Left()
		{
			//Moves slider left
		}
		void Right()
		{
			//Moves slider right
		}
		void Stop()
		{
			//Stops slider at end of screen
		}
};

class Ball
{
	public:
		float
			x,
			y,
			speedX,
			speedY;
	private:
		void InitiateBall()
		{
			//Draw Ball above slider
		}
};
			

void BuildWall(Brick arr[20])
{
	for (int i=0; i < (sizeof(arr) / sizeof(Brick)) ;i++)	
	{
		Brick brick; brick.index = i;
		arr[i] = brick;
		DrawRectangle(arr[i].x, arr[i].y, arr[i].width, arr[i].height, RED);
	}
}
		


int main()
{
	cout << "We Ball!\n";
	
	InitWindow(1000, 800, "Brick Braker");
	SetWindowState(FLAG_VSYNC_HINT);

	Brick OGBrick;
	Brick wall[20];

	//Main Loop
	while(!WindowShouldClose())
	{
		BeginDrawing();
			ClearBackground(BLACK);

			BuildWall(wall);
		EndDrawing();
	}
	CloseWindow();

	return 0;
}
