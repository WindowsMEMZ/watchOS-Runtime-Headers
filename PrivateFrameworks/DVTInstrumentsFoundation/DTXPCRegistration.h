//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTXPCRegistration_h
#define DTXPCRegistration_h
@import Foundation;

@class NSString;
@protocol OS_xpc_object;

@interface DTXPCRegistration : NSObject

@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) id /* block */ oneshotHandler;
@property (retain, nonatomic) id client;
@property (retain, nonatomic) id pkHandle;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcObject;

/* instance methods */
@end

#endif /* DTXPCRegistration_h */
