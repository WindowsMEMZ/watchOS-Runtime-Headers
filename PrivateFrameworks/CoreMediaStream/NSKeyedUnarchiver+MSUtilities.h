//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef NSKeyedUnarchiver_MSUtilities_h
#define NSKeyedUnarchiver_MSUtilities_h
@import Foundation;

@interface NSKeyedUnarchiver (MSUtilities)
/* class methods */
+ (id)MSSafeUnarchiveAllowedClasses;
+ (id)MSSafeUnarchiveObjectWithData:(id)data outError:(id *)error;
+ (id)MSSafeUnarchiveObjectWithFile:(id)file outError:(id *)error;
@end

#endif /* NSKeyedUnarchiver_MSUtilities_h */
