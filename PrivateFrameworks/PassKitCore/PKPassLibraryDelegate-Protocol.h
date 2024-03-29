//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassLibraryDelegate_Protocol_h
#define PKPassLibraryDelegate_Protocol_h
@import Foundation;

@protocol PKPassLibraryDelegate <NSObject>
@optional
/* instance methods */
- (void)passLibraryReceivedInterruption;
- (void)passLibrary:(id)library receivedUpdatedCatalog:(id)catalog passes:(id)passes;
- (void)passLibrary:(id)library receivedUpdatedCatalog:(id)catalog passes:(id)passes states:(id)states;
- (void)contactlessInterfaceDidPresentFromSource:(long long)source;
- (void)contactlessInterfaceDidDismissFromSource:(long long)source;
- (void)vehicleConnectionDidUpdateConnectionState:(long long)state;
- (void)vehicleConnectionDidRecievePassthroughData:(id)data;
- (void)issuerBindingAuthenticationOccured;
@end

#endif /* PKPassLibraryDelegate_Protocol_h */
