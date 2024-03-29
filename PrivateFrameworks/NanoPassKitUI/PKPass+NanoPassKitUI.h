//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef PKPass_NanoPassKitUI_h
#define PKPass_NanoPassKitUI_h
@import Foundation;

@interface PKPass (NanoPassKitUI)
/* class methods */
+ (id)npkUIGenericCardBackgroundImageWithSymbolName:(id)name foregroundColor:(id)color backgroundColor:(id)color;

/* instance methods */
- (id)colorProfile;
- (void)_npkLocateFirstFrontPassFieldsInArray:(id)array outArray:(id)array count:(long long)count;
- (id)nonEmptyFrontFieldBuckets;
- (void)npkClearNonEmptyFrontFieldBuckets;
- (id)npkUIPaymentCardBackgroundImage;
- (id)npkUIPassholderImage;
- (BOOL)npkCanUseDynamicTransactionView;
- (BOOL)npkCanUseDynamicMaterialView;
- (BOOL)npkCanUseDynamicMotionView;
- (BOOL)npkDisplaysBarcodeInFront;
- (id)npkInformationText;
- (id)npkLocalizedPassType;
@end

#endif /* PKPass_NanoPassKitUI_h */
