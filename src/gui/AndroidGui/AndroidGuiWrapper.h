#pragma once

#include "Cafe/TitleList/TitleId.h"
#include "gui/guiWrapper.h"
#include "Image.h"

void gui_startGame(TitleId titleId);


void gui_setOnGameTitleLoaded(const std::shared_ptr<class GameTitleLoadedCallback> &onGameTitleLoaded);

void gui_setOnGameIconLoaded(const std::shared_ptr<class GameIconLoadedCallback>& onGameIconLoaded);

const Image& gui_getGameIcon(TitleId titleId);

void gui_requestGameIcon(TitleId titleId);

void gui_reloadGameTitles();

void gui_createCemuDirs();

void gui_addGamePath(const fs::path& gamePath);
