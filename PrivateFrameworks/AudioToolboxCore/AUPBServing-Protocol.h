//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1387.3.4.0.0
//
#ifndef AUPBServing_Protocol_h
#define AUPBServing_Protocol_h
@import Foundation;

@protocol AUPBServing 
/* instance methods */
- (void)copyProcessingBlock:(unsigned int)block property:(unsigned int)property intoReply:(id /* block */)reply;
- (void)setProcessingBlock:(unsigned int)block property:(unsigned int)property value:(id)value withReply:(id /* block */)reply;
- (void)getAudioUnit:(unsigned int)unit propertyInfo:(unsigned int)info onScope:(unsigned int)scope element:(unsigned int)element inReply:(id /* block */)reply;
- (void)getAudioUnit:(unsigned int)unit property:(unsigned int)property onScope:(unsigned int)scope element:(unsigned int)element inReply:(id /* block */)reply;
- (void)setAudioUnit:(unsigned int)unit property:(unsigned int)property onScope:(unsigned int)scope element:(unsigned int)element value:(id)value withReply:(id /* block */)reply;
- (void)getAudioUnit:(unsigned int)unit parameter:(unsigned int)parameter onScope:(unsigned int)scope element:(unsigned int)element inReply:(id /* block */)reply;
- (void)setAudioUnit:(unsigned int)unit parameter:(unsigned int)parameter onScope:(unsigned int)scope element:(unsigned int)element value:(float)value withReply:(id /* block */)reply;
@end

#endif /* AUPBServing_Protocol_h */
