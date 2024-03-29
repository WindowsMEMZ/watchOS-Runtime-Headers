//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountStatementMetadataItem_h
#define PKAccountStatementMetadataItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface PKAccountStatementMetadataItem : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long accountEventType;
@property (copy, nonatomic) NSString *originatorAltDSID;
@property (copy, nonatomic) NSString *zoneName;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL hasBeenProcessed;
@property (nonatomic) long long processedAttemptCount;
@property (copy, nonatomic) NSDate *lastProcessedDate;
@property (nonatomic) NSDate *lastReportDate;
@property (nonatomic) long long reportCount;
@property (nonatomic) unsigned long long error;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKAccountStatementMetadataItem_h */
