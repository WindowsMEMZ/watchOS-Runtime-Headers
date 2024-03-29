//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1387.3.4.0.0
//
#ifndef AUAudioUnitXPCProtocol_Protocol_h
#define AUAudioUnitXPCProtocol_Protocol_h
@import Foundation;

@protocol AUAudioUnitXPCProtocol <_AURemoteParameterSynchronization>
/* instance methods */
- (void)open:(id /* block */)open;
- (void)close:(id /* block */)close;
- (void)getBusses:(unsigned int)busses reply:(id /* block */)reply;
- (void)initialize:(unsigned long long)initialize reply:(id /* block */)reply;
- (void)updateHostCallbacks:(unsigned long long)callbacks reply:(id /* block */)reply;
- (void)createRenderPipe:(int)pipe formats:(id)formats maxFrames:(unsigned int)frames midiOutSizeHint:(unsigned int)hint resources:(id)resources reply:(id /* block */)reply;
- (void)destroyRenderPipe:(unsigned int)pipe reply:(id /* block */)reply;
- (void)updateWorkgroupMirror:(id)mirror reply:(id /* block */)reply;
- (void)uninitialize:(id /* block */)uninitialize;
- (void)reset:(id /* block */)reset;
- (void)setBusFormat:(unsigned int)format scope:(unsigned int)scope format:(id)format reply:(id /* block */)reply;
- (void)setBusCount:(unsigned long long)count scope:(unsigned int)scope reply:(id /* block */)reply;
- (void)valueForProperty:(id)property propagateError:(BOOL)error reply:(id /* block */)reply;
- (void)setValue:(id)value forProperty:(id)property propagateError:(BOOL)error reply:(id /* block */)reply;
- (void)addPropertyObserver:(id)observer context:(unsigned long long)context reply:(id /* block */)reply;
- (void)removePropertyObserver:(id)observer context:(unsigned long long)context reply:(id /* block */)reply;
- (void)valueForKey:(id)key reply:(id /* block */)reply;
- (void)setValue:(id)value forKey:(id)key reply:(id /* block */)reply;
- (void)getParameterTree:(id /* block */)tree;
- (void)getParameter:(unsigned long long)parameter sequenceNumber:(unsigned int)number reply:(id /* block */)reply;
- (void)parameterStringFromValue:(float)value currentValue:(BOOL)value address:(unsigned long long)address reply:(id /* block */)reply;
- (void)parameterValueFromString:(id)string address:(unsigned long long)address reply:(id /* block */)reply;
- (void)parameterNode:(id)node displayNameWithLength:(long long)length reply:(id /* block */)reply;
- (void)parametersForOverviewWithCount:(long long)count reply:(id /* block */)reply;
- (void)supportedViewConfigurations:(id)configurations reply:(id /* block */)reply;
- (void)selectViewConfiguration:(id)configuration reply:(id /* block */)reply;
- (void)profileStateForCable:(unsigned char)cable channel:(unsigned char)channel reply:(id /* block */)reply;
- (void)enableProfile:(id)profile cable:(unsigned char)cable onChannel:(unsigned char)channel reply:(id /* block */)reply;
- (void)disableProfile:(id)profile cable:(unsigned char)cable onChannel:(unsigned char)channel reply:(id /* block */)reply;
- (void)loadUserPresets:(id /* block */)presets;
- (void)saveUserPreset:(id)preset state:(id)state reply:(id /* block */)reply;
- (void)deleteUserPreset:(id)preset reply:(id /* block */)reply;
- (void)presetStateFor:(id)for reply:(id /* block */)reply;
- (void)synthesizeSpeechRequest:(id)request reply:(id /* block */)reply;
- (void)cancelSpeechRequest:(id /* block */)request;
- (void)getSpeechVoices:(id /* block */)voices;
- (void)getCustomMessageChannelFor:(id)for reply:(id /* block */)reply;
@end

#endif /* AUAudioUnitXPCProtocol_Protocol_h */
