//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef NSError_MapsSharedExtras_h
#define NSError_MapsSharedExtras_h
@import Foundation;

@interface NSError (MapsSharedExtras)
/* class methods */
+ (id)MSPSyncErrorWithCode:(long long)code description:(id)description;
+ (id)_maps_cancellationError;

/* instance methods */
- (BOOL)isMSPSyncErrorWithCode:(long long)code;
- (BOOL)_maps_isCloudKitErrorWithCode:(long long)code partialErrorsPolicy:(long long)policy;
- (BOOL)_maps_isCloudKitErrorContainingNotFoundMarkersOnly;
- (BOOL)_maps_isCloudKitTokenExpirationError;
- (BOOL)_maps_isFileNotFoundError;
- (BOOL)_maps_isFoundationWriteError;
- (BOOL)_maps_isCancellation;
- (BOOL)_maps_isErrorOfDomain:(id)domain code:(long long)code;
@end

#endif /* NSError_MapsSharedExtras_h */
