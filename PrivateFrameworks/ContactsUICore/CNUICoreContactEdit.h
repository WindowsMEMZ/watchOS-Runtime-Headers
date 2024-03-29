//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUICoreContactEdit_h
#define CNUICoreContactEdit_h
@import Foundation;

@class CNContact;

@interface CNUICoreContactEdit : NSObject

@property (readonly, nonatomic) CNContact *original;
@property (readonly, nonatomic) CNContact *modified;
@property (readonly, nonatomic) BOOL originalAndModifiedDiffer;

/* instance methods */
- (id)initWithContact:(id)contact;
- (id)initWithOriginalContact:(id)contact modifiedContact:(id)contact;
- (id)editBySettingModifiedContact:(id)contact;
- (BOOL)modifiesContact:(id)contact;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* CNUICoreContactEdit_h */
