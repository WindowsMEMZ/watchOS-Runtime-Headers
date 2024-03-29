//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFSiriActivationContextMutating_Protocol_h
#define AFSiriActivationContextMutating_Protocol_h
@import Foundation;

@protocol AFSiriActivationContextMutating <NSObject>
/* instance methods */
- (void)setTimestamp:(unsigned long long)timestamp;
- (void)setSource:(long long)source;
- (void)setEvent:(long long)event;
- (void)setOptions:(unsigned long long)options;
- (void)setDeviceID:(id)id;
- (void)setUserInfo:(id)info;
@end

#endif /* AFSiriActivationContextMutating_Protocol_h */
