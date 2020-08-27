#ifndef SPRITE
#define SPRITE
#include <GLFW/glfw3.h>
#include "Texture.hpp"
#include <iostream>
#include <string>
class Sprite
{
public:
	Sprite();
	Sprite(std::string path);
	Sprite(std::string imagepath, float, float);


	void Update();
	void Render();

	void SpeedTo(float x);
	void SpeedBy(float x);
	void MoveTo(float x, float y);
	void MoveBy(float x, float y);

	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();
	void RotateTo(float x);
	void RotateBy(float x);

	void SetScale(float x);
	void SetScale(float x,float y);

private:
	Texture texture;
	float speed;
	float xPos;
	float yPos;
	float rot;
	float xScale;
	float yScale;
};



#endif // !SPRITE



