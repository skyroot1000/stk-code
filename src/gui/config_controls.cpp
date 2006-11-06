//  $Id$
//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2006 SuperTuxKart-Team
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#include "config_controls.hpp"
#include "widget_set.hpp"
#include "menu_manager.hpp"

ConfigControls::ConfigControls()
{
    m_menu_id = widgetSet -> vstack(0);
    widgetSet -> label(m_menu_id, "Edit controls for which player?", GUI_LRG);

    const int VA = widgetSet -> varray(m_menu_id);
    widgetSet -> start(VA, "Player 1",  GUI_MED, 1);
    widgetSet -> state(VA, "Player 2",  GUI_MED, 2);
    widgetSet -> state(VA, "Player 3",  GUI_MED, 3);
    widgetSet -> state(VA, "Player 4",  GUI_MED, 4);

    widgetSet -> space(VA);
    widgetSet -> state(VA, "Press <ESC> to go back", GUI_SML, 5);

    widgetSet -> layout(m_menu_id, 0, 0);
}

//-----------------------------------------------------------------------------
ConfigControls::~ConfigControls()
{
    widgetSet -> delete_widget(m_menu_id) ;
}

//-----------------------------------------------------------------------------
void ConfigControls::update(float dt)
{
    widgetSet -> timer(m_menu_id, dt) ;
#if 0
    // This menu can be triggered from the game, when it is paused
    // so we have to check it and draw it as in pause
    if(widgetSet -> get_paused())
        widgetSet -> blank() ;
#endif
    widgetSet -> paint(m_menu_id) ;
}

//-----------------------------------------------------------------------------
void ConfigControls::select()
{
    switch ( widgetSet -> token (widgetSet -> click()) )
    {
    case 1: menu_manager->pushMenu(MENUID_CONFIG_P1); break;
    case 2: menu_manager->pushMenu(MENUID_CONFIG_P2); break;
    case 3: menu_manager->pushMenu(MENUID_CONFIG_P3); break;
    case 4: menu_manager->pushMenu(MENUID_CONFIG_P4); break;
    case 5: menu_manager->popMenu();                  break;
    default:                                          break;
    }
}



