//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBLocalSQLContextOutputBlock_h
#define HMBLocalSQLContextOutputBlock_h
@import Foundation;

#include "HMFObject.h"
#include "HMBLocalSQLContext.h"
#include "HMFLogging-Protocol.h"

@class HMFActivity, NSString;

@interface HMBLocalSQLContextOutputBlock : HMFObject<HMFLogging>

@property (weak, nonatomic) HMBLocalSQLContext *owner;
@property (nonatomic) unsigned long long blockRow;
@property (readonly, nonatomic) unsigned long long zoneRow;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) HMFActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithOwner:(id)owner identifier:(id)identifier zoneRow:(unsigned long long)row blockRow:(unsigned long long)row;
- (id)updateModelID:(id)id modelEncoding:(unsigned long long)encoding modelData:(id)data;
- (id)commit:(id)commit;
- (id)abort;
- (id)logIdentifier;
@end

#endif /* HMBLocalSQLContextOutputBlock_h */
