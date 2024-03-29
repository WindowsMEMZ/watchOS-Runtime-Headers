//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.200.1.0.0
//
#ifndef MPUFontDescriptorCache_h
#define MPUFontDescriptorCache_h
@import Foundation;

#include "MPUMutableFontDescriptor.h"

@class NSMutableArray;

@interface MPUFontDescriptorCache : NSObject {
  /* instance variables */
  MPUMutableFontDescriptor *_reusableMutableFontDescriptor;
  unsigned long long _maximumCapacity;
  NSMutableArray *_orderedCachedFontDescriptors;
}

/* class methods */
+ (id)sharedFontDescriptorCache;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)cachedImmutableFontDescriptorForConfigurationBlock:(id /* block */)block;
- (id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)descriptor;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)notification;
- (id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)descriptor;
@end

#endif /* MPUFontDescriptorCache_h */
