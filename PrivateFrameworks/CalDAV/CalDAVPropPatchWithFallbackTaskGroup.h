//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVPropPatchWithFallbackTaskGroup_h
#define CalDAVPropPatchWithFallbackTaskGroup_h
@import Foundation;

#include "CoreDAVTaskGroup.h"

@class CoreDAVResponseItem, NSSet, NSURL;

@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup {
  /* instance variables */
  NSURL *_url;
  NSSet *_primaryElements;
  NSSet *_fallbackElements;
}

@property (retain, nonatomic) CoreDAVResponseItem *responseItem;

/* instance methods */
- (id)initWithAccountInfoProvider:(id)provider taskManager:(id)manager primaryPropertiesToSet:(id)set fallbackPropertiesToSet:(id)set atURL:(id)url;
- (void)_proppatchAfterFailureCount:(unsigned long long)count;
- (void)startTaskGroup;
@end

#endif /* CalDAVPropPatchWithFallbackTaskGroup_h */
