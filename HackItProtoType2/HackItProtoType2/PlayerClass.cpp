#include "stdafx.h"
#include "PlayerClass.h"


PlayerClass::PlayerClass(void)
{
	setAll(0);
}
PlayerClass::~PlayerClass(void)
{
}

//Getters
float PlayerClass:: getHacking(){ return hacking;}
float PlayerClass:: getEncryption(){return encryption;}
float PlayerClass:: getDecryption(){return decryption;}
float PlayerClass:: getIntellegence(){return intelligence;}
float PlayerClass:: getGatherIntel(){return gatherIntel;}
float PlayerClass:: getTiming(){return timing;}
float PlayerClass:: getSpeed(){return speed;}
float PlayerClass:: getPrediction(){return prediction;}
float PlayerClass:: getTracking(){return tracking;}
float PlayerClass:: getHiding(){return hiding;}
//
//Setters
void PlayerClass:: setAll(float change){hacking = encryption = decryption = intelligence = gatherIntel = timing = speed = prediction = tracking = hiding = change;}
void PlayerClass:: setHacking(float change){ hacking = change;}
void PlayerClass:: setEncryption(float change){encryption = change;}
void PlayerClass:: setDecryption(float change){decryption = change;}
void PlayerClass:: setIntellegence(float change){intelligence = change;}
void PlayerClass:: setGatherIntel(float change){gatherIntel = change;}
void PlayerClass:: setTiming(float change){timing = change;}
void PlayerClass:: setSpeed(float change){speed = change;}
void PlayerClass:: setPrediction(float change){prediction = change;}
void PlayerClass:: setTracking(float change){tracking = change;}
void PlayerClass:: setHiding(float change){hiding = change;}
//
//Edits
void PlayerClass:: editAll(float change)
{
	hacking += change;
	encryption += change;
	decryption += change;
	intelligence += change;
	gatherIntel += change;
	timing += change;
	speed += change;
	prediction += change;
	tracking += change;
	hiding += change;
}
void PlayerClass:: editHacking(float change){ hacking += change;}
void PlayerClass:: editEncryption(float change){encryption += change;}
void PlayerClass:: editDecryption(float change){decryption += change;}
void PlayerClass:: editIntellegence(float change){intelligence += change;}
void PlayerClass:: editGatherIntel(float change){gatherIntel += change;}
void PlayerClass:: editTiming(float change){timing += change;}
void PlayerClass:: editSpeed(float change){speed += change;}
void PlayerClass:: editPrediction(float change){prediction += change;}
void PlayerClass:: editTracking(float change){tracking += change;}
void PlayerClass:: editHiding(float change){hiding += change;}
//