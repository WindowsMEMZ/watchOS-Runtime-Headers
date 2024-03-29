//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDHomeManagerUtilities_h
#define _CDHomeManagerUtilities_h
@import Foundation;

#include "HMHomeManagerDelegate-Protocol.h"

@class CNContactStore, HMHomeManager, NSString;

@interface _CDHomeManagerUtilities : NSObject<HMHomeManagerDelegate> {
  /* instance variables */
  HMHomeManager *_homeManager;
  CNContactStore *_contactStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)contactsInHome;
- (id)contactKeysToFetch;
@end

#endif /* _CDHomeManagerUtilities_h */
