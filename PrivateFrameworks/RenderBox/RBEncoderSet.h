//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBEncoderSet_h
#define RBEncoderSet_h
@import Foundation;

@protocol {refcounted_ptr<RB::Encoder::FontSet>="_p"^{FontSet}};

@interface RBEncoderSet : NSObject {
  /* instance variables */
  struct refcounted_ptr<RB::Encoder::FontSet> { struct FontSet *_p; } _font_set;
  BOOL _final;
}

/* instance methods */
- (id)init;
- (void)addDisplayList:(id)list;
- (void)commit;
@end

#endif /* RBEncoderSet_h */
