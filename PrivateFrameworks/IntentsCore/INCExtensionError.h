//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INCExtensionError_h
#define INCExtensionError_h
@import Foundation;

@class NSError;

@interface INCExtensionError : NSObject

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSError *underlyingError;

/* instance methods */
- (id)initWithErrorCode:(long long)code underlyingError:(id)error;
@end

#endif /* INCExtensionError_h */
