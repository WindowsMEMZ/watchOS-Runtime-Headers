//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebEvent_h
#define WebEvent_h
@import Foundation;

@class NSArray, NSString;

@interface WebEvent : NSObject

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } locationInWindow;
@property (readonly, retain, nonatomic) NSString *characters;
@property (readonly, retain, nonatomic) NSString *charactersIgnoringModifiers;
@property (readonly, nonatomic) unsigned int modifierFlags;
@property (readonly, nonatomic) BOOL keyRepeating;
@property (readonly, retain, nonatomic) NSString *inputManagerHint;
@property (readonly, nonatomic) unsigned long long keyboardFlags;
@property (readonly, nonatomic) unsigned short keyCode;
@property (readonly, nonatomic) BOOL tabKey;
@property (readonly, nonatomic) float deltaX;
@property (readonly, nonatomic) float deltaY;
@property (readonly, nonatomic) unsigned int touchCount;
@property (readonly, retain, nonatomic) NSArray *touchLocations;
@property (readonly, retain, nonatomic) NSArray *touchIdentifiers;
@property (readonly, retain, nonatomic) NSArray *touchPhases;
@property (readonly, nonatomic) BOOL isGesture;
@property (readonly, nonatomic) float gestureScale;
@property (readonly, nonatomic) float gestureRotation;
@property (nonatomic) BOOL wasHandled;

/* class methods */
+ (unsigned int)modifierFlags;

/* instance methods */
- (id)initWithMouseEventType:(int)type timeStamp:(double)stamp location:(struct CGPoint { double x0; double x1; })location;
- (id)initWithMouseEventType:(int)type timeStamp:(double)stamp location:(struct CGPoint { double x0; double x1; })location modifiers:(unsigned int)modifiers;
- (id)initWithScrollWheelEventWithTimeStamp:(double)stamp location:(struct CGPoint { double x0; double x1; })location deltaX:(float)x deltaY:(float)y;
- (id)initWithTouchEventType:(int)type timeStamp:(double)stamp location:(struct CGPoint { double x0; double x1; })location modifiers:(unsigned int)modifiers touchCount:(unsigned int)count touchLocations:(id)locations touchIdentifiers:(id)identifiers touchPhases:(id)phases isGesture:(BOOL)gesture gestureScale:(float)scale gestureRotation:(float)rotation;
- (id)initWithKeyEventType:(int)type timeStamp:(double)stamp characters:(id)characters charactersIgnoringModifiers:(id)modifiers modifiers:(unsigned int)modifiers isRepeating:(BOOL)repeating withFlags:(unsigned long long)flags withInputManagerHint:(id)hint keyCode:(unsigned short)code isTabKey:(BOOL)key;
- (void)dealloc;
- (id)_typeDescription;
- (id)_modiferFlagsDescription;
- (id)_touchLocationsDescription:(id)description;
- (id)_touchIdentifiersDescription;
- (id)_touchPhaseDescription:(int)description;
- (id)_touchPhasesDescription;
- (id)_eventDescription;
- (id)description;
- (BOOL)isKeyRepeating;
- (BOOL)isTabKey;
@end

#endif /* WebEvent_h */
