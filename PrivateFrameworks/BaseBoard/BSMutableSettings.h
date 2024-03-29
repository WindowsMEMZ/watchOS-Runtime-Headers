//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSMutableSettings_h
#define BSMutableSettings_h
@import Foundation;

#include "BSSettings.h"
#include "BSMutableSettings-Protocol.h"

@class NSString;

@interface BSMutableSettings : BSSettings<BSMutableSettings>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setFlag:(long long)flag forSetting:(unsigned long long)setting;
- (void)setObject:(id)object forSetting:(unsigned long long)setting;
- (void)applySettings:(id)settings;
- (void)removeAllSettings;
- (BOOL)_isMutable;
@end

#endif /* BSMutableSettings_h */
