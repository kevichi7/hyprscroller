#pragma once

// ------------ Field renames ------------
#define m_vPosition m_position
#define m_vRealPosition m_realPosition
#define m_vSize m_size
#define m_vRealSize m_realSize
#define m_pMonitor m_monitor
#define m_pWorkspace m_workspace
#define m_bPinned m_pinned
#define m_bNoInitialFocus m_noInitialFocus
#define m_cRealBorderColor m_realBorderColor
#define m_cRealBorderColorPrevious m_realBorderColorPrevious
#define m_fBorderFadeAnimationProgress m_borderFadeAnimationProgress
#define m_fBorderAngleAnimationProgress m_borderAngleAnimationProgress
#define m_pLastMonitor m_lastMonitor
#define m_vMonitors m_monitors
// #define vecSize m_size
// #define vecPosition m_position
// #define scale m_scale
#define m_sFullscreenState m_fullscreenState
#define m_vMatchedRules m_matchedRules
#define m_bX11DoesntWantBorders m_X11DoesntWantBorders
#define m_RenderData m_renderData
#define m_sRenderPass m_renderPass
#define m_vRenderOffset m_renderOffset
#define m_vFloatingOffset m_floatingOffset
#define m_sWindowData m_windowData
#define m_efFullscreenMode m_fullscreenMode
#define m_vRelativeCursorCoordsOnLastWarp m_relativeCursorCoordsOnLastWarp
#define currentlyDraggedWindow m_currentlyDraggedWindow
#define activeSpecialWorkspace m_activeSpecialWorkspace
#define activeWorkspace m_activeWorkspace
#define vecReservedTopLeft m_reservedTopLeft
#define vecReservedBottomRight m_reservedBottomRight
#define m_pOriginal m_original
#define ID m_id
#define xkbSTate m_xkbState
#define m_mDispatchers m_dispatchers
#define m_pLastWindow m_lastWindow
#define szRule m_rule
#define szName m_name
#define m_pForcedFocus m_forcedFocus
#define vecSize m_size
#define vecPosition m_position
#define m_bIsMapped m_isMapped
// #define scale m_scale
// #define g_pConfigManager CConfigManager
#define szName m_name
#define m_RenderData m_renderData
#define m_sRenderPass m_renderPass
#define m_pOriginal m_original
#define m_bIsFloating m_isFloating
#define m_vLastFloatingSize m_lastFloatingSize
#define m_vLastFloatingPosition m_lastFloatingPosition
#define m_bHasFullscreenWindow m_hasFullscreenWindow
#define m_iID m_id
#define m_vWindows m_windows
#define xkbState m_xkbState
#define m_fAngle m_angle

// ------------ Header moves ------------
#if __has_include(<hyprland/src/helpers/Timer.hpp>)
#include <hyprland/src/helpers/Timer.hpp>
#elif __has_include(<hyprland/src/helpers/timer/Timer.hpp>)
#include <hyprland/src/helpers/timer/Timer.hpp>
#else
// If nothing is found and you don't use Timer, stub it:
// struct CTimer {
//   void reset() {}
//   double get() { return 0.0; }
// };
#endif

// ------------ Helper shims ------------
#include <hyprutils/math/Box.hpp>
#include <hyprutils/math/Region.hpp>

inline Hyprutils::Math::CBox makeBox(const Hyprutils::Math::Vector2D &pos,
                                     const Hyprutils::Math::Vector2D &size) {
  return Hyprutils::Math::CBox(pos, size);
}

inline Hyprutils::Math::CRegion
makeRegion(const Hyprutils::Math::Vector2D &pos,
           const Hyprutils::Math::Vector2D &size) {
  return Hyprutils::Math::CRegion(makeBox(pos, size));
}
