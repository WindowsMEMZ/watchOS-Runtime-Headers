//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef __NSFontExtraData_h
#define __NSFontExtraData_h
@import Foundation;

@class NSString;

@interface __NSFontExtraData : NSObject {
  /* instance variables */
  double _ascender;
  double _lineHeight;
  struct { unsigned int x :1 _isSystemFont; unsigned int x :1 _isIBScaledFont; unsigned int x :2 _hasVerticalMetrics; } _fFlags;
  NSString *_textStyleForScaling;
  double _pointSizeForScaling;
  double _maximumPointSizeAfterScaling;
}

/* instance methods */
- (void)dealloc;
- (BOOL)isEqualToExtraData:(id)data;
- (unsigned long long)hash;
- (BOOL)_hasVerticalMetricsWithPlatformFont:(struct __CTFont *)font;
@end

#endif /* __NSFontExtraData_h */
