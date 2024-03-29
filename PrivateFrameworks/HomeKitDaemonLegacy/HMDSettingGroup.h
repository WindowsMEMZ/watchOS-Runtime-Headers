//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSettingGroup_h
#define HMDSettingGroup_h
@import Foundation;

#include "HMDSettingGroup-Protocol.h"

@class NSArray, NSMutableSet, NSString, NSUUID;

@interface HMDSettingGroup : NSObject<HMDSettingGroup> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSMutableSet *settingsInternal;
@property (retain) NSMutableSet *groupsInternal;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;
@property (copy) NSString *keyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithModel:(id)model;
- (id)initWithIdentifier:(id)identifier parentIdentifier:(id)identifier name:(id)name groups:(id)groups settings:(id)settings;
- (void)addSetting:(id)setting;
- (void)addGroup:(id)group;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDSettingGroup_h */
