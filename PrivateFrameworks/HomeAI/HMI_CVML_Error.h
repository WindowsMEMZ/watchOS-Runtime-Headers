//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 304.3.1.0.0
//
#ifndef HMI_CVML_Error_h
#define HMI_CVML_Error_h
@import Foundation;

@interface HMI_CVML_Error : NSObject
/* class methods */
+ (id)createNSErrorWithStatus:(long long)status andMessage:(id)message;
+ (id)createNSExceptionWithStatus:(long long)status andMessage:(id)message;
@end

#endif /* HMI_CVML_Error_h */
