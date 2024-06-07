/**************************************************************************
   Copyright (c) 2021 sewenew

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 *************************************************************************/

#ifndef SEWENEW_REDISPLUSPLUS_CXX_UTILS_H
#define SEWENEW_REDISPLUSPLUS_CXX_UTILS_H

#include <string_view>
#include <type_traits>
#include <optional>
#include <variant>

#define REDIS_PLUS_PLUS_HAS_OPTIONAL

#define REDIS_PLUS_PLUS_HAS_VARIANT

namespace sw {

namespace redis {

using StringView = std::string_view;

template <typename T>
using Optional = std::optional<T>;

template <typename ...Args>
using Variant = std::variant<Args...>;

using Monostate = std::monostate;

template <typename F, typename ...Args>
using IsInvocable = std::is_invocable<F, Args...>;

using Cursor = unsigned long long;

}

}

#endif // end SEWENEW_REDISPLUSPLUS_CXX_UTILS_H
