//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSURLSessionACAuthContext_h
#define TPSURLSessionACAuthContext_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface TPSURLSessionACAuthContext : NSObject<NSCopying>

@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *enviromentIdentifier;
@property (copy, nonatomic) NSString *interactivityMode;

/* class methods */
+ (id)defaultContext;

/* instance methods */
- (id)initWithAppIdentifier:(id)identifier enviromentIdentifier:(id)identifier interactivity:(id)interactivity;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* TPSURLSessionACAuthContext_h */
