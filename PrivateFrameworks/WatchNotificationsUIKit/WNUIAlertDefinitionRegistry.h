//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertDefinitionRegistry_h
#define WNUIAlertDefinitionRegistry_h
@import Foundation;

#include "WNUIAlertDefinitionRegistryConfiguration.h"

@class NSArray, NSMutableDictionary;

@interface WNUIAlertDefinitionRegistry : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) WNUIAlertDefinitionRegistryConfiguration *configuration;
@property (readonly, nonatomic) BOOL loaded;
@property (readonly, nonatomic) NSMutableDictionary *compatibilityDefinitions;
@property (readonly, nonatomic) NSMutableDictionary *sidecarDefinitions;
@property (readonly, nonatomic) NSMutableDictionary *applicationDefinitions;
@property (readonly, nonatomic) NSArray *appLibraryTokens;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)dealloc;
- (void)load;
- (void)_reloadApplicationLibraryAlertDefinitions;
- (void)_lock_reloadApplicationLibraryAlertDefinitions;
- (id)alertDefinitionForIdentity:(id)identity;
- (id)debugDescription;
- (BOOL)isLoaded;
@end

#endif /* WNUIAlertDefinitionRegistry_h */
