//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 139.203.0.0.0
//
#ifndef RTICustomDataProtocol_Protocol_h
#define RTICustomDataProtocol_Protocol_h
@import Foundation;

@protocol RTICustomDataProtocol <NSObject>

@property (retain, nonatomic) NSString *customInfoType;
@property (retain, nonatomic) NSObject<NSSecureCoding> *customInfo;

/* class methods */
+ (void)registerCustomInfoClasses:(id)classes forType:(id)type;
+ (void)unregisterCustomInfoType:(id)type;
@end

#endif /* RTICustomDataProtocol_Protocol_h */
