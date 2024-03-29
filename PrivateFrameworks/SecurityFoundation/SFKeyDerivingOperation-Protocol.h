//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef SFKeyDerivingOperation_Protocol_h
#define SFKeyDerivingOperation_Protocol_h
@import Foundation;

@protocol SFKeyDerivingOperation <NSObject, NSCopying, NSSecureCoding>
/* class methods */
+ (long long)keySource;
/* instance methods */
- (id)deriveKeyWithSpecifier:(id)specifier fromKeySource:(id)source error:(id *)error;
@end

#endif /* SFKeyDerivingOperation_Protocol_h */
