//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================
//
// Registering symbols for the script system
//
//=============================================================================

extern void RegisterAudioChannelAPI();
extern void RegisterAudioClipAPI();
extern void RegisterButtonAPI();
extern void RegisterCharacterAPI();
extern void RegisterDateTimeAPI();
extern void RegisterDialogAPI();
extern void RegisterDialogOptionsRenderingAPI();
extern void RegisterDrawingSurfaceAPI();
extern void RegisterDynamicSpriteAPI();
extern void RegisterFileAPI();
extern void RegisterGameAPI();
extern void RegisterGlobalAPI();
extern void RegisterGUIAPI();
extern void RegisterGUIControlAPI();
extern void RegisterHotspotAPI();
extern void RegisterInventoryItemAPI();
extern void RegisterInventoryWindowAPI();
extern void RegisterLabelBoxAPI();
extern void RegisterListBoxAPI();
extern void RegisterMathAPI();
extern void RegisterMouseAPI();
extern void RegisterObjectAPI();
extern void RegisterOverlayAPI();
extern void RegisterParserAPI();
extern void RegisterRegionAPI();
extern void RegisterRoomAPI();
extern void RegisterSliderAPI();
extern void RegisterSpeechAPI();
extern void RegisterStringAPI();
extern void RegisterSystemAPI();
extern void RegisterTextBoxAPI();
extern void RegisterViewFrameAPI();

extern void RegisterStaticObjects();

void setup_script_exports()
{
    RegisterAudioChannelAPI();
    RegisterAudioClipAPI();
    RegisterButtonAPI();
    RegisterCharacterAPI();
    RegisterDateTimeAPI();
    RegisterDialogAPI();
    RegisterDialogOptionsRenderingAPI();
    RegisterDrawingSurfaceAPI();
    RegisterDynamicSpriteAPI();
    RegisterFileAPI();
    RegisterGameAPI();
    RegisterGlobalAPI();
    RegisterGUIAPI();
    RegisterGUIControlAPI();
    RegisterHotspotAPI();
    RegisterInventoryItemAPI();
    RegisterInventoryWindowAPI();
    RegisterLabelBoxAPI();
    RegisterListBoxAPI();
    RegisterMathAPI();
    RegisterMouseAPI();
    RegisterObjectAPI();
    RegisterOverlayAPI();
    RegisterParserAPI();
    RegisterRegionAPI();
    RegisterRoomAPI();
    RegisterSliderAPI();
    RegisterSpeechAPI();
    RegisterStringAPI();
    RegisterSystemAPI();
    RegisterTextBoxAPI();
    RegisterViewFrameAPI();

    RegisterStaticObjects();
}