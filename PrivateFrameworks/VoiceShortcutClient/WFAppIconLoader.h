//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAppIconLoader_h
#define WFAppIconLoader_h
@import Foundation;

@interface WFAppIconLoader : NSObject
/* class methods */
+ (void)loadIconWithBundleIdentifier:(id)identifier desiredSize:(struct CGSize { double x0; double x1; })size completionHandler:(id /* block */)handler;
@end

#endif /* WFAppIconLoader_h */
