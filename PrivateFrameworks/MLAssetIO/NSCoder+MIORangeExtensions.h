//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef NSCoder_MIORangeExtensions_h
#define NSCoder_MIORangeExtensions_h
@import Foundation;

@interface NSCoder (MIORangeExtensions)
/* instance methods */
- (void)encodeMIORange:(struct _MIORange { long long x0; long long x1; })miorange forKey:(id)key;
- (struct _MIORange { long long x0; long long x1; })decodeMIORangeForKey:(id)key;
@end

#endif /* NSCoder_MIORangeExtensions_h */
