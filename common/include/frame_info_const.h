/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FRAME_INFO_CONST_H
#define FRAME_INFO_CONST_H

namespace OHOS {
namespace RME {

enum class FrameEvent {
    FLUSH_ANIMATION,
    FLUSH_BUILD,
    FLUSH_LAYOUT,
    FLUSH_RENDER,
    FLUSH_RENDER_FINISH, // to add, do not realize
    PROCESS_POST_FLUSH,
    PROCESS_COMMANDS,
    ANIMATE,
    RENDER,
    SEND_COMMANDS,
    EVENT_SET_PARAM,
    EVENT_RTG_ENABLE,
    EVENT_BUFFER_COUNT,
    UNKNOWN,
};

enum class EventState {
    EVENT_ENTER,
    EVENT_CONSUMED,
    EVENT_EXIT,
    ENABLE,
    DISABLE,
};

enum class SceneEvent {
    SCENE_INVALID = 0,
    VIDEO,
    SLIDE,
    GAME,
    CLICK,
    SCENE_MAX,
};

} // namespace RME
} // namespace OHOS

#endif
