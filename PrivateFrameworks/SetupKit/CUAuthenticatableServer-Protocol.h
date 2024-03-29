//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUAuthenticatableServer_Protocol_h
#define CUAuthenticatableServer_Protocol_h
@import Foundation;

@protocol CUAuthenticatableServer <NSObject>

@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ authHidePasswordHandler;
@property (copy, nonatomic) id /* block */ authShowPasswordHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;

@end

#endif /* CUAuthenticatableServer_Protocol_h */
