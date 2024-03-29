//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef VGOEMApplicationFinder_h
#define VGOEMApplicationFinder_h
@import Foundation;

#include "GEOConfigChangeListenerDelegate-Protocol.h"
#include "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#include "VGOEMApplicationFinderUpdates-Protocol.h"
#include "VGOEMApplicationFinding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface VGOEMApplicationFinder : NSObject<LSApplicationWorkspaceObserverProtocol, GEOConfigChangeListenerDelegate, VGOEMApplicationFinding> {
  /* instance variables */
  NSSet *_requiredIntents;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSSet *disabledAppIdentifiers;
@property (retain, nonatomic) NSDictionary *allowlist;
@property (retain, nonatomic) NSMutableDictionary *applications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VGOEMApplicationFinderUpdates> *delegate;

/* instance methods */
- (id)init;
- (id)_allowlistPayload;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void * x1; })key;
- (id)_applicationRecordForBundleIdentifier:(id)identifier;
- (BOOL)_addOEMApplicationForApplicationRecordIfNeeded:(id)needed;
- (BOOL)_removeOEMApplicationForBundleIdentifier:(id)identifier;
- (void)findOEMApplications;
- (void)applicationsDidInstall:(id)install;
- (void)applicationsDidUninstall:(id)uninstall;
- (void)dealloc;
@end

#endif /* VGOEMApplicationFinder_h */
