//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMStreamVirtualTable_h
#define BMStreamVirtualTable_h
@import Foundation;

#include "BMSQLSchema.h"

@interface BMStreamVirtualTable : NSObject

@property (readonly, nonatomic) BOOL acceptPublisherOptions;
@property (readonly, nonatomic) BMSQLSchema *schema;
@property (readonly, copy, nonatomic) id /* block */ publisherBlock;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithStream:(id)stream;
- (id)initWithStream:(id)stream useCase:(id)case;
- (id)initWithSchema:(id)schema publisherBlock:(id /* block */)block;
- (id)initWithSchema:(id)schema publisherBlockWithOptions:(id /* block */)options acceptPublisherOptions:(BOOL)options;
- (id)description;
@end

#endif /* BMStreamVirtualTable_h */
