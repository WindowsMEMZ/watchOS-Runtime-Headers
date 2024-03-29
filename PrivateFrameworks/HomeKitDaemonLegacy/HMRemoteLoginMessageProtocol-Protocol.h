//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMRemoteLoginMessageProtocol_Protocol_h
#define HMRemoteLoginMessageProtocol_Protocol_h
@import Foundation;

@protocol HMRemoteLoginMessageProtocol <NSObject, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, copy, nonatomic) NSString *xpcMessageName;
@property (readonly, nonatomic) NSDictionary *messagePayload;

/* class methods */
+ (id)objWithDict:(id)dict;
+ (id)objWithMessage:(id)message;
+ (id)messageName;
+ (id)xpcMessageName;
@end

#endif /* HMRemoteLoginMessageProtocol_Protocol_h */
