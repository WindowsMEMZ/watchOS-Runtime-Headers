//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMFileAttributes_h
#define BMFileAttributes_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BMFileAttributes : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long protectionClass;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *filename;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPath:(id)path mode:(unsigned long long)mode protectionClass:(unsigned long long)class;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* BMFileAttributes_h */
