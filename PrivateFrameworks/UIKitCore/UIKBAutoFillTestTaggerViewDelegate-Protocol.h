//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBAutoFillTestTaggerViewDelegate_Protocol_h
#define UIKBAutoFillTestTaggerViewDelegate_Protocol_h
@import Foundation;

@protocol UIKBAutoFillTestTaggerViewDelegate <NSObject>
@optional
/* instance methods */
- (void)taggerViewDidFinish:(id)finish;
- (long long)taggerView:(id)view selectedTypeForFormRequest:(id)request;
- (long long)taggerView:(id)view selectedTypeForTextFieldRequest:(id)request;
- (void)taggerView:(id)view willTagRequest:(id)request;
- (void)taggerView:(id)view didTagFormRequest:(id)request withSelectedType:(long long)type;
- (void)taggerView:(id)view didTagTextFieldRequest:(id)request withSelectedType:(long long)type;
@end

#endif /* UIKBAutoFillTestTaggerViewDelegate_Protocol_h */
