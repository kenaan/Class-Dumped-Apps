//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESMMGameActionHandler-Protocol.h"

@class IESMMEffectGroup, NSDictionary, NSString;
@protocol IESMMGameActionHandlerDelegate, IESMMGameMessageDispatcher;

@interface IESMMGameEffectActionHandler : NSObject <IESMMGameActionHandler>
{
    id <IESMMGameActionHandlerDelegate> _delegate;
    id <IESMMGameMessageDispatcher> _messageDispatcher;
    IESMMEffectGroup *_effectFilter;
    NSDictionary *_handleBlocks;
}

@property(retain, nonatomic) NSDictionary *handleBlocks; // @synthesize handleBlocks=_handleBlocks;
@property(nonatomic) __weak IESMMEffectGroup *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(nonatomic) __weak id <IESMMGameMessageDispatcher> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(nonatomic) __weak id <IESMMGameActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1 fromPlayer:(id)arg2;
- (_Bool)canHandleAction:(id)arg1;
- (void)handleFinishManipulationAction:(id)arg1;
- (void)handleFinishManipulationSendAction:(id)arg1;
- (void)handleRootAnchorRequestAction:(id)arg1 fromPlayer:(id)arg2;
- (void)handleEventAction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

