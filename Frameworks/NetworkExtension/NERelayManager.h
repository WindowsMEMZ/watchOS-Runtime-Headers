//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NERelayManager_h
#define NERelayManager_h
@import Foundation;

#include "NEConfiguration.h"
#include "NEPrettyDescription-Protocol.h"

@class NSArray, NSString, NSUUID;
@protocol NERelayManagerDelegate;

@interface NERelayManager : NSObject<NEPrettyDescription> {
  /* instance variables */
  BOOL _isShared;
  BOOL _hasLoaded;
  BOOL _notificationSent;
  NEConfiguration *_configuration;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (weak) NSObject<NERelayManagerDelegate> *delegate;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL fromProfile;
@property (copy) NSString *localizedDescription;
@property BOOL enabled;
@property (retain) NSArray *relays;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *excludedDomains;
@property (copy) NSArray *onDemandRules;

/* class methods */
+ (id)sharedManager;
+ (void)loadAllManagersFromPreferencesWithCompletionHandler:(id /* block */)handler;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)handler;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)handler;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)handler;
- (BOOL)isEnabled;
- (id)descriptionWithIndent:(int)indent options:(unsigned long long)options;
- (id)description;
- (BOOL)isFromProfile;
@end

#endif /* NERelayManager_h */
