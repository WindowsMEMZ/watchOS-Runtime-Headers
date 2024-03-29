//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef NUIArrangementItem_Protocol_h
#define NUIArrangementItem_Protocol_h
@import Foundation;

@protocol NUIArrangementItem <NSObject>
/* instance methods */
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (double)effectiveBaselineOffsetFromContentBottom;
- (float)contentCompressionResistancePriorityForAxis:(long long)axis;
- (float)contentHuggingPriorityForAxis:(long long)axis;
@end

#endif /* NUIArrangementItem_Protocol_h */
