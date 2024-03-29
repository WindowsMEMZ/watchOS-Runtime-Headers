//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLEngineComponentEnumerator_h
#define CPLEngineComponentEnumerator_h
@import Foundation;

@class NSEnumerator;

@interface CPLEngineComponentEnumerator : NSObject {
  /* instance variables */
  NSEnumerator *_enumerator;
  id /* block */ _handler;
}

/* instance methods */
- (id)initWithComponents:(id)components handler:(id /* block */)handler;
- (void)handleNextComponent;
@end

#endif /* CPLEngineComponentEnumerator_h */
