//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSContextualEventBookmark_h
#define TPSContextualEventBookmark_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface TPSContextualEventBookmark : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) unsigned int dataVersion;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDataVersion:(unsigned int)version;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* TPSContextualEventBookmark_h */
