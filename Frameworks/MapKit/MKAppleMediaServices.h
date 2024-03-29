//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKAppleMediaServices_h
#define MKAppleMediaServices_h
@import Foundation;

@interface MKAppleMediaServices : NSObject
/* class methods */
+ (id)sharedInstance;
+ (id)sourceStringWithSource:(long long)source;

/* instance methods */
- (void)appleMediaServicesResultsWithIdentifiers:(id)identifiers source:(long long)source completion:(id /* block */)completion;
- (void)appleMediaServicesResultsWithIdentifiers:(id)identifiers artworkSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale type:(long long)type source:(long long)source completion:(id /* block */)completion;
- (void)appleMediaServicesResultsWithBundleIdentifiers:(id)identifiers source:(long long)source completion:(id /* block */)completion;
- (void)appleMediaServicesResultsWithBundleIdentifiers:(id)identifiers artworkSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale source:(long long)source completion:(id /* block */)completion;
- (void)appleMediaServicesResultsWithIdentifiers:(id)identifiers bundleIdentifiers:(id)identifiers artworkSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale type:(long long)type source:(long long)source completion:(id /* block */)completion;
- (void)mediaResultWithIdentifiers:(id)identifiers bundleIdentifiers:(id)identifiers artworkSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale type:(long long)type source:(long long)source completion:(id /* block */)completion;
- (long long)AMSMediaTaskTypeFromGEOAppleMediaServicesMediaType:(long long)type;
- (id)additionalParameterWithType:(long long)type;
- (id)externalRequestCounterRequestType;
- (id)externalRequestCounterRequestSubtypeWithType:(long long)type;
@end

#endif /* MKAppleMediaServices_h */
