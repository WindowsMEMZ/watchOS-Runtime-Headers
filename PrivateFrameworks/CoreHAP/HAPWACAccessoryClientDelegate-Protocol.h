//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPWACAccessoryClientDelegate_Protocol_h
#define HAPWACAccessoryClientDelegate_Protocol_h
@import Foundation;

@protocol HAPWACAccessoryClientDelegate 
/* instance methods */
- (void)hapWACAccessoryClient:(id)client wacProgress:(unsigned long long)progress;
- (void)hapWACAccessoryClient:(id)client setBonjourInfo:(id)info;
@end

#endif /* HAPWACAccessoryClientDelegate_Protocol_h */
