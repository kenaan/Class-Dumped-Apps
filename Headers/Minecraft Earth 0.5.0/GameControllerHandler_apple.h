//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCExtendedGamepadSnapshot, NSMutableDictionary;

@interface GameControllerHandler_apple : NSObject
{
    GCExtendedGamepadSnapshot *__extState;
    NSMutableDictionary *_controllerState;
}

@property(nonatomic) NSMutableDictionary *controllerState; // @synthesize controllerState=_controllerState;
@property(nonatomic) GCExtendedGamepadSnapshot *_extState; // @synthesize _extState=__extState;
- (void)setupHandlers:(id)arg1;
- (void)processIfButtonChanged:(_Bool)arg1 forButton:(id)arg2 gamePadId:(int)arg3;
- (void)processTrigger:(int)arg1 value:(float)arg2;
- (void)processStick:(int)arg1 x:(float)arg2 y:(float)arg3;
- (void)processButton:(int)arg1 withState:(_Bool)arg2;
- (void)setupController:(id)arg1;
- (void)onDisconnectController:(id)arg1;
- (void)onConnectController:(id)arg1;

@end

