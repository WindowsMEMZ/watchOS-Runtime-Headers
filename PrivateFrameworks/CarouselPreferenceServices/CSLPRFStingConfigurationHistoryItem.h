//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPRFStingConfigurationHistoryItem_h
#define CSLPRFStingConfigurationHistoryItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface CSLPRFStingConfigurationHistoryItem : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *actionType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBundleID:(id)id actionType:(unsigned long long)type identifier:(id)identifier;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* CSLPRFStingConfigurationHistoryItem_h */
