//  $Id$
//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2006 Joerg Henrichs
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

#ifndef HEADER_CREDITSMENU_H
#define HEADER_CREDITSMENU_H

#include <string>
#include <plib/fnt.h>
#include "scrolled_text.hpp"
#include "base_gui.hpp"
#include "player.hpp"


class CreditsMenu: public ScrolledText
{
protected:
    int        m_xLeft, m_xRight, m_yBottom, m_yTop;
    float      m_yPos, m_ySpeed;
    int        m_numberOfLines;
    int        m_fontSize;
    StringList m_string_list;
public:
    CreditsMenu();
    ~CreditsMenu();
};

#endif
