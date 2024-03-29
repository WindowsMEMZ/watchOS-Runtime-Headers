//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLUpdatable_Protocol_h
#define MLUpdatable_Protocol_h
@import Foundation;

@protocol MLUpdatable <MLModeling, MLWritable>
/* class methods */
+ (id)loadModelFromCompiledArchive:(void *)archive modelVersionInfo:(id)info compilerVersionInfo:(id)info configuration:(id)configuration error:(id *)error;
/* instance methods */
- (void)setUpdateProgressHandlers:(id)handlers dispatchQueue:(id)queue;
- (void)updateModelWithData:(id)data;
- (void)resumeUpdateWithParameters:(id)parameters;
- (void)resumeUpdate;
- (void)cancelUpdate;
@end

#endif /* MLUpdatable_Protocol_h */
