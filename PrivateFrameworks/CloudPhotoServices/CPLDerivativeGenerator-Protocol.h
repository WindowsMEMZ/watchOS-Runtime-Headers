//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLDerivativeGenerator_Protocol_h
#define CPLDerivativeGenerator_Protocol_h
@import Foundation;

@protocol CPLDerivativeGenerator 
/* class methods */
+ (BOOL)isMovieUTI:(id)uti;
+ (BOOL)canGenerateImageDerivativesFromUTI:(id)uti;
+ (void)generateDerivativeResourcesFromInputResource:(id)resource withAdjustments:(id)adjustments destinationDirectory:(id)directory fingerprintScheme:(id)scheme derivativesFilter:(id)filter recordChangeType:(unsigned long long)type includePosterFrameForVideo:(BOOL)video completionHandler:(id /* block */)handler;
+ (BOOL)isUnsupportedOriginalFormatError:(id)error;
@end

#endif /* CPLDerivativeGenerator_Protocol_h */
