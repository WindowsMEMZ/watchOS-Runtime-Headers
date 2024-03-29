//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef SFSigningOperation_Protocol_h
#define SFSigningOperation_Protocol_h
@import Foundation;

@protocol SFSigningOperation <NSObject, NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) _SFKeySpecifier *signingKeySpecifier;

/* instance methods */
- (id)sign:(id)sign withKey:(id)key error:(id *)error;
- (id)verify:(id)verify withKey:(id)key error:(id *)error;
@end

#endif /* SFSigningOperation_Protocol_h */
