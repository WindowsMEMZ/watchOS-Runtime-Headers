//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef NSError_GEOError_h
#define NSError_GEOError_h
@import Foundation;

@interface NSError (GEOError)
/* class methods */
+ (id)_geo_errorFromXPCData:(id)xpcdata;
+ (id)_geo_errorFromXPCError:(id)xpcerror;
+ (id)zilchDecoderErrorForNoSolution;
+ (id)GEOErrorWithCode:(long long)code;
+ (id)GEOErrorWithCode:(long long)code reason:(id)reason;
+ (id)GEOErrorWithCode:(long long)code reason:(id)reason underlyingError:(id)error;
+ (id)GEOErrorWithCode:(long long)code reason:(id)reason userInfo:(id)info;
+ (id)GEOErrorWithCode:(long long)code userInfo:(id)info;
+ (id)geo_insufficientFilesystemCapacityWithBytesNeeded:(unsigned long long)needed bytesAvailable:(unsigned long long)available;

/* instance methods */
- (id)_geo_etaTrafficUpdateErrorInfo;
- (BOOL)_geo_isXPCInterruptedError;
- (id)_geo_newXPCData;
- (id)zilchDecoderTileLoadingError;
- (id)_geo_directionsErrorInfo;
- (BOOL)_geo_isNetworkError;
@end

#endif /* NSError_GEOError_h */
