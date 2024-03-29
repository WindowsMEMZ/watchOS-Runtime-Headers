//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef _SBSSystemNotesCreateActionSettingsDescriptionProvider_h
#define _SBSSystemNotesCreateActionSettingsDescriptionProvider_h
@import Foundation;

#include "BSSettingDescriptionProvider-Protocol.h"

@class NSString;

@interface _SBSSystemNotesCreateActionSettingsDescriptionProvider : NSObject<BSSettingDescriptionProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* _SBSSystemNotesCreateActionSettingsDescriptionProvider_h */
