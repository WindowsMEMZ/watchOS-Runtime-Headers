//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef NSKeyedArchiver_CalClassAdditions_h
#define NSKeyedArchiver_CalClassAdditions_h
@import Foundation;

@interface NSKeyedArchiver (CalClassAdditions)
/* class methods */
+ (id)CalArchivedDataWithRootObject:(id)object ofClasses:(id)classes error:(id *)error;
+ (id)CalArchivedDataWithRootObject:(id)object ofClasses:(id)classes strict:(BOOL)strict error:(id *)error;
@end

#endif /* NSKeyedArchiver_CalClassAdditions_h */
