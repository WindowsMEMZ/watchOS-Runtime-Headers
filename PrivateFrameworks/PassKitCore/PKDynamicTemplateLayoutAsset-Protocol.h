//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDynamicTemplateLayoutAsset_Protocol_h
#define PKDynamicTemplateLayoutAsset_Protocol_h
@import Foundation;

@protocol PKDynamicTemplateLayoutAsset <NSObject>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange;
@property (retain, nonatomic) NSDictionary *configuration;

/* class methods */
+ (id)nameToAssetsMapFromDictionaries:(id)dictionaries;
+ (id)assetKey;
@end

#endif /* PKDynamicTemplateLayoutAsset_Protocol_h */
