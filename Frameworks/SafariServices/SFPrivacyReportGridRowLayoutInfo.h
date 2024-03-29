//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFPrivacyReportGridRowLayoutInfo_h
#define SFPrivacyReportGridRowLayoutInfo_h
@import Foundation;

@interface SFPrivacyReportGridRowLayoutInfo : NSObject

@property (readonly, nonatomic) long long row;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } itemRange;
@property (nonatomic) double height;

/* instance methods */
- (id)initWithRow:(long long)row itemRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
@end

#endif /* SFPrivacyReportGridRowLayoutInfo_h */
