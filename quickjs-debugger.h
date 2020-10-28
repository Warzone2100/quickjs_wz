/*
 * QuickJS Debugging Extensions
 *
 * Copyright (c) 2020 Koushik Dutta
 * Copyright (c) 2020 Warzone 2100 Project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef QUICKJS_DEBUG_EXTENSIONS_H
#define QUICKJS_DEBUG_EXTENSIONS_H

#include <quickjs.h>

#ifdef __cplusplus
extern "C" {
#endif

JSValue js_debugger_get_current_funcObject(JSContext *ctx);
JSValue js_debugger_get_caller_funcObject(JSContext *ctx);
JSValue js_debugger_get_caller_name(JSContext *ctx);
JSValue js_debugger_build_backtrace(JSContext *ctx, const uint8_t *cur_pc);

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* QUICKJS_DEBUG_EXTENSIONS_H */
