//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCloudStoreRecordFetchTask_h
#define PKCloudStoreRecordFetchTask_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCloudStoreZone.h"

@class NSDate, NSError, NSString;

@interface PKCloudStoreRecordFetchTask : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (retain, nonatomic) PKCloudStoreZone *cloudStoreZone;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long backoffLevel;
@property (copy, nonatomic) NSDate *nextPossibleFetchDate;
@property (copy, nonatomic) NSError *lastError;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithType:(unsigned long long)type;
- (id)initWithTransactionSourceIdentifier:(id)identifier type:(unsigned long long)type;
- (id)initWithCloudStoreZone:(id)zone type:(unsigned long long)type;
- (id)identifier;
- (void)startTask;
- (void)queueTask;
- (void)completeTaskWithError:(id)error;
- (BOOL)lastErrorIsSetupAssistantNotComplete;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* PKCloudStoreRecordFetchTask_h */
