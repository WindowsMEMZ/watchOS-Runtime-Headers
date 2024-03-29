//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef _SFEncryptionOperation_Protocol_h
#define _SFEncryptionOperation_Protocol_h
@import Foundation;

@protocol _SFEncryptionOperation <NSObject, NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) _SFKeySpecifier *encryptionKeySpecifier;

/* instance methods */
- (id)encrypt:(id)encrypt withKey:(id)key error:(id *)error;
- (id)decrypt:(id)decrypt withKey:(id)key error:(id *)error;
@end

#endif /* _SFEncryptionOperation_Protocol_h */
