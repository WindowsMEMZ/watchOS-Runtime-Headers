//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFServiceLikeItem_Protocol_h
#define HFServiceLikeItem_Protocol_h
@import Foundation;

@protocol HFServiceLikeItem <HFHomeKitItemProtocol, HFHomeVendor, HFServiceVendor, NSCopying, HFNamingComponentCreating>

@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;

/* instance methods */
- (id)copyWithValueSource:(id)source;
@end

#endif /* HFServiceLikeItem_Protocol_h */
