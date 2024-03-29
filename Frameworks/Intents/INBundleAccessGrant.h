//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INBundleAccessGrant_h
#define INBundleAccessGrant_h
@import Foundation;

@class NSDictionary, NSSet;

@interface INBundleAccessGrant : NSObject {
  /* instance variables */
  long long _acquireCount;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSDictionary *securityScopedURLs;
@property (readonly, nonatomic) NSSet *bundleIdentifiers;

/* instance methods */
- (id)initWithSecurityScopedURLs:(id)urls;
- (void)acquire;
- (void)relinquish;
- (void)dealloc;
@end

#endif /* INBundleAccessGrant_h */
