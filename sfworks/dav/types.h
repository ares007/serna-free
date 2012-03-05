// 
// Copyright(c) 2009 Syntext, Inc. All Rights Reserved.
// Contact: info@syntext.com, http://www.syntext.com
// 
// This file is part of Syntext Serna XML Editor.
// 
// COMMERCIAL USAGE
// Licensees holding valid Syntext Serna commercial licenses may use this file
// in accordance with the Syntext Serna Commercial License Agreement provided
// with the software, or, alternatively, in accorance with the terms contained
// in a written agreement between you and Syntext, Inc.
// 
// GNU GENERAL PUBLIC LICENSE USAGE
// Alternatively, this file may be used under the terms of the GNU General 
// Public License versions 2.0 or 3.0 as published by the Free Software 
// Foundation and appearing in the file LICENSE.GPL included in the packaging 
// of this file. In addition, as a special exception, Syntext, Inc. gives you
// certain additional rights, which are described in the Syntext, Inc. GPL 
// Exception for Syntext Serna Free Edition, included in the file 
// GPL_EXCEPTION.txt in this package.
// 
// You should have received a copy of appropriate licenses along with this 
// package. If not, see <http://www.syntext.com/legal/>. If you are unsure
// which license is appropriate for your use, please contact the sales 
// department at sales@syntext.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
// 
// Copyright (c) 2004 Syntext Inc.
//
// This is a copyrighted commercial software.
// Please see COPYRIGHT file for details.

#ifndef DAV_TYPES_H_
#define DAV_TYPES_H_

#include "dav/dav_defs.h"
#include "common/Url.h"

namespace Dav {

typedef Common::Url  Url;
typedef const Common::Url& UrlRef;
typedef const Common::String& UrlStringRef;

enum OpenFlags {
    DAV_OPEN_READ   = 01, // open URL for reading
    DAV_OPEN_WRITE  = 02, // open URL for writing
    DAV_OPEN_MKPATH = 04, // create path if necessary
    DAV_OPEN_CACHE  = 010 // precache filesystem-local copy, if necessary
};

enum OpStatus {
    DAV_RESULT_OK = 0,
    DAV_RESULT_BAD_URL,
    DAV_RESULT_CONNECT_FAILED,
    DAV_RESULT_AUTH_FAILED,
    DAV_RESULT_BAD_PROTOCOL,
    DAV_RESULT_IO_ERROR,
    DAV_RESULT_CANNOT_OPEN,
    DAV_RESULT_LOCKED
};

enum LockOp {
    DAV_LOCK,
    DAV_UNLOCK,
    DAV_CHECK_LOCK,
    DAV_CHECK_LOCKSTORE
};

} // namespace Dav

#endif // DAV_TYPES_H_

