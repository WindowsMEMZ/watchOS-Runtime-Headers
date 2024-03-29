//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSBundleODRDataForApplications_h
#define _NSBundleODRDataForApplications_h
@import Foundation;

#include "_NSBundleODRDataCommon.h"
#include "NSError.h"
#include "NSString.h"

@class NSDictionary, NSMutableSet;
@protocol OS_dispatch_group;

@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon {
  /* instance variables */
  NSDictionary *_tagToTagState;
  NSMutableSet *_extensionConnections;
  NSError *_stashedError;
  NSObject<OS_dispatch_group> *_initialStateGroup;
  NSString *_rootSandboxPath;
}

/* instance methods */
- (id)initWithBundle:(id)bundle;
- (void)dealloc;
- (id)description;
- (BOOL)assetPacksBecameAvailable:(id)available error:(id *)error;
- (BOOL)assetPacksBecameUnavailable:(id)unavailable error:(id *)error;
@end

#endif /* _NSBundleODRDataForApplications_h */
