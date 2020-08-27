#include "Sprite.hpp"
#include "Engine.hpp"

Sprite::Sprite()
{
	xPos = 0;
	yPos = 0;
	rot = 0;
	speed = 100;
	texture = Texture();
}

Sprite::Sprite(std::string path)
{
	texture = Texture(path);
	xPos = 0;
	yPos = 0;
	rot = 0;
	speed = 100;
}

Sprite::Sprite(std::string imagepath, float _xPos, float _yPos)
{
	texture = Texture(imagepath);
	xPos = _xPos;
	yPos = _yPos;
	rot = 0;
	speed = 100;
}

void Sprite::Update()
{
	
}

void Sprite::Render()
{
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture.Getid());
	glLoadIdentity();

	glTranslatef(xPos, yPos, 0);
	glRotatef(rot,0, 0, 1);
	glScalef(xScale, yScale, 1);
	//glRotatef(180, 1, 0, 0);
	glColor4f(1, 1, 1, 1);
	
	//glTranslatef(0 - 1, 0 - yPos - yPos - yPos - yPos - yPos - yPos, 0);
	glBegin(GL_QUADS);
	
	glTexCoord2f(0,0);		glVertex2f(0, 0);
	glTexCoord2f(1, 0);		glVertex2f(texture.Getwidth(),0);
	glTexCoord2f(1, 1);		glVertex2f(texture.Getwidth(),texture.Getheight());
	glTexCoord2f(0, 1);		glVertex2f(0,texture.Getheight());
	
	
	glEnd();
	
	glDisable(GL_TEXTURE_2D);
}

void Sprite::SpeedTo(float x)
{
	speed =x;
}

void Sprite::SpeedBy(float x)
{
	speed += x;
}

void Sprite::MoveTo(float x, float y)
{
	xPos = x;
	yPos = y;
}

void Sprite::MoveBy(float x, float y)
{
	xPos += float(x*Engine::Getdt());
	yPos += float(y * Engine::Getdt());
}

void Sprite::MoveLeft()
{
	xPos -= (speed * Engine::Getdt());
}

void Sprite::MoveRight()
{
	xPos+= (speed * Engine::Getdt());
}

void Sprite::MoveUp()
{
	yPos += (speed * Engine::Getdt());
}

void Sprite::MoveDown()
{
	yPos -= (speed * Engine::Getdt());
}

void Sprite::RotateTo(float x)
{
	rot = x;
}
void Sprite::RotateBy(float x)
{
	rot += (x* Engine::Getdt());
}

void Sprite::SetScale(float x)
{
	xScale = x;
	yScale = x;
}

void Sprite::SetScale(float x, float y)
{
	xScale = x;
	yScale = y;
}
