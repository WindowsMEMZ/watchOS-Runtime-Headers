//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardLayoutFactory_h
#define TIKeyboardLayoutFactory_h
@import Foundation;

@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject

@property (readonly, nonatomic) void * layoutsLibraryHandle;
@property (retain) NSMutableDictionary *internalCache;

/* class methods */
+ (id)sharedKeyboardFactory;
+ (id)layoutsFileName;

/* instance methods */
- (id)init;
- (id)keyboardWithName:(id)name inCache:(id)cache;
- (id)keyboardPrefixForWidth:(double)width andEdge:(BOOL)edge;
@end

#endif /* TIKeyboardLayoutFactory_h */
