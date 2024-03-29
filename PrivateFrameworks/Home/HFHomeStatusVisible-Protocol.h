//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFHomeStatusVisible_Protocol_h
#define HFHomeStatusVisible_Protocol_h
@import Foundation;

@protocol HFHomeStatusVisible <NSObject>

@property (readonly, nonatomic) BOOL hf_supportsHomeStatus;
@property (readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_isForcedVisibleInHomeStatus;

/* instance methods */
- (id)hf_updateIsVisibleInHomeStatus:(BOOL)status;
@end

#endif /* HFHomeStatusVisible_Protocol_h */
