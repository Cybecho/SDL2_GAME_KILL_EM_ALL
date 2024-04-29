#pragma once

#include "Include.h"

void InitGame();
void HandleEvents();
void Update();
void Render();
void ClearGame();
void Set2Music();
void Set2ReloadSound();
void RenderScore();
void RenderMagazine();
void RenderReloadButton();

extern bool g_flag_running;
extern SDL_Renderer* g_renderer;
extern Uint32 g_frame_per_sec;
extern int g_maxFireCount;