//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REActivityTracker_h
#define REActivityTracker_h
@import Foundation;

#include "REActivityTrackerDelegate-Protocol.h"

@class NSCountedSet, NSMapTable, NSSet;

@interface REActivityTracker : NSObject {
  /* instance variables */
  struct { unsigned int x :1 implementsBeginActivity; unsigned int x :1 implementsEndActivity; unsigned int x :1 implementsBeginActivityForObject; unsigned int x :1 implementsEndActivityForObject; } delegateCallbacks;
  NSCountedSet *_activities;
  NSMapTable *_activitiesByObject;
}

@property (readonly, weak, nonatomic) NSObject<REActivityTrackerDelegate> *delegate;
@property (readonly, nonatomic) NSSet *outstandingActivities;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (BOOL)trackingObject:(id)object;
- (void)trackObject:(id)object;
- (void)withdrawObject:(id)object;
- (void)beginActivity:(id)activity forObject:(id)object;
- (void)endActivity:(id)activity forObject:(id)object;
- (id)outstandingActivitiesForObject:(id)object;
@end

#endif /* REActivityTracker_h */
