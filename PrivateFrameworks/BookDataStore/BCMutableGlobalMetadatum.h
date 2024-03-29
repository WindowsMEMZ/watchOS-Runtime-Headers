//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCMutableGlobalMetadatum_h
#define BCMutableGlobalMetadatum_h
@import Foundation;

#include "BCMutableCloudData.h"
#include "BCCloudDataPrivacyDelegate-Protocol.h"
#include "BCGlobalMetadatum-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;

@interface BCMutableGlobalMetadatum : BCMutableCloudData<BCGlobalMetadatum>

@property (copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) long long editGeneration;
@property (readonly, nonatomic) long long syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithKey:(id)key;
- (id)initWithCloudData:(id)data;
- (id)initWithRecord:(id)record;
- (id)recordType;
- (id)identifier;
- (id)zoneName;
- (id)configuredRecordFromAttributes;
@end

#endif /* BCMutableGlobalMetadatum_h */
