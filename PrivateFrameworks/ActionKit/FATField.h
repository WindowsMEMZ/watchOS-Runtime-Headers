//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef FATField_h
#define FATField_h
@import Foundation;

#include "FATField.h"

@class NSString;

@interface FATField : NSObject

@property unsigned int index;
@property unsigned int type;
@property BOOL optional;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) Class structClass;
@property (retain, nonatomic) FATField *valueField;
@property (retain, nonatomic) FATField *keyField;

/* class methods */
+ (id)fieldWithIndex:(unsigned int)index type:(unsigned int)type optional:(BOOL)optional name:(id)name;
+ (id)fieldWithIndex:(unsigned int)index type:(unsigned int)type optional:(BOOL)optional name:(id)name structClass:(Class)class;
+ (id)fieldWithIndex:(unsigned int)index type:(unsigned int)type optional:(BOOL)optional name:(id)name valueField:(id)field;
+ (id)fieldWithIndex:(unsigned int)index type:(unsigned int)type optional:(BOOL)optional name:(id)name keyField:(id)field valueField:(id)field;
+ (id)nameForFatFieldType:(unsigned int)type;

/* instance methods */
- (id)description;
@end

#endif /* FATField_h */
