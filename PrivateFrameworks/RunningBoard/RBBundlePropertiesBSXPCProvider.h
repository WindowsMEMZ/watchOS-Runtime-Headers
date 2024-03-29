//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBBundlePropertiesBSXPCProvider_h
#define RBBundlePropertiesBSXPCProvider_h
@import Foundation;

@class NSMapTable;

@interface RBBundlePropertiesBSXPCProvider : NSObject {
  /* instance variables */
  NSMapTable *_propertiesByIdentifier;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* instance methods */
- (id)init;
- (id)propertiesForIdentifier:(id)identifier;
- (void)removePropertiesForIdentifier:(id)identifier;
- (id)debugDescription;
@end

#endif /* RBBundlePropertiesBSXPCProvider_h */
