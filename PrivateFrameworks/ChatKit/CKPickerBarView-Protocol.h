//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKPickerBarView_Protocol_h
#define CKPickerBarView_Protocol_h
@import Foundation;

@protocol CKPickerBarView <NSObject>

@property (copy, nonatomic) NSArray *acknowledgmentViews;

/* instance methods */
- (id)initWithGroupCounts:(id)counts selectedType:(long long)type orientation:(char)orientation serviceName:(id)name;
- (void)performShowAnimation:(id /* block */)animation;
- (void)performSelectedAnimation:(id /* block */)animation;
- (void)performSendAnimation:(id /* block */)animation;
- (void)performCancelAnimation:(id /* block */)animation;
@optional
/* instance methods */
- (void)setAnchorVerticalOrientation:(char)orientation;
@end

#endif /* CKPickerBarView_Protocol_h */
