#include "stdafx.h"
#include "GameManager.h"
#include "Enemy.h"
#include <fStream>

GameManager& GameManager::Instance()
{
	static GameManager instance;

	return instance;
}

GameManager::GameManager()
{
}

GameManager::~GameManager()
{
}

const char* Arrowtrap = "Arrowtrap";
const char* Blackhole = "Blackhole";
const char* Boost = "Boost";
const char* Health = "Health";
const char* Key = "Key";
const char* Spike = "Spike";
const char* Player = "Player";

void GameManager::BeginPlay()
{
	
	// Load in the images from the Images folder. Give them unique names to reference later.
		
	GameFrameworkInstance.LoadImageResource(AppConfigInstance.GetResourcePath("Images/Arrowtrap.png"), Arrowtrap);
	
	
	GameFrameworkInstance.LoadImageResource(AppConfigInstance.GetResourcePath("Images/Blackhole.png"), Blackhole);
	
	
	GameFrameworkInstance.LoadImageResource(AppConfigInstance.GetResourcePath("Images/Boost.png"), Boost);
	
	
	GameFrameworkInstance.LoadImageResource(AppConfigInstance.GetResourcePath("Images/Health.png"), Health);

	
	GameFrameworkInstance.LoadImageResource(AppConfigInstance.GetResourcePath("Images/Key.png"), Key);

	
	GameFrameworkInstance.LoadImageResource(AppConfigInstance.GetResourcePath("Images/Spike.png"), Spike);


	GameFrameworkInstance.LoadImageResource(AppConfigInstance.GetResourcePath("Images/Player.png"), Player);

	Enemy* object1 = new Enemy();
	object1->location = Vector2i(100, 100);
	object1->name = "Object1";
	object1->rotation = 1.0f;
	object1->xScale = 2.0f;
	object1->yScale = 3.0f;
	object1->imageName = "Image1";
	object1->health = 100;

	std::ofstream outputFile("objects.csv");
	object1->SaveAsText(outputFile);
	outputFile.close();

	std::ifstream inputFile("objects.csv");
	Enemy object2;
	object2.LoadFromText(inputFile);

	delete object1;


}

void GameManager::EndPlay()
{

}

void GameManager::Update(double deltaTime)
{

}

//Loads the images 
void GameManager::Render(Gdiplus::Graphics& canvas, const CRect& clientRect)
{
	////////////////////////////////////////////////////////////////////////////////
	// Begin example code

	// Save the current transformation of the scene
	Gdiplus::Matrix transform;
	canvas.GetTransform(&transform);

	canvas.ScaleTransform(0.5f, 0.5f);
	canvas.RotateTransform(0.0f);
	canvas.TranslateTransform(200.0f, 200.0f);

	// Load the image files, give them a random location 

	ImageWrapper* arrowtrap = GameFrameworkInstance.GetLoadedImage(Arrowtrap);
	GameFrameworkInstance.DrawImage(canvas, Vector2i(800, 100), arrowtrap);

	ImageWrapper* blackhole = GameFrameworkInstance.GetLoadedImage(Blackhole);
	GameFrameworkInstance.DrawImage(canvas, Vector2i(500, 300), blackhole);

	ImageWrapper* boost = GameFrameworkInstance.GetLoadedImage(Boost);
	GameFrameworkInstance.DrawImage(canvas, Vector2i(150, 550), boost);

	ImageWrapper* health = GameFrameworkInstance.GetLoadedImage(Health);
	GameFrameworkInstance.DrawImage(canvas, Vector2i(1000, 500), health);

	ImageWrapper* key = GameFrameworkInstance.GetLoadedImage(Key);
	GameFrameworkInstance.DrawImage(canvas, Vector2i(350, 400), key);

	ImageWrapper* spike = GameFrameworkInstance.GetLoadedImage(Spike);
	GameFrameworkInstance.DrawImage(canvas, Vector2i(700, 550), spike);

	ImageWrapper* player = GameFrameworkInstance.GetLoadedImage(Player);
	GameFrameworkInstance.DrawImage(canvas, Vector2i(50, 550), player);


	// Restore the transformation of the scene
	canvas.SetTransform(&transform);

	// End example code
	////////////////////////////////////////////////////////////////////////////////
}
