//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCGlobalMetadatum_h
#define BCGlobalMetadatum_h
@import Foundation;

#include "BCCloudData.h"
#include "BCCloudDataPrivacyDelegate-Protocol.h"
#include "BCGlobalMetadatum-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;

@interface BCGlobalMetadatum : BCCloudData<BCGlobalMetadatum>

@property (copy, @dynamic, nonatomic) NSString *key;
@property (copy, @dynamic, nonatomic) NSString *value;
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

/* class methods */
+ (id)propertyIDKey;

/* instance methods */
- (id)mutableCopy;
- (void)configureFromCloudData:(id)data withMergers:(id)mergers;
- (void)_configureFromMetadatum:(id)metadatum withMergers:(id)mergers;
- (BOOL)isEqualExceptForDate:(id)date ignoringEmptySalt:(BOOL)salt;
- (void)resolveConflictsFromRecord:(id)record withResolvers:(id)resolvers;
- (id)recordType;
- (id)identifier;
- (id)zoneName;
@end

#endif /* BCGlobalMetadatum_h */
