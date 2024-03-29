//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef RTIInputSystemDelegate_Protocol_h
#define RTIInputSystemDelegate_Protocol_h
@import Foundation;

@protocol RTIInputSystemDelegate <NSObject>
/* instance methods */
- (void)inputSystemService:(id)service didCreateInputSession:(id)session;
@optional
/* instance methods */
- (void)inputSystemService:(id)service prepareForInputSession:(id)session options:(id)options;
- (void)inputSystemService:(id)service inputSessionDidBegin:(id)begin;
- (void)inputSystemService:(id)service inputSessionDidBegin:(id)begin options:(id)options;
- (void)inputSystemService:(id)service inputSessionDidEnd:(id)end;
- (void)inputSystemService:(id)service inputSessionDidEnd:(id)end options:(id)options;
- (void)inputSystemService:(id)service inputSessionDidEnd:(id)end options:(id)options completion:(id /* block */)completion;
- (void)inputSystemService:(id)service inputSessionDidDie:(id)die;
- (void)inputSystemService:(id)service inputSessionDocumentDidChange:(id)change;
- (void)inputSystemService:(id)service inputSession:(id)session documentStateDidChange:(id)change;
- (void)inputSystemService:(id)service inputSession:(id)session documentTraitsDidChange:(id)change;
- (void)inputSystemService:(id)service inputSessionDidPause:(id)pause withReason:(id)reason;
- (void)inputSystemService:(id)service inputSessionDidUnpause:(id)unpause withReason:(id)reason;
- (void)inputSystemService:(id)service inputSession:(id)session textSuggestionsChanged:(id)changed;
- (void)inputSystemService:(id)service inputSession:(id)session didAddSupplementalLexicon:(id)lexicon;
- (void)inputSystemService:(id)service inputSession:(id)session didRemoveSupplementalLexicon:(id)lexicon;
- (void)inputSystemService:(id)service inputSession:(id)session didAddRTISupplementalLexicon:(id)lexicon;
- (void)inputSystemService:(id)service inputSession:(id)session didRemoveRTISupplementalLexicon:(id)lexicon;
- (void)inputSystemService:(id)service inputSession:(id)session performInputOperation:(id)operation;
- (void)inputSystemService:(id)service inputSession:(id)session performInputOperation:(id)operation withResponse:(id /* block */)response;
@end

#endif /* RTIInputSystemDelegate_Protocol_h */
