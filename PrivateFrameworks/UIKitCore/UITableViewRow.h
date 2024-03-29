//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITableViewRow_h
#define UITableViewRow_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "UITableViewCell.h"

@interface UITableViewRow : NSObject<NSCoding> {
  /* instance variables */
  long long _indentationLevel;
}

@property (nonatomic) double height;
@property (retain, nonatomic) UITableViewCell *cell;

/* class methods */
+ (id)row;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setIndentationLevel:(long long)level;
- (long long)indentationLevel;
@end

#endif /* UITableViewRow_h */
