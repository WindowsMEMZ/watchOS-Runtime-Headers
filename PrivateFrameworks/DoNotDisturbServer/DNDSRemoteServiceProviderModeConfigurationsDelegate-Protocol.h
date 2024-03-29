//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSRemoteServiceProviderModeConfigurationsDelegate_Protocol_h
#define DNDSRemoteServiceProviderModeConfigurationsDelegate_Protocol_h
@import Foundation;

@protocol DNDSRemoteServiceProviderModeConfigurationsDelegate <NSObject>
/* instance methods */
- (id)remoteServiceProvider:(id)provider modeConfigurationForModeIdentifier:(id)identifier withError:(id *)error;
- (id)remoteServiceProvider:(id)provider modeConfigurationsWithError:(id *)error;
- (BOOL)remoteServiceProvider:(id)provider removeModeConfigurationWithModeIdentifier:(id)identifier deletePlaceholder:(BOOL)placeholder withError:(id *)error;
- (BOOL)remoteServiceProvider:(id)provider setModeConfiguration:(id)configuration withError:(id *)error;
- (id)remoteServiceProvider:(id)provider allModesReturningError:(id *)error;
- (id)remoteServiceProvider:(id)provider availableModesReturningError:(id *)error;
- (BOOL)remoteServiceProvider:(id)provider syncModeConfigurationsReturningError:(id *)error;
- (id)remoteServiceProvider:(id)provider allowedModesForContactHandle:(id)handle withError:(id *)error;
- (id)remoteServiceProvider:(id)provider silencedModesForContactHandle:(id)handle withError:(id *)error;
- (BOOL)remoteServiceProvider:(id)provider userAvailabilityInActiveModeForContactHandle:(id)handle withError:(id *)error;
- (id)remoteServiceProvider:(id)provider publishStatusKitAvailabilityReturningError:(id *)error;
@end

#endif /* DNDSRemoteServiceProviderModeConfigurationsDelegate_Protocol_h */
