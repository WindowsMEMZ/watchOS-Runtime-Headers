//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTCarrierSpaceError_h
#define CTCarrierSpaceError_h
@import Foundation;

@interface CTCarrierSpaceError : NSObject
/* class methods */
+ (id)errorForCode:(long long)code;
+ (id)errorForCode:(long long)code withDescription:(id)description;
+ (id)errorForCode:(long long)code subdomain:(long long)subdomain subdomainError:(long long)error;
@end

#endif /* CTCarrierSpaceError_h */
