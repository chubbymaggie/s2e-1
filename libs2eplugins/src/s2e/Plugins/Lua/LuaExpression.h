///
/// Copyright (C) 2014-2015, Cyberhaven
///
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
///
/// The above copyright notice and this permission notice shall be included in all
/// copies or substantial portions of the Software.
///
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
/// SOFTWARE.
///

#ifndef _LUA_S2E_EXPRESSION_
#define _LUA_S2E_EXPRESSION_

#include <s2e/S2EExecutionState.h>

#include "Lua.h"

namespace s2e {
namespace plugins {

class LuaExpression {
private:
    klee::ref<klee::Expr> m_expr;

public:
    static const char className[];
    static Lunar<LuaExpression>::RegType methods[];

    LuaExpression(lua_State *L) : m_expr(nullptr) {
    }

    LuaExpression(klee::ref<klee::Expr> expr) : m_expr(expr) {
    }

    klee::ref<klee::Expr> get() const {
        return m_expr;
    }
};

} // namespace plugins
} // namespace s2e

#endif
