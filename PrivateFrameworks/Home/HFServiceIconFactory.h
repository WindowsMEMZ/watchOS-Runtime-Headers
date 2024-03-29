//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFServiceIconFactory_h
#define HFServiceIconFactory_h
@import Foundation;

@interface HFServiceIconFactory : NSObject
/* class methods */
+ (id)_multiSubtypeIconSetForServiceType:(id)type serviceSubtype:(id)subtype;
+ (id)_iconSetForServiceType:(id)type serviceSubtype:(id)subtype fallbackToPlaceholderIcon:(BOOL)icon;
+ (id)defaultSymbolIconIdentifierForServiceType:(id)type;
+ (id)defaultIconDescriptorForService:(id)service;
+ (id)defaultIconDescriptorForServiceType:(id)type serviceSubtype:(id)subtype;
+ (id)_defaultIconDescriptorForServiceType:(id)type serviceSubtype:(id)subtype fallbackToPlaceholderIcon:(BOOL)icon;
+ (id)iconDescriptorWithIdentifier:(id)identifier forService:(id)service;
+ (id)iconDescriptorWithIdentifier:(id)identifier forServiceType:(id)type serviceSubtype:(id)subtype;
+ (id)allIconDescriptorsForService:(id)service;
+ (id)allIconDescriptorsForServiceType:(id)type serviceSubtype:(id)subtype;
+ (id)overrideIconDescriptorForMultiServiceAccessory:(id)accessory iconDescriptor:(id)descriptor;
+ (id)iconDescriptorForAccessory:(id)accessory;
+ (id)iconDescriptorForAccessoryCategory:(id)category;
+ (id)iconDescriptorForAccessoryCategoryOrServiceType:(id)type;
+ (id)iconModifiersForService:(id)service;
+ (id)_replacementIdentifierForIconIdentifier:(id)identifier;
+ (id)displayIconDescriptorFromIconDescriptor:(id)descriptor symbolName:(id)name;
@end

#endif /* HFServiceIconFactory_h */
