//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef SFAccessControlEntry_Ivars_h
#define SFAccessControlEntry_Ivars_h
@import Foundation;

@class NSString;

@interface SFAccessControlEntry_Ivars : NSObject {
  /* instance variables */
  NSString *bundleID;
  struct { unsigned int x :1 isOwner; unsigned int x :1 canRead; unsigned int x :1 canWrite; } accessControlEntryFlags;
}

/* instance methods */
@end

#endif /* SFAccessControlEntry_Ivars_h */
