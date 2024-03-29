//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAttachmentReference_h
#define HKAttachmentReference_h
@import Foundation;

#include "HKAttachment.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString, NSUUID;

@interface HKAttachmentReference : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *objectIdentifier;
@property (readonly, copy) HKAttachment *attachment;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSDictionary *metadata;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithIdentifier:(id)identifier objectIdentifier:(id)identifier attachment:(id)attachment creationDate:(id)date metadata:(id)metadata;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HKAttachmentReference_h */
