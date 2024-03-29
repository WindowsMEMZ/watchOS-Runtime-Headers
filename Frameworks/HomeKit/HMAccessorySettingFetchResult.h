//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAccessorySettingFetchResult_h
#define HMAccessorySettingFetchResult_h
@import Foundation;

#include "HMFObject-Protocol.h"
#include "HMImmutableSetting.h"

@class NSArray, NSError, NSString;

@interface HMAccessorySettingFetchResult : NSObject<HMFObject>

@property (readonly) long long failureType;
@property (readonly, copy) NSString *keyPath;
@property (readonly) HMImmutableSetting *setting;
@property (readonly, copy) NSError *error;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchResultsWithKeyPaths:(id)paths failureType:(long long)type;
+ (id)shortDescription;

/* instance methods */
- (id)initWithSetting:(id)setting;
- (id)initWithKeyPath:(id)path failureType:(long long)type;
- (id)initWithKeyPath:(id)path setting:(id)setting failureType:(long long)type;
@end

#endif /* HMAccessorySettingFetchResult_h */
