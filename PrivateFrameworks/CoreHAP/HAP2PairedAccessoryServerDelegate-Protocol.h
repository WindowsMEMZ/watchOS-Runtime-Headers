//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2PairedAccessoryServerDelegate_Protocol_h
#define HAP2PairedAccessoryServerDelegate_Protocol_h
@import Foundation;

@protocol HAP2PairedAccessoryServerDelegate <HAP2AccessoryServerDelegate>
@optional
/* instance methods */
- (void)accessoryServerDidBecomeUnpaired:(id)unpaired;
- (void)accessoryServerDidUpdateAccessories:(id)accessories;
- (void)accessoryServer:(id)server didFailToUpdateAccessoriesWithError:(id)error;
@end

#endif /* HAP2PairedAccessoryServerDelegate_Protocol_h */
