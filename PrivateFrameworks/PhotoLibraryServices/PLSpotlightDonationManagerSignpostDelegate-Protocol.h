//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSpotlightDonationManagerSignpostDelegate_Protocol_h
#define PLSpotlightDonationManagerSignpostDelegate_Protocol_h
@import Foundation;

@protocol PLSpotlightDonationManagerSignpostDelegate <NSObject>
/* instance methods */
- (void)beginSignpostIntervalForOperationType:(unsigned long long)type searchableItemCount:(unsigned long long)count;
- (void)endSignpostIntervalForOperationType:(unsigned long long)type searchableItemCount:(unsigned long long)count;
@end

#endif /* PLSpotlightDonationManagerSignpostDelegate_Protocol_h */
