// { dg-options "-std=gnu++0x" }
// { dg-require-namedlocale "de_DE@euro" }

// 2010-03-01  Paolo Carlini  <paolo.carlini@oracle.com>

// Copyright (C) 2010-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <sstream>
#include <iomanip>
#include <testsuite_hooks.h>

void test01()
{
  bool test __attribute__((unused)) = true;

  std::locale loc_de = std::locale("de_DE@euro");

  std::wostringstream oss;
  oss.imbue(loc_de);

  const std::wstring str(L"720000000000");
  oss << std::put_money(str);

  VERIFY( oss.str() == L"7.200.000.000,00 " );
  VERIFY( oss.good() );
}

int main()
{
  test01();
  return 0;
}
