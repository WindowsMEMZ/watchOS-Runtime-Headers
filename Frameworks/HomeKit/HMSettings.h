//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMSettings_h
#define HMSettings_h
@import Foundation;

#include "HMSettingGroup.h"
#include "HMSettingsOwner-Protocol.h"

@protocol HMSettingsDelegate;

@interface HMSettings : NSObject

@property (readonly, weak) NSObject<HMSettingsOwner> *owner;
@property (readonly) HMSettingGroup *rootGroup;
@property (readonly) BOOL controllable;
@property (weak) NSObject<HMSettingsDelegate> *delegate;

/* instance methods */
- (id)initWithSettingsOwner:(id)owner;
- (BOOL)isControllable;
- (id)description;
- (id)longDescription;
@end

#endif /* HMSettings_h */
