//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDRemoteServiceClientModeSelectionProtocol_Protocol_h
#define DNDRemoteServiceClientModeSelectionProtocol_Protocol_h
@import Foundation;

@protocol DNDRemoteServiceClientModeSelectionProtocol <NSObject>
/* instance methods */
- (void)deliverActiveModeAssertion:(id)assertion stateUpdate:(id)update clientIdentifiers:(id)identifiers;
- (void)deliverAllModes:(id)modes;
- (void)deliverAvailableModes:(id)modes;
- (void)signalAppConfigurationContextUpdateForModeIdentifier:(id)identifier;
@end

#endif /* DNDRemoteServiceClientModeSelectionProtocol_Protocol_h */
