//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDRemoteServiceAppConfigurationProtocol_Protocol_h
#define DNDRemoteServiceAppConfigurationProtocol_Protocol_h
@import Foundation;

@protocol DNDRemoteServiceAppConfigurationProtocol <NSObject>
/* instance methods */
- (void)setAppConfigurationPredicate:(id)predicate forActionIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAppConfigurationPredicateForActionIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setAppConfigurationTargetContentIdentifierPrefix:(id)prefix forActionIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setAppAction:(id)action forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)clearAppActionWithIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAppActionsForModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setSystemAction:(id)action forModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)clearSystemActionWithIdentifier:(id)identifier forModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getSystemActionsForModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
@end

#endif /* DNDRemoteServiceAppConfigurationProtocol_Protocol_h */
