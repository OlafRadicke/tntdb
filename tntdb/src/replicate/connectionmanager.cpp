/*
 * Copyright (C) 2011 Tommi Maekitalo
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * is provided AS IS, WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, and
 * NON-INFRINGEMENT.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

#include <tntdb/replicate/connectionmanager.h>
#include <tntdb/replicate/connection.h>
#include <tntdb/connection.h>

namespace tntdb
{
  namespace replicate
  {
    tntdb::Connection ConnectionManager::connect(const std::string& url)
    {
      return tntdb::Connection(new Connection(url.c_str()));
    }
  }
}

TNTDB_CONNECTIONMANAGER_DEFINE(replicate)
