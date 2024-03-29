//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKFetchArchivedRecordsOptions_h
#define CKFetchArchivedRecordsOptions_h
@import Foundation;

#include "CKServerChangeToken.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CKFetchArchivedRecordsOptions : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;

/* class methods */
+ (id)new;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithPreviousServerChangeToken:(id)token;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CKFetchArchivedRecordsOptions_h */
