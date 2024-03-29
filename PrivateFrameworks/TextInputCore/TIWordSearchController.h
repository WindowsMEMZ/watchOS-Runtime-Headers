//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIWordSearchController_h
#define TIWordSearchController_h
@import Foundation;

@class NSMapTable;

@interface TIWordSearchController : NSObject

@property (retain, nonatomic) NSMapTable *inputModeToWordSearchMapping;

/* class methods */
+ (id)sharedWordSearchController;

/* instance methods */
- (id)init;
- (void)setWordSearch:(id)search forInputMode:(id)mode;
- (id)wordSearchForInputMode:(id)mode;
- (void)reset;
@end

#endif /* TIWordSearchController_h */
