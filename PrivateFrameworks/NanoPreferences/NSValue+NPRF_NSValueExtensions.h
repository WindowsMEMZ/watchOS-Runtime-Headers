//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NSValue_NPRF_NSValueExtensions_h
#define NSValue_NPRF_NSValueExtensions_h
@import Foundation;

@interface NSValue (NPRF_NSValueExtensions)
/* class methods */
+ (BOOL)_nprf_encodingIsIntegralType:(const char *)type;
+ (BOOL)_nprf_encodingIsFloatingPointType:(const char *)type;
+ (BOOL)_nprf_encodingIsPrimitiveNumberType:(const char *)type;

/* instance methods */
- (BOOL)_nprf_isIntegralType;
- (BOOL)_nprf_isFloatingPointType;
- (BOOL)_nprf_isPrimitiveNumberType;
@end

#endif /* NSValue_NPRF_NSValueExtensions_h */
