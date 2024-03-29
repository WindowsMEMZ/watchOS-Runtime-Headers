//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFParallaxLayerStackArchiver_h
#define PFParallaxLayerStackArchiver_h
@import Foundation;

@interface PFParallaxLayerStackArchiver : NSObject
/* class methods */
+ (void)initialize;
+ (BOOL)saveCompoundLayerStack:(id)stack toURL:(id)url options:(unsigned long long)options error:(id *)error;
+ (id)loadCompoundLayerStackFromURL:(id)url options:(unsigned long long)options error:(id *)error;
@end

#endif /* PFParallaxLayerStackArchiver_h */
