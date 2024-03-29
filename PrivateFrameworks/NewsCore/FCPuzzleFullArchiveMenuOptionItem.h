//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPuzzleFullArchiveMenuOptionItem_h
#define FCPuzzleFullArchiveMenuOptionItem_h
@import Foundation;

@class NSString;

@interface FCPuzzleFullArchiveMenuOptionItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *icon;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, nonatomic) long long difficultyIndex;

/* instance methods */
- (id)initWithTitle:(id)title icon:(id)icon level:(unsigned long long)level difficultyIndex:(long long)index;
@end

#endif /* FCPuzzleFullArchiveMenuOptionItem_h */
