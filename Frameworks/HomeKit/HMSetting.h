//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMSetting_h
#define HMSetting_h
@import Foundation;

#include "HMSettingManager-Protocol.h"
#include "HMSettingValue.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface HMSetting : NSObject<NSSecureCoding>

@property (copy) NSString *keyPath;
@property long long type;
@property (weak) NSObject<HMSettingManager> *settingManager;
@property (copy) NSString *name;
@property (copy) id value;
@property (retain) Class valueClass;
@property unsigned long long properties;
@property (readonly) HMSettingValue *internalValue;
@property (readonly) BOOL writable;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSUUID *identifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithInternal;
- (id)initWithIdentifier:(id)identifier name:(id)name type:(long long)type value:(id)value properties:(unsigned long long)properties;
- (id)_initWithIdentifier:(id)identifier name:(id)name type:(long long)type value:(id)value properties:(unsigned long long)properties;
- (id)description;
- (BOOL)isWritable;
- (id)valueForUpdate:(id)update;
- (void)updateValue:(id)value completionHandler:(id /* block */)handler;
- (BOOL)isEqual:(id)equal;
- (void)merge:(id)merge;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMSetting_h */
