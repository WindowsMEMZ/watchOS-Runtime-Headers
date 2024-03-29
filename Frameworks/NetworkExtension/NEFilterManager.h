//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEFilterManager_h
#define NEFilterManager_h
@import Foundation;

#include "NEConfiguration.h"
#include "NEConfigurationManager.h"
#include "NEFilterProviderConfiguration.h"
#include "NEPrettyDescription-Protocol.h"
#include "NEProfileIngestionPayloadInfo.h"
#include "NEVPNConnection.h"

@class NSObject, NSString, NSUUID;
@protocol NEFilterManagerDelegate;

@interface NEFilterManager : NSObject<NEPrettyDescription> {
  /* instance variables */
  BOOL _hasLoaded;
  NEConfigurationManager *_configurationManager;
  NEVPNConnection *_connection;
  NSObject *_statusObserver;
}

@property (retain) NEConfiguration *configuration;
@property (readonly, nonatomic) NEProfileIngestionPayloadInfo *configurationPayloadInfo;
@property (readonly, nonatomic) NSUUID *identifier;
@property (weak) NSObject<NEFilterManagerDelegate> *delegate;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL isFromProfile;
@property (readonly, nonatomic) BOOL isFromMDM;
@property (copy) NSString *localizedDescription;
@property (retain) NEFilterProviderConfiguration *providerConfiguration;
@property BOOL enabled;
@property long long grade;

/* class methods */
+ (id)sharedManager;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)handler;
+ (void)loadMyFiltersFromPreferencesWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)initPrivate;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)handler;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)handler;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)handler;
- (BOOL)isEnabled;
- (id)descriptionWithIndent:(int)indent options:(unsigned long long)options;
- (id)description;
- (void)fetchStatusWithCompletionHandler:(id /* block */)handler;
@end

#endif /* NEFilterManager_h */
