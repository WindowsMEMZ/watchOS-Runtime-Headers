//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDPersonNameComponentsBuilder_h
#define GDPersonNameComponentsBuilder_h
@import Foundation;

@class NSMutableArray;

@interface GDPersonNameComponentsBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *prefixes;
@property (retain, nonatomic) NSMutableArray *givenNames;
@property (retain, nonatomic) NSMutableArray *middleNames;
@property (retain, nonatomic) NSMutableArray *familyNames;
@property (retain, nonatomic) NSMutableArray *suffixes;
@property (retain, nonatomic) NSMutableArray *nicknames;

/* instance methods */
- (id)init;
@end

#endif /* GDPersonNameComponentsBuilder_h */
