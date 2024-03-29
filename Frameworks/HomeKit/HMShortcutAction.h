//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMShortcutAction_h
#define HMShortcutAction_h
@import Foundation;

#include "HMAction.h"

@class NSData, WFHomeWorkflow;

@interface HMShortcutAction : HMAction {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSData *_shortcutData;
}

@property (readonly) WFHomeWorkflow *shortcut;

/* class methods */
+ (BOOL)isSupportedForHome:(id)home;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithUUID:(id)uuid;
- (id)initWithShortcut:(id)shortcut;
- (id)initWithDictionary:(id)dictionary home:(id)home;
- (unsigned long long)type;
- (id)shortcutData;
- (BOOL)isValidWithError:(id *)error;
- (BOOL)requiresDeviceUnlock;
- (id)_serializeForAdd;
- (BOOL)mergeFromNewObject:(id)object;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
@end

#endif /* HMShortcutAction_h */
