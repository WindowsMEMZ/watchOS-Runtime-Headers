//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetSetInfoInstance_h
#define MAAutoAssetSetInfoInstance_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString, NSUUID;

@interface MAAutoAssetSetInfoInstance : NSObject<NSSecureCoding>

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *autoAssetSetClientName;
@property (readonly, retain, nonatomic) NSString *clientProcessName;
@property (readonly, nonatomic) long long clientProcessID;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) NSString *atomicInstance;
@property (readonly, retain, nonatomic) NSArray *autoAssetEntries;
@property (readonly, retain, nonatomic) NSArray *entriesWhenTargeting;
@property (readonly, retain, nonatomic) NSUUID *frameworkInstanceUUID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initUsingClientDomain:(id)domain forClientName:(id)name withProcessName:(id)name withProcessID:(long long)id forAssetSetIdentifier:(id)identifier forAtomicInstance:(id)instance comprisedOfEntries:(id)entries asEntriesWhenTargeting:(id)targeting associatingFrameworkUUID:(id)uuid;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)summary;
@end

#endif /* MAAutoAssetSetInfoInstance_h */
