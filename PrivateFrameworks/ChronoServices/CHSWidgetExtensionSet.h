//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSWidgetExtensionSet_h
#define CHSWidgetExtensionSet_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSSet;

@interface CHSWidgetExtensionSet : NSObject<NSCopying> {
  /* instance variables */
   equivalentBundleIdentifierResolver;
   iconResolver;
}

@property (nonatomic, copy) NSArray *widgetExtensionContainers;
@property (nonatomic, readonly) NSSet *allExtensions;

/* instance methods */
- (id)init;
- (id)initWithExtensions:(id)extensions equivalentBundleIdentifierResolver:(id)resolver iconResolver:(id)resolver;
- (id)widgetExtensionContainerForContainerBundleIdentifier:(id)identifier;
- (id)widgetExtensionContainerForExtensionBundleIdentifier:(id)identifier;
- (id)copyWithZone:(void *)zone;
- (id)widgetExtensionForExtensionIdentity:(id)identity;
@end

#endif /* CHSWidgetExtensionSet_h */
