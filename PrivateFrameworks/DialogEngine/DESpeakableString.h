//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef DESpeakableString_h
#define DESpeakableString_h
@import Foundation;

@class NSString;

@interface DESpeakableString : NSObject

@property void * This;
@property (retain) NSString *print;
@property (retain) NSString *speak;

/* instance methods */
- (id)init;
- (id)initWithPrint:(id)print speak:(id)speak;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
@end

#endif /* DESpeakableString_h */
