//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKAnonymousGuestPlayerInternal_h
#define GKAnonymousGuestPlayerInternal_h
@import Foundation;

#include "GKPlayerInternal.h"
#include "GKPlayerInternal.h"

@class NSString;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {
  /* instance variables */
  NSString *_guestIdentifier;
}

@property (retain, nonatomic) GKPlayerInternal *hostPlayerInternal;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

/* instance methods */
- (id)initWithHostPlayerInternal:(id)internal guestIdentifier:(id)identifier;
- (id)playerID;
- (BOOL)isGuestPlayer;
- (id)guestIdentifier;
- (void)setGuestIdentifier:(id)identifier;
@end

#endif /* GKAnonymousGuestPlayerInternal_h */
