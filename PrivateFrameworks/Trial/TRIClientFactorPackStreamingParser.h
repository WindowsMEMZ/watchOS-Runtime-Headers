//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIClientFactorPackStreamingParser_h
#define TRIClientFactorPackStreamingParser_h
@import Foundation;

@class NSData, NSString, TRIClientSelectedNamespace;

@interface TRIClientFactorPackStreamingParser : NSObject {
  /* instance variables */
  BOOL _emittedUnrecognizedFieldWarning;
}

@property (readonly, nonatomic) BOOL hasFactorPackId;
@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) BOOL hasSelectedNamespace;
@property (readonly, nonatomic) TRIClientSelectedNamespace *selectedNamespace;
@property (readonly, nonatomic) NSData *data;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data error:(id *)error;
- (void)enumerateFactorLevelsWithBlock:(id /* block */)block;
- (unsigned int)_fieldTagForFieldName:(id)name;
- (void)_parseWithHandleFactorLevel:(id /* block */)level;
- (id)downloadedFactorsWithPaths:(id)paths;
@end

#endif /* TRIClientFactorPackStreamingParser_h */
