/*
* Liam Ashdown
* Copyright (C) 2019
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ClientSocket.h"

int main()
{
    /// Initialize our logger
    static plog::ColorConsoleAppender<plog::TxtFormatter> consoleAppender;
    plog::init(plog::verbose, &consoleAppender);

    LOG_NONE << " ______     ______   ______     ______     ______     ______     ______   ______     __   __     ______ ";
    LOG_NONE << "/\\  ___\\   /\\__  _\\ /\\  ___\\   /\\  ___\\   /\\  == \\   /\\  ___\\   /\\__  _\\ /\\  __ \\   /\\ ' - .\\ \ / \\  ___\\     ";
    LOG_NONE << "\\ \\___  \\  \\/_/\\ \\/ \\ \\  __\\   \\ \\  __\\   \\ \\  __<   \\ \\___  \\  \\/_/\\ \\/ \\ \\ \\/\\ \\  \\ \\ \\-.  \\  \\ \\  __\\     ";
    LOG_NONE << " \\/\\_____\\    \\ \\_\\  \\ \\_____\\  \\ \\_____\\  \\ \\_\\ \\_\\  \\/\\_____\\    \\ \\_\\  \\ \\_____\\  \\ \\_\\\\'\\_\\  \\ \\_____\\   ";
    LOG_NONE << "  \\/_____/     \\/_/   \\/_____/   \\/_____/   \\/_/ /_/   \\/_____/     \\/_/   \\/_____/   \\/_/ \\/_/   \\/_____/    ";
    LOG_NONE << "                                                                    Powered by Boost & MySQL";



    sOpcode->InitializePackets();

    SteerStone::Listener<SteerStone::ClientSocket> listener("127.0.0.1", 37120, 5);


   /* uint32 realCurrTime = 0;
    uint32 realPrevTime = sHotelTimer->Tick();
    uint32 prevSleepTime = 0;

    while (!SteerStone::Hotel::StopWorld())
    {
        realCurrTime = sHotelTimer->GetServerTime();

        uint32 const& diff = sHotelTimer->Tick();

        sHotel->UpdateWorld(diff);

        realPrevTime = realCurrTime;

        // Update the world every 500 ms
        if (diff <= UPDATE_WORLD_TIMER + prevSleepTime)
        {
            prevSleepTime = UPDATE_WORLD_TIMER + prevSleepTime - diff;
            std::this_thread::sleep_for(std::chrono::milliseconds((uint32)(prevSleepTime)));
        }
        else
            prevSleepTime = 0;
    }
   
    sHotel->CleanUp();*/

    while (true)
    {

    }

    return 0;
}