//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 72.0.0.0.0
//
#ifndef RPDShaderProgram_h
#define RPDShaderProgram_h
@import Foundation;

#include "RPDProgramBinary.h"

@class NSString;

@interface RPDShaderProgram : NSObject

@property (nonatomic) unsigned int program;
@property (nonatomic) BOOL linkSucceeded;
@property (copy, nonatomic) NSString *logMessage;
@property (readonly, nonatomic) RPDProgramBinary *programBinary;

/* instance methods */
- (id)initWithVertexSource:(id)source fragmentSource:(id)source;
- (id)initWithTransformFeedbackVertexSource:(id)source fragmentSource:(id)source feedbackVaryings:(const char * *)varyings feedbackVaryingsCount:(int)count;
- (id)initWithVertexSource:(id)source fragmentSource:(id)source feedbackVaryings:(const char * *)varyings feedbackVaryingsCount:(int)count;
- (id)initWithProgramBinary:(id)binary;
- (void)dealloc;
@end

#endif /* RPDShaderProgram_h */
