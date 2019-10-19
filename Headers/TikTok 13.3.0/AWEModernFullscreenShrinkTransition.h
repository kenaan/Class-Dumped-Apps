//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWETransitionContextProvider-Protocol.h"

@class NSString;
@protocol IESVideoPlayerProtocol;

@interface AWEModernFullscreenShrinkTransition : NSObject <AWETransitionContextProvider>
{
    id <IESVideoPlayerProtocol> _playController;
}

+ (void)load;
@property(retain, nonatomic) id <IESVideoPlayerProtocol> playController; // @synthesize playController=_playController;
- (void).cxx_destruct;
- (void)startDefaultAnimationWithFromVC:(id)arg1 toVC:(id)arg2 fromContextProvider:(id)arg3 toContextProvider:(id)arg4 containerView:(id)arg5 context:(id)arg6 interactionType:(unsigned long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)dealloc;
- (id)init;
- (unsigned long long)interactionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

